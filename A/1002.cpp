#include<cstdio>
#include<iostream>
using namespace std;
int abs(int a,int b)
{
    return (a-b>0?a-b:-(a-b));
}
int main()
{
    int P,T,G1,G2,G3,GJ;
    double ans;
    while(scanf("%d %d %d %d %d %d",&P,&T,&G1,&G2,&G3,&GJ)!=EOF)
    {
            if (abs(G1,G2)<=T)
            {
               ans=(double)(G1+G2)/2;
               printf("%.1f\n",ans);
               continue;
            }
            if (abs(G1,G3)<=T&&abs(G2,G3)<=T)
            {
                ans=(double)(G1>G2?G1:G2);
                ans=(double)(ans>G3?ans:G3);
                printf("%.1f\n",ans);
                continue;
            }
            if (abs(G1,G3)<=T)
            {
                ans=(double)(G1+G3)/2;
                printf("%.1f\n",ans);
                continue;
            }
            if (abs(G2,G3)<=T)
            {
                ans=(double)(G2+G3)/2;
                printf("%.1f\n",ans);
                continue;
            }
            ans=GJ;
            printf("%.1f\n",ans);
    }
    return 0;
}
