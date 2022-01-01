#include<iostream>
#include<set>
#include<vector>
using namespace std;

const int in = 1e7;

int main()
{
    int NumbeerofNode, NumberofEdge;
    cin >> NumbeerofNode >> NumberofEdge;

    vector<int> distance(NumbeerofNode+1, in);

    vector<vector<pair<int, int>>> Graph(NumbeerofNode+1);
    for(int i=0; i<NumberofEdge; i++) {
        int u, v, c;
        cin >> u >> v >> c;

        Graph[u].push_back({v, c});
        
    }

    int s;
    cin >> s;
    distance[s] = 0;

    set<pair<int, int>> q;
    q.insert({0, s});
    while(! q.empty())
    {
        auto l = *(q.begin());
        q.erase(l);

        for(auto i: Graph[l.second]) {
            if(distance[i.first] > distance[l.second] + i.second) {
                q.erase({distance[i.first], i.first});
                distance[i.first] = distance[l.second] + i.second;
                q.insert({distance[i.first], i.first});
            }
        }
    }

    for(int i=1; i<=NumbeerofNode; i++) {
        if(distance[i] < in) {
            cout << " No " << i << endl;
            cout << distance[i] << " ";
        }
        else {
            cout << -1 << " ";
        }
        cout << endl;
    }


    return 0;
}

/* 
8 15
1 2 9
1 6 14
1 7 15
2 3 24
6 3 18
6 5 30
6 7 5
7 5 20
7 8 44
3 8 19
3 5 2
5 4 11
5 8 16
4 3 6
4 8 6



*/