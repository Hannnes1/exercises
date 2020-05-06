/*
 *    Implementation of API
 */

#include <stdbool.h>
#include "ex4bit_module.h"  // // Included here to check function declarations are the same as definitions

byte_t byte_or(byte_t b1, byte_t b2) {
    return b1 | b2;
}

byte_t byte_and(byte_t b1, byte_t b2){
    return b1 & b2;
}

bool byte_intersect(byte_t b1, byte_t b2){
    if((b1 & b2) > 0){
        return true;
    } else{
        return false;
    }
}

byte_t byte_set_index(byte_t byte, int index){
    return byte | 0x01 << index;
}

bool byte_get_index(byte_t byte, int index){
    if((byte & 0x01 << index) == (0x01 << index)){
        return true;
    } else{
        return false;
    }
}

byte_t byte_clear_index(byte_t byte, int index){
    return byte & ~(0x01 << index);
}

bool byte_equals(byte_t b1, byte_t b2){
    if(b1 == b2){
        return true;
    }else{
        return false;
    }
}



