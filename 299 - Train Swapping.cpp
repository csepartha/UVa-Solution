#include <stdio.h>

int main()
{
    int a[1020],i,j,n,swap,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int c=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }

    return 0;
}
