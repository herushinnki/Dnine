#include<iostream>
#include<fstream>
using namespace std;
struct node
{
    int l,r;
    int num;
};
int n;
node t[10010];
ifstream fin;
ofstream fout;
void preorder(int now)
{
    if (now==-1) return;
    fout<<t[now].num<<" ";
    preorder(t[now].l);
    preorder(t[now].r);
}
void midorder(int now)
{
    if (now==-1) return;
    midorder(t[now].l);
    fout<<t[now].num<<" ";
    midorder(t[now].r);
}
void postorder(int now)
{
    if (now==-1) return;
    postorder(t[now].l);
    postorder(t[now].r);
    fout<<t[now].num<<" ";
}
int main()
{
    fin.open("p3.in");
    fout.open("p3.out");
    fin>>n;

    for (int i=0;i<n;i++)
    {
        fin>>t[i].num>>t[i].l>>t[i].r;
    }
    preorder(0);
    fout<<endl;
    midorder(0);
    fout<<endl;
    postorder(0);
    fout<<endl;
    fin.close();
    fout.close();
    return 0;
}
