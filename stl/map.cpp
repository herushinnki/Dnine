#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
	map<char,int,less<char>> map1;
	map<char,int,less<char>>::iterator iter;
	int n;
	char c;
	for (int i=1;i<=5;i++)
	{
		scanf("%d %c",&n,&c);
		map1[c]=n;
	}
	//�������
	for (iter=map1.begin();iter!=map1.end();iter++)
		cout<<(*iter).first<<" : "<<(*iter).second<<endl;
	//find����
	cin>>c;
	iter=map1.find(c);
	cout<<c<<" : "<<(*iter).second<<endl;
	while (1);
	return 0;
}