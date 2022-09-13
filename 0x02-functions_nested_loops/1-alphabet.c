#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * followed bt a new line
 * Return: Always 0 
 */

void print_alphabet(void);
{
  	char ch;
	ch = 'a'
	while (ch <= 'z')
       {
           _putchar(ch);
	   ch++
	}
       _putchar('\n');
       return (0);
}
