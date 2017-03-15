#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	vector<int>::iterator iter;
	int n,t;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
	sort(a.begin(),a.end());
	cin>>t;
	bool flag=binary_search(a.begin(),a.end(),t);
	if (flag)
	{
		cout<<distance(a.begin(),lower_bound(a.begin(),a.end(),t))<<endl;
	}
	else
		cout<<"not existence"<<endl;
	while (1);
	return 0;
}