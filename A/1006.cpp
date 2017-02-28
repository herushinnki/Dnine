#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char str[1010];
    int len,a,b,c,i;
    bool flag;
    while (scanf("%s",str)!=EOF)
    {
        flag=false;
        len=strlen(str);
        i=0;
        while(str[i]=='o') i++;
        if (str[i]!='z')
        {
            printf("Wrong Answer\n");
            continue;
        }
        a=i;
        i++;
        while (str[i]=='o') i++;
        if (str[i]!='j')
        {
            printf("Wrong Answer\n");
            continue;
        }
        b=i-a-1;
        i++;
        while (str[i]=='o') i++;
        if (str[i]!='\0')
        {
            printf("Wrong Answer\n");
            continue;
        }
        c=len-a-b-2;
        while ((b!=1)&&(b>0))
        {
            c=c-a;
            b--;
        }
        if ((a==c)&&(b==1)&&(a>=0)) printf("Accepted\n");
        else printf("Wrong Answer\n");
    }
    return 0;
}
