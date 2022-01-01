#include<iostream>
#include<vector>
#include<set>
using namespace std;

const int infinity = 1e7;

int main()
{
    int numberofnode, numberofedge;
    cin >> numberofnode >> numberofedge;

    vector<int> distance(numberofnode+1, infinity);
    vector <vector <int>> Edge;

    for(int i=0; i<numberofedge; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        
        Edge.push_back({u,v,w});
    }

    int s;
    cout << "Enter Starting Node: ";
    cin >> s;

    distance[s] = 0;

    for(int i=0; i<numberofnode-1; i++) {
        for(auto l : Edge) {
            int u = l[0];
            int v = l[1];
            int w = l[2];
            distance[v] = min(distance[v], distance[u] + w);
        }
    }

    for(int i=0; i<numberofnode; i++) {
        cout << "For Node " << i << endl; 
        cout << distance[i] << endl;
    }

    return 0;
}