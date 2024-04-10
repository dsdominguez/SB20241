#include <stdio.h>

typedef unsigned char *byte_pointer;

void prn_bin_from_hex_digit(char hex);

void show_binary_from_hex(byte_pointer start, size_t len);

void show_bytes(byte_pointer start, size_t len);