#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("p1.in");
    fout.open("p1.out");
    int n,tg;
    int a[10010];
    fin>>n;
    for (int i=1;i<=n;i++)
        fin>>a[i];
    fin>>tg;
    int ans=0;
    int l=1,r=n,mid;
    while (l<r)
    {
        mid=(l+r)/2;
        if (mid==tg) break;
        ans++;
        if (mid>tg) r=mid-1;
        else l=mid+1;
    }
    fout<<ans<<endl;
    fin.close();
    fout.close();
    return 0;
}
