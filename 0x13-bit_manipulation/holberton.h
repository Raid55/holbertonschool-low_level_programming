#ifndef __BIT_MANIP__
#define __BIT_MANIP__

/*libs area*/
#include <stdlib.h>
void _putchar(char);

/*prototypes*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*helper funcs*/
void print_binary_helper(unsigned long int n);
int get_bit_helper(unsigned long int n, unsigned int index);

/*adv. prototypes*/
int get_endianness(void);

#endif
