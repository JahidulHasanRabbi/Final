#include<iostream>
#include<vector>
using namespace std;

const int inf = 1e7;

int main()
{
    vector<vector<int>> Graph = {
                                    {0, 5, inf, 10},
                                    {inf, 0, 3, inf},
                                    {inf, inf, 0, 1},
                                    {inf, inf, inf, 0}
                                };
    
    int n = Graph.size();
    vector<vector<int>>  distance = Graph;

    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(distance[i][j] > distance[i][k] + distance[k][j]) {
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(distance[i][j] >= inf) {
                cout << "~ ";
            }
            else {
                cout << distance[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}