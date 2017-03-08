#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
/*int cmp(int a,int b)
{
    return a<=b;
}*/
int main()
{
    int a[101000];
    int n;
    while (cin>>n)
    {
        memset(a,0,sizeof(a));
        for (int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        cout<<a[0];
        for (int i=1;i<n;i++)
        {
            if (a[i]!=a[i-1]) cout<<" "<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
