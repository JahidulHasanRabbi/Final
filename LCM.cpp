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

int LCM(int a, int b)
{
    int r = GCD(a, b);

    return (a*b)/r;
}

int main()
{
    int a, b;

    cout << "Enter Numbers : ";
    cin >> a >> b;

    int c = LCM(a, b);

    cout << "LCM : " << c << endl;

    return 0;
}