#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int s1_l = s1.size();
    int s2_ll = s2.size();

    vector<vector <int>> matrix(s1_l+1, vector<int>(s2_ll+1, -1));

    for(int i=0; i<=s1_l; i++) {
        for(int j=0; j<=s2_ll; j++) {
            if(i == 0 || j == 0) {
                matrix[i][j] = 0;
                continue;
            }

            if(s1[i-1] == s2[j-1]) {
                matrix[i][j] = 1 + matrix[i-1] [j-1];
            }
            else {
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
            }
        }
    }

    cout << matrix[s1_l][s2_ll] << endl;

    return 0;
}