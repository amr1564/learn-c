#include <stdio.h>
#define MAXLINE 1000

/*Print all lines greater than the bound*/

int getLine(char line[], int limit);
void copy(char from[], char to[]);

int getLine(char line[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (line[i] == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char from[], char to[])
{
    int i;

    while ((to[i] = from[i]) != '\0')
        ++i;
}

int main()
{
    int len, bound;
    char current[MAXLINE];

    bound = 5;

    while ((len = getLine(current, MAXLINE)) > 0)
    {
        if (len > bound)
        {
            printf("%s\n", current);
        }
    }

    return 0;
}