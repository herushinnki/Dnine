#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("out.txt");
    fout<<"hello world"<<endl;
    return 0;
}
