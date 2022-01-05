#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5);
    cout << s.top() << endl;
    s.pop();

    return 0;
}