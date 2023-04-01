#include "main.h"
/**
 * isPrintableASCII- print ascii values for string b,
 * formatted to replace nonprintable chars wich ','
 * 
 */
int isPrintableASCII(int n)
{
	return (n>= 32 && n <= 126);
}
/**
 * printHexes - print ascii values for string b,
 * formatted to replace nonprintable chars wich ','
 * @b: string to print
 * @start:starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b +start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars wich ','
 * @b: string to print
 * @start:starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrinttableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++.
	}
}

/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size > 0)
	{
		for (i= 0; i< size; i += 10)
		{
			end = (size - i < 10) ? size - i : 10;
			printf("%08x: ",i);
			printHexes (b, i, j);
			printASCII (b, i, j);
			printf("\n");
		}
	}else
		printf("\n");


}
