#include <stdlib.h>
#include <stdio.h>

int main(void)
{
        int *p;
        while(1)
        {
                p = malloc(128);
                printf("%ld\n", (long)p);
        }
        return (0);
}

//a forma como o malloc foi feito e não temos o free
