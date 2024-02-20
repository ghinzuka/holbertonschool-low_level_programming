#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'print the alphabet in lowercase except q & e'
 *
 * Return: Always return  0
 */

int main(void)

{
        int n;

        for (n = '0'; n <= '9'; n++)
        {
                putchar('0' + n);
        }

        putchar('\n');
        return (0);
}  
