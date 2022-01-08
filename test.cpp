#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int inf = 1e7;

int main()
{
    int n, e;
    cin >> n >> e;
    
    vector<vector<int>> mat;
    vector  indeg(n, 0);

    for(int i=0; i<e; i++) {
        int u, v, s;
        cin >> u >> v;
        matrix[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for(int i=0; i<n; i++) {
        if(indeg[i] == 0) {
            q.push(i);
        }
    }

    int count=0;

    while(! q.empty())
    {
        count++;
        int x = q.front();
        q.pop();
        cout << x << " ";

        for(auto it : mat[x]) {
            indeg[it]--;
            if(indeg[it] == 0) {
                q.push(it);
            }
        }
    }

    

    return 0;
}