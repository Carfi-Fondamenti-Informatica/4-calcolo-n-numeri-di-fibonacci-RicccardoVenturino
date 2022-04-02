#include <iostream>
using namespace std;

int main() {
    int n = 0, num1 = 1, num2 = 1, somma = 0;
    cout << "Quanti numeri della serie di Fibonacci devono essere stampati? (almeno 2)" << endl;
    cin >> n;

    if(n < 2) {
        cout << "errore" << endl;
    }else{
        cout << "1" << endl;
        cout << "1" << endl;
        for(int i=0; i<n-2; i++) {
            somma = num1 + num2;
            cout << somma << endl;
            num1 = num2;
            num2 = somma;
        }
    }
    return 0;
}

