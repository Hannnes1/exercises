/*
*
 *    Implementation of API
 *
 *    A simply directed linked list
*
*           struct List   struct Node
*             |-------|    |-------|   |-------|   |-------|
*             | head -|--->|       |   |       |   |       |
*    list --> |       | |--|-prev  |<--|-prev  |<--|- prev |
*             |       |    |_______|   |_______|   |_______|<---|
*             | last -|-----------------------------------------|
*             |_______|
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "ex5list_module.h"     // Included here to check function declarations are the same as definitions

// TODO paste definitions here