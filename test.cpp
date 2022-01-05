#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1000;


int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<int> mat[N];
    bool vis[N];

    for(int i=0; i<N; i++) {
        vis[i] = 0;
    }

    for(int i=0; i<edge; i++) {
        int u, v;
        cin >> u >> v;

        mat[u].push_back(v);
        mat[v].push_back(u);
    }

    queue<int> q;
    int s;
    cin >> s;
    q.push(s);
    vis[s] = true;

    while(! q.empty())
    {
        int l = q.front();
        q.pop();
        cout << l << endl;

        vector<int> :: iterator it;

        for(it = mat[l].begin(); it != mat[l].end(); it++){
            if(!vis[*it]) {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }

    return 0;
}