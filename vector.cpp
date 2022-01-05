#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> n;
    n.push_back(5);
    cout << n.front() << endl;
    n.pop_back();
}