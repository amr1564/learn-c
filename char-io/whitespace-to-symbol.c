#include <stdio.h>

/*Replace white space with character representation*/
int main()
{
    int c;
    while ((c = getchar()) != EOF) 
    {
        if (c == '\t')
            printf("\\t");
        else if (c == ' ')
            printf("\\s");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}