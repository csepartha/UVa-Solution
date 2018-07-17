#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int p;
    while(scanf("%s", s)!=EOF)
    {
        p=strlen(s);
        printf("The string '%s' contains %d palindromes\n", s, p);
    }
    return 0;
}
