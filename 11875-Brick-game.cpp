#include <stdio.h>

int main()
{
    int n,i,j,swap,k,a;
    scanf("%d", &a);
    for(k=1;k<=a;k++)
    {
        scanf("%d", &n);
    int p[n+1];
    for(i=0;i<n;i++)
        scanf("%d", &p[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                swap=p[i];
                p[i]=p[j];
                p[j]=swap;
            }
        }
    }
    printf("Case %d: %d\n",k, p[n/2]);
    }
    return 0;
}
