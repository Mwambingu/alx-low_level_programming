#ifndef MAIN_H
#define MAIN_H
/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x04-pointers_arrays_strings directory.
 */

#include <stdlib.h>

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *rot13(char *str);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
#endif
