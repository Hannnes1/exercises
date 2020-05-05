
/*
 *  Public API for the bit set ex4module
 */
#include<stdbool.h>

#ifndef BIT_MODULE_H
#define BIT_MODULE_H

typedef unsigned char byte_t;

byte_t byte_set_index(byte_t byte, int index);

bool byte_get_index(byte_t byte, int index);

byte_t byte_clear_index(byte_t byte, int index);

byte_t byte_and(byte_t b1, byte_t b2);

bool byte_equals(byte_t b1, byte_t b2);

byte_t byte_or(byte_t b1, byte_t b2);

bool byte_intersect(byte_t b1, byte_t b2);

#endif //BIT_MODULE_H
