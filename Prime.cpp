#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Check Prime : ";
    cin >> a;
    bool PrimeNumber = true;

    if(a == 0 || a == 1) {
        PrimeNumber = false;
    }
    else {
        for(int i=2; i<a; i++) {
            if(a%i == 0) {
                PrimeNumber = false;
                break;
            }
        }
    }

    if(PrimeNumber) {
        cout << a << " is Prime" << endl;
    }
    else {
        cout << a << " is Not Prime" << endl;
    }

    return 0;
}