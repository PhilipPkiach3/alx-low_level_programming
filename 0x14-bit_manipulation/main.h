#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(usigned long int n);
int get_bit(usigned log int n, usigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
