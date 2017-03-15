#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int a;
	bool operator <(node tmp) const
	{
		return a>tmp.a;
	};
	node (int t)
	{
		a=t;
	}
};
int main()
{
	int n;
	priority_queue<node> q;
	cin>>n;
	int t;
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		q.push(node(t));
	}
	while (!q.empty())
	{
		cout<<q.top().a<<" ";
		q.pop();
	}
	while (1);
	return 0;
}
