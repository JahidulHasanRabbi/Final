#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = int (sqrt(n));
    for(int i=2; i<=l; i++) {
        if(n%i == 0) {
            int count = 0;
            while(n%i == 0)
            {
                count++;
                cout << i << " ";
                n = n/i;
                
            } 
        }
    }

    if(n > 1) {
        cout << n << endl;
    }

    return 0;
}