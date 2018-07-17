#include <stdio.h>

int main()
{
    long int a,b,s=0;
    while(scanf("%ld%ld", &a,&b)!=EOF)
    {
        s=a-b;
        if(s<0)
        printf("%ld\n", (s*(-1)));
        else
            printf("%ld\n", s);
    }
    return 0;
}
