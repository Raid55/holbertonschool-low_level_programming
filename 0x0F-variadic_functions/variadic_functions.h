#ifndef VARIAD
#define VARIAD

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formType - structure for types of chars
 *
 * @type: type of char
 * @byteSize: size of type
 */
/* typedef struct formType */
/* { */
/*     char type; */
/* 	char *flag; */
/*     int byteSize; */
/* } formatType; */

#endif
