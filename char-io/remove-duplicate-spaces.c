#include <stdio.h>

/*Remove duplicate white space characters*/
int main()
{
    int c;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ') 
        {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
        }
        putchar(c);
    }
}