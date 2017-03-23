#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int n;
int num;
int now=0;
ifstream fin;
ofstream fout;
void hanoi(int t,char a,char b,char c)
{
    if (t==1)
    {
        if ((num-now)<=100)
        {
            fout<<now+1<<":"<<a<<"->"<<c<<endl;
        }
        now++;
    }else
    {
        hanoi(t-1,a,c,b);
        hanoi(1,a,b,c);
        hanoi(t-1,b,a,c);
    }
}
int main()
{
    fin.open("p4.in");
    fout.open("p4.out");
    fin>>n;
    num=pow(2,n)-1;
    fout<<num<<endl;
    hanoi(n,'A','B','C');
    return 0;
}
