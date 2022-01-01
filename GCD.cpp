#include<iostream>

using namespace std;

int GCD(int a, int b)
{
    int Mode = 0;

    while(b != 0)
    {
        Mode = a%b;
        a = b;
        b = Mode;
    }

    return a;
}

int main()
{
    int a, b;

    cout << "Enter Numbers : ";
    cin >> a >> b;

    int c = GCD(a, b);

    cout << "GCD : " << c << endl;

    return 0;
}