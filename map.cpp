#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, int> n;

    for(int i=0; i<5;i++) {
        n.insert (pair<int,int>(i, i+1));
    }
    map<int, int>:: iterator itr;

    for(itr = n.begin(); itr != n.end(); itr++) {
        cout << itr->first << endl;
        cout << itr->second << endl;

    }

    return 0;
}