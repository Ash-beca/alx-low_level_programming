#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * then in uppercase,
 * followed by a new lines
 * Return: Always 0 (Success)
 */

   int main(void)
{
         int ch;

         for (ch = 'a'; ch <= 'z'; ch++)
	         putchar(ch);
         for (ch = 'A'; ch <= 'Z'; ch++)
	         putchar(ch);
        putchar('\n');
        return (0);
	
}
