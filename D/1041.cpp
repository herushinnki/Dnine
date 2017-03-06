#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int cmp(int a,int b)
{
    return a<=b;
}
int main()
{
    long long a[1010];
    int n,t;
    while (scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n,cmp);
        printf("%d ",a[0]);
        for (int i=1;i<n-1;i++)
        {
            if (a[i]!=a[i-1]) printf("%d ",a[i]);
        }
        if (a[n-1]!=a[n-2]) printf("%d",a[n-1]);
        printf("\n");
    }
    return 0;
}
