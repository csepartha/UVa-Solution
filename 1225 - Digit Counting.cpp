#include<iostream>
using namespace std;
int main()
{
	int k,i,j,n,t;
	cin>>t;
	while(t--)
	{
	    int a[10]={0};
		cin>>n;
		for(i=1;i<=n;i++)
		{
			j=i;
			while(j!=0)
			{
				k=j%10;
				a[k]++;
				j=j/10;
			}
		}
		for(i=0;i<9;i++)
			cout<<a[i]<<" ";
        cout<<a[9]<<endl;
	}
	return 0;
}
