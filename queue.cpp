#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> Q;
    Q.push(5);
    cout << Q.front() << endl;
    Q.pop();

    return 0;
}