#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, vector<int>> Graph;

    for(int i=0; i<n; i++) {
        int u, v;
        cout << "Enter Edge : ";
        cin >> u >> v;

        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    int starting, travel;
    while(cin >> starting >> travel (starting && travel != 0))
    {
        int u = starting;
        queue<int> q;
        
    }

    return 0;
}