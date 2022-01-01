#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> w(n);

    for(int i=0; i<n; i++) {
        cin >> w[i];
    }

    for(int i =0; i<n; i++) {
        cin >> v[i];
    }

    int t;
    cin >> t;

    vector<vector<int>> matrix(n+1, vector<int>(t+1, 0));

    for(int i=1; i<n+1; i++) {
        for(int j=0; j<t+1; j++) {
            matrix[i][j] = matrix[i-1][j];
            if(j-w[i-1] >= 0) {
                matrix[i][j] = max(matrix[i][j], matrix[i-1][j-w[i-1]] + v[i-1]);
            }
        }
    }

    cout << matrix[n][t] << endl;

    return 0;
}