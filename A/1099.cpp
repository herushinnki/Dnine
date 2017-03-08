#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
bool cmp(char* a,char* b)
{
    return strcmp(a,b)<0;
}
int main()
{
    char str[1010];
    vector<char*> a;
    while (cin>>str)
    {
        a.clear();
        int l=strlen(str);
        for (int i=0;i<l;i++)
        {
            a.push_back(str+i);
        }
        sort(a.begin(),a.end(),cmp);
        for (int i=0;i<l;i++)
        cout<<a[i]<<endl;
    }
    return 0;
}
