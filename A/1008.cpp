#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define maxn 1010
#define INF 9999999
using namespace std;
struct Edge
{
    int from,to,dist,pay;
    Edge (int a,int b,int c,int d)
    {
        from=a;
        to=b;
        dist=c;
		pay=d;
    }
};
struct HeapNode
{
    int d,u,p;
    bool operator <(HeapNode rhs) const
    {
		if (d==rhs.d) return p>rhs.p;
        return d>rhs.d;
    }
	HeapNode (int a,int b,int c)
	{
		d=a;
		u=b;
		p=c;
	}
};
int n,m;
vector<Edge> edges;
vector<int> G[maxn];
bool done[maxn];
int d[maxn];
int p[maxn];
int cnt;
priority_queue<HeapNode> Q;
void init()
{
    for (int i=1;i<=n;i++)
    G[i].clear();
    edges.clear();
}

void AddEdge(int from,int to,int dist,int pay)
{
    edges.push_back(Edge(from,to,dist,pay));
	cnt=edges.size();
    G[from].push_back(cnt-1);
}
int main()
{
	int aa,bb,dd,pp,s,t;
	cin>>n>>m;
	while (n!=0)
	{
		init();
		for (int i=1;i<=m;i++)
		{
			cin>>aa>>bb>>dd>>pp;
			AddEdge(aa,bb,dd,pp);
			AddEdge(bb,aa,dd,pp);
		}
		cin>>s>>t;
		for (int i=0;i<=n;i++) 
		{
			d[i]=INF;
			p[i]=INF;
		}
		d[s]=0;
		p[s]=0;
		memset(done,0,sizeof(done));
		Q.push(HeapNode(0,s,0));
		while (!Q.empty())
		{
			HeapNode x=Q.top();
			Q.pop();
			int u=x.u;
			if (done[u]) continue;
			done[u]=true;
			for(int i=0;i<G[u].size();i++)
			{
				Edge e=edges[G[u][i]];
				if (d[e.to]==d[u]+e.dist)
				{
					if (p[e.to]>p[u]+e.pay)
					{
						p[e.to]=p[u]+e.pay;
						Q.push(HeapNode(d[e.to],e.to,p[e.pay]));
					}
				}
				if (d[e.to]>d[u]+e.dist)
				{
					d[e.to]=d[u]+e.dist;
					p[e.to]=p[u]+e.pay;
					Q.push(HeapNode(d[e.to],e.to,p[e.pay]));
				}
			}
		}
		cout<<d[t]<<" "<<p[t]<<endl;
		cin>>n>>m;
	}
	//while (1);
	return 0;
}
