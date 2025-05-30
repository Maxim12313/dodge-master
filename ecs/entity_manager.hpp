#pragma once
#include "common.hpp"
#include <stack>

class EntityManager {
private:
    stack<Entity> available_entities;

public:
    EntityManager() {
        for (int id = 0; id < MAX_ENTITIES; id++) {
            available_entities.push(Entity(id));
        }
    }
    Entity get_entity() {
        // NOTE: consider whether deny or just flag full when full
        assert(!available_entities.empty() && "full");
        Entity res = available_entities.top();
        available_entities.pop();
        return res;
    }
    void return_entity(Entity entity) {
        available_entities.push(Entity(entity));
    }
};
