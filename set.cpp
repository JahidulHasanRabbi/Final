#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    int l = s.size();
    cout << l << endl;
    s.erase(5);

    return 0;
}