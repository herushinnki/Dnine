#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<int,greater<int>> s1;
	int t;
	for (int i=1;i<=5;i++)
	{
		cin>>t;
		s1.insert(t);
	}
	multiset<int,greater<int>>::iterator iter;
	for (iter=s1.begin();iter!=s1.end();iter++)
		cout<<*iter<<endl;
	while (1);
	return 0;
}