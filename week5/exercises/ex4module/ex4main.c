

/*
 *    Testing the bit set module
 */
#include <stdio.h>
#include <stdbool.h>
#include "ex4bit_module.h" // Past in text of ex6bit_module.h, types and function declarations


// Test macros
#define EQUALS(v1, v2) printf( (v1) == (v2) ? "true\n" : "false\n")
#define BYTE_EQUALS(s1, s2) printf( (s1 ^ s2) == 0 ? "true\n" : "false\n")

void main() {

    // All declared in ex4bit_module.h
    EQUALS(byte_and(0x01, 0x01), 0x01);
    EQUALS(byte_or(0x00, 0x01), 0x01);
    
    EQUALS(byte_intersect(0xFA, 0x0A), true);
    EQUALS(byte_intersect(0xF0, 0x0F), false);

    BYTE_EQUALS(byte_set_index(0x00, 0), 0x01);
    BYTE_EQUALS(byte_set_index(0x00, 1), 0x02);
    BYTE_EQUALS(byte_set_index(0x00, 2), 0x04);

    BYTE_EQUALS(byte_get_index(0x0F, 0), true);
    BYTE_EQUALS(byte_get_index(0x0F, 4), false);

    BYTE_EQUALS(byte_clear_index(0xFF, 0), 0xFE);
    BYTE_EQUALS(byte_clear_index(0xFF, 1), 0xFD);
    BYTE_EQUALS(byte_clear_index(0xFF, 2), 0xFB);

    EQUALS(byte_equals(0xFA, 0xFA), true);   
    EQUALS(byte_equals(0xFE, 0xFA), false);
}



