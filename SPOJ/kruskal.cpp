#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<utility>
#include<map>
using namespace std;
struct subset
{
    int r;
    int p;
};
vector<subset>s(1);

class Graph
{
public:
    vector<pair<int,pair<int,int> > >v;
    vector<pair<int,int> >mst;
    Graph(int nv)
    {
        s.resize(nv);
    }

    void addedge(int,int,int);
    int findd(int);
    void makeset(int);
    void link(int,int);
    void unionn(int,int);
    void kruskal();
    friend struct subset;
};

void Graph::makeset(int d)
{
    s[d].p = d;
    s[d].r=0;
}

int Graph::findd(int f)
{
    if(s[f].p!=f)
        s[f].p = findd(s[f].p);
    return s[f].p;
}

void Graph::link(int x,int y)
{
    if(s[x].r > s[y].r)
        s[y].p=x;
    else
    {
        s[x].p=y;
        if(s[x].r==s[y].r)
            s[y].r=s[y].r+1;
    }
}

void Graph::unionn(int p,int q)
{
    link(findd(p),findd(q));
}


void Graph::addedge(int a,int b,int c)
{
    v.push_back(make_pair(c,make_pair(a,b)));
}

void Graph::kruskal()
{
    mst.clear();
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(findd(it->second.first)!=findd(it->second.second))
        {
            mst.push_back(it->second);
            unionn(it->second.first,it->second.second);
        }
    }
    for(auto itt=mst.begin();itt!=mst.end();itt++)
    {
        cout<<itt->first<<","<<itt->second<<endl;
    }
}
int main()
{

    Graph g(5);
    g.makeset(0);
    g.makeset(1);
    g.makeset(2);
    g.makeset(3);
    g.makeset(4);
    g.addedge(0,1,10);
    g.addedge(0,3,5);
    g.addedge(2,3,4);
    g.addedge(0,2,6);
    g.addedge(1,3,15);
    g.kruskal();
    return 0;

}
