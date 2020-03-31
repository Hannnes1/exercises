
/*
 *  Using bit operators in C
 *
 *  Samples:
 *  - bit_operators
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Test macros
#define EQUALS(v1, v2) printf( (v1) == (v2) ? "true\n" : "false\n")
#define BYTE_EQUALS(s1, s2) printf( (s1 ^ s2) == 0 ? "true\n" : "false\n")


// A shorter type name (byte_t) for unsigned char (i.e. a byte)
typedef unsigned char byte_t;

// ---------- Declarations --------------

byte_t byte_set_index(byte_t byte, int index);

bool byte_get_index(byte_t byte, int index);

byte_t byte_clear_index(byte_t byte, int index);

byte_t byte_and(byte_t b1, byte_t b2);

bool byte_equals(byte_t b1, byte_t b2);

byte_t byte_or(byte_t b1, byte_t b2);

bool byte_intersect(byte_t b1, byte_t b2);

int main(void) {

    EQUALS(byte_or(0x00, 0x01), 0x01);


    EQUALS(byte_and(0x01, 0x01), 0x01);

    EQUALS(byte_intersect(0xFA, 0x0A), true);
    EQUALS(byte_intersect(0xF0, 0x0F), false);

    BYTE_EQUALS(byte_set_index(0x00, 0), 0x01);
    BYTE_EQUALS(byte_set_index(0x00, 1), 0x02);
    BYTE_EQUALS(byte_set_index(0x00, 2), 0x04);

    BYTE_EQUALS(byte_get_index(0x0F, 0), true);  // I.e. bit 0 is set to 1
    BYTE_EQUALS(byte_get_index(0x0F, 4), false); // Bit 4 is 0

    BYTE_EQUALS(byte_clear_index(0xFF, 0), 0xFE);
    BYTE_EQUALS(byte_clear_index(0xFF, 1), 0xFD);
    BYTE_EQUALS(byte_clear_index(0xFF, 2), 0xFB);

    EQUALS(byte_equals(0xFA, 0xFA), true);
    EQUALS(byte_equals(0xFE, 0xFA), false);

    return 0;
}

// ----------- Implementations of functions ---------------------


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


