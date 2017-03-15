#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#define maxn 1010
#define INF 99999999
using namespace std;
struct Edge
{
    int from,to,dist;
    Edge (int a,int b,int c)
    {
        from=a;
        to=b;
        dist=c;
    }
};
struct HeapNode
{
    int d,u;
    bool operator <(HeapNode rhs) const
    {
        return d>rhs.d;
    }
};
struct Dijkstra
{
    int n,m;
    vector<Edge> edges;
    vector<int> G[maxn];
    bool done[maxn];
    int d[maxn];
    int p[maxn];

    void init(int n)
    {
        this->n=n;
        for (int i=0;i<n;i++)
        G[i].clear();
        edges.clear();
    }

    void AddEdge(int from,int to,int dist)
    {

        edges.push_back(Edge(from,to,dist));
        m=edges.size();
        G[from].push_back(m-1);
    }
};
int main()
{

}
