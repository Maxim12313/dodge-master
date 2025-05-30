#pragma once
#include <cassert>
#include <cstdint>

using namespace std;

using Entity = uint32_t;
using Signature = uint32_t;
using Type_ID = uint32_t;

constexpr int MAX_ENTITIES = 30;
constexpr int MAX_COMPONENTS = 30;
constexpr int MAX_SYSTEMS = 30;
