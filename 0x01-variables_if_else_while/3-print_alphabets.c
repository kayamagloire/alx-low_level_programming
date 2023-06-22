#include <stdio.h>
/**
 * main - _print alphabets is a program that prints the alphabet
 * in lowercase, and then in uppercase, followed by a new line.
 * Return: 0 (succes)
 */

int main(void)
{
        char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(alpha[i]);
        }
	putchar('\n');
        return (0);
}
