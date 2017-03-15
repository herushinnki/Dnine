#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int a;
	int b;
	bool operator <(node tmp) const
	{
		if (a==tmp.a) return b<tmp.b;
		return a>tmp.a;
	}
	/*friend bool operator< (node n1,node n2)
	{
		if (n1.a==n2.a) return n1.b<n2.b;
		return n1.a>n2.a;
	}*/
};
int main()
{
	int n;
	node e[1010];
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>e[i].a>>e[i].b;
	sort(e+1,e+1+n);
	for (int i=1;i<=n;i++)
		cout<<e[i].a<<" "<<e[i].b<<endl;
	while (1);
	return 0;
}