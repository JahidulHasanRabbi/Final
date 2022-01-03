#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1000;
vector<int> Matrix[N];
bool visted[N];


void dfs(int a)
{
    visted[a] = 1;
    cout <<  a << " ";

    vector<int> :: iterator it;

    for(it = Matrix[a].begin(); it != Matrix[a].end(); it++)
    {
        if(visted[*it]);
        else {
            dfs(*it);
        }
    }
}

int main()
{
    int numberofnode, numberofedge;
    cin >> numberofnode >> numberofedge;

    for(int i=0; i<numberofnode; i++) {
        visted[i] = 0;
    }
    for(int i=0; i<numberofedge; i++) {
        int u, v;
        cin >> u >> v;

        Matrix[u].push_back(v);
        Matrix[v].push_back(u);
    }
    int s;
    cin >> s;
    dfs(s);

    return 0;
}