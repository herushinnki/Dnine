#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,m,ans;
    bool flag;
    int a[200][200],b[200][200];
    do
    {
        scanf("%d",&m);
        if (m==0) break;
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for (int i=1;i<=m;i++)
        {
            for (int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
        }
        for (int i=1;i<=m;i++)
        {
            for (int j=1;j<=n;j++)
            scanf("%d",&b[i][j]);
        }
        for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
        a[i][j]+=b[i][j];
        ans=0;
        for (int i=1;i<=m;i++)
        {
            flag=true;
            for (int j=1;j<=n;j++)
            if (a[i][j]!=0) flag=false;
            if (flag) ans++;
        }
        for (int j=1;j<=n;j++)
        {
            flag=true;
            for (int i=1;i<=m;i++)
            if (a[i][j]!=0) flag=false;
            if (flag) ans++;
        }
        printf("%d\n",ans);
    }while (1);
    return 0;
}
