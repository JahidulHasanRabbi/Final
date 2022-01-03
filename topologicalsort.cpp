#include<iostream>
#include<map>
#include<queue>
using namespace std;

int main()
{
    int non, noe;
    cin >> non >> noe;
    vector<vector<int>> matrix(non);
    vector<int> deg(non, 0);
    for(int i=0; i<noe; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u].push_back(v);
        deg[v]++;
    }

    queue<int> Q;
    for(int i=0; i<non; i++) {
        if(deg[i] == 0) {
            Q.push(i);
        }
    }

    int count = 0;

    while(! Q.empty())
    {
        count++;
        int x = Q.front();
        Q.pop();
        cout << x << " ";

        for(auto it :  matrix[x]) {
            deg[it]--;
            if(deg[it] == 0) {
                Q.push(it);
            }
        }
    }

    return 0;
}