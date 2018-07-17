#include <stdio.h>

int main()
{
    int t,x,y,z,sum=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d", &x,&y,&z);
        sum = (((2*x)-y)*z)/(x+y);
        printf("%d\n", sum);
    }
    return 0;
}
