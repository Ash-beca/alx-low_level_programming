#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * followed bt a new line
 * Return: Always 0 
 */


void print_alphabet(void){
	
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
}


int main (void)
{
	 print_alphabet();

	
        return (0);
}
