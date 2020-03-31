
/*
 *  Using bit operators in C
 *
 *  Can't write binary literals (constants) directly
 *  in code, we use hexadecimal notation.
 */
#include <stdio.h>

// Test macro
#define BYTE_EQUALS(s1, s2) printf( (s1 ^ s2) == 0 ? "true\n" : "false\n")

// A shorter type name (uchar_t) for unsigned char (i.e. a byte)
typedef unsigned char byte_t;

int main(void) {

    printf("%zu\n", sizeof(byte_t));  // 1
    printf("%zu\n", sizeof(0x00));    // 4, a hex value int constant
    printf("%zu\n", sizeof((byte_t) 0x00));   // Cast to byte
    /*
      Examples hex int's and byte_t binary

        Hex        Binary
        0x0        0000 0000
        0x1        0000 0001
        0x2        0000 0010
        0x4        0000 0100
        0x8        0000 1000
        0x10       0001 0000
        0x1F       0001 1111
        0xF1       1111 0001
        0xAB       1010 1011
        0xFF       1111 1111
    */
    byte_t and = 0x03 & 0x02;  // & is bitwise and (NOTE: result int but casted to byte_t)
    BYTE_EQUALS(and, 0x02);  // 0000 0011 & 0000 0010 = 0000 0010

    byte_t or = 0x04 | 0x02;   // | is bitwise or
    BYTE_EQUALS(or, 0x06);   // 0000 0010 | 0000 0010 = 0000 0110

    byte_t xor = 0x1A ^ 0x15;  // ^ is xor
    BYTE_EQUALS(xor, 0x0F);  // 0001 1010 ^ 0001 0101 = 0000 1111

    byte_t bit_flip = (byte_t) ~0x00;   // ~ is bit flip
    BYTE_EQUALS(bit_flip, 0xFF);

    BYTE_EQUALS(0x01 << 1, 0x02);   // Shift left
    BYTE_EQUALS(0x01 << 2, 0x04);
    BYTE_EQUALS(0x10 >> 1, 0x08);  // Shift right
    BYTE_EQUALS(0x10 >> 2, 0x04);

    byte_t zero_byte = 0x00;
    BYTE_EQUALS(zero_byte | 0x01 << 2, 0x04);  // Set a bit
    BYTE_EQUALS(0x04 & ~(0x01 << 2), zero_byte);  // Clear a bit

    return 0;
}





