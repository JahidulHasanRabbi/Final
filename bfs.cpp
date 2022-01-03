#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N = 1000;

int main()
{
    int numberofnode, numberofedge;
    cin >> numberofnode >> numberofedge;

    vector<int> Matrix[N];
    bool visted[N];
    for(int i=0; i<N; i++) {
        visted[i] = 0;
    }
    for(int i=0; i<numberofedge; i++) {
        int u, v;
        cin >> u >> v;

        Matrix[u].push_back(v);
        Matrix[v].push_back(u);
    }

    queue<int> Q;
    int s;
    cin >> s;
    Q.push(s);
    visted[s] = true;

    while(! Q.empty())
    {
        int l = Q.front();

        Q.pop();

        cout << l << endl;

        vector<int> :: iterator it;
        for(it = Matrix[l].begin(); it != Matrix[l].end(); it++) {
            if(! visted[*it]) {
                visted[*it] = 1;
                Q.push(*it);
            }
        }
    }


    return 0;
}