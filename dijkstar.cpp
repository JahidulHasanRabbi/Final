#include<iostream>
#include<vector>
#include<set>
using namespace std;

const int infinity = 1e7;

int main()
{
    int numberofnode, numberofedge;
    cin >> numberofnode >> numberofedge;

    vector<int> distance(numberofedge+1, infinity);
    vector<vector <pair <int, int>>> Graph(numberofnode+1);

    for(int i=0; i<numberofedge; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        Graph[u].push_back({v, c});
        /*Graph[v].push_back({u, c}); --undirected graph */
    }

    int s;
    cout << "Enter Source Node : ";
    cin >> s;

    set<pair<int, int>> Q;
    distance[s] = 0;
    Q.insert({0, s});

    while(! Q.empty())
    {
        auto l = *(Q.begin());
        Q.erase(l);

        for(auto it: Graph[l.second]) {
            if(distance[l.second] + it.second < distance[it.first]) {
                Q.erase({distance[it.first], it.first});
                distance[it.first] = distance[l.second] + it.second;
                Q.insert({distance[it.first], it.first});
            }
        }
    }

    for(int i=1; i<=numberofnode; i++) {
        if(distance[i] < infinity) {
            cout << distance[i] << " ";
        }

        else {
            cout << -1 << " ";
        }
    cout << endl;
    }

    return 0;
}