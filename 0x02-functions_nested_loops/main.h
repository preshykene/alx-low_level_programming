#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * putchar - writes the char c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char *c);

/**
 * print_alphabet - prints alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower
 * @c: parameter to compare
 * Return: 1 or 0;
 */
int _islower(int c);
/**
 * _isalpha - prints if its alphabet
 * @c: character to compare
 * Return: 1 or 0;
 */
int _isalpha(int c);
/**
 * print_sign - print a sign based off of n
 * @n: integer to input
 * Return: 1 or 0;
 */ 
int print_sign(int n);
/**
 * _abs - prints an absolute number
 *@int: integer
 *Return: 1 or 0;
 */
int _abs(int);
/**
 * print_last_last_digit - print last digit
 * @int: integer
 * Return: 1 or 0;
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer go go gooo
 *
 *
 */
void jack_bauer(void);
/**
 * times_table - prints a time table
 *
 *
 */
void times_table(void);
/**
 * add - adds two numbers
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 * Return: always set to 0;
 */
void print_to_98(int n);

#endif
