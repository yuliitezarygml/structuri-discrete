#include <iostream>
#include <iomanip>
#define NMAX 100
using namespace std;
typedef unsigned long long llu;
llu Factorial (int n);
llu FactorialRecursiv (int n);

int main() {


     cout << "Hello World!" << endl;
     cout << "tema: elemente din combinare!" << endl;
     cout << "1. Factorial interativ\n" << endl;
    for (int i=1; i<=20; i++) {
        // cout << i << " ! =  " << Factorial(i) << "\t";
        // printf("%2u! = %20llu \t", i, Factorial(i));
        // printf("%2u! = %12llu ", i, Factorial(i));
        // printf("%2u! = %-20llu \t", i, Factorial(i));
        cout << setw(2) << i << " ! = " << setw(19) << Factorial(i) << " | ";
        if (i % 4 == 0)
            cout << endl;

    }
    cout << "2. Factorial recursiv \n" << endl;
    for (int i=1; i<=20; i++) {
        cout << setw(2) << i << " ! = " << setw(19) << Factorial(i) << " | ";
        if (i % 4 == 0)
            cout << endl;

    }
    cin.get();  // Wait for user input before closing console
    return 0;
 }
    llu Factorial (int n) {

        unsigned i;
        llu f=1;
        for (i=2;i<=n;i++)
            f=f*i;
        return f;
    }
    llu FactorialRecursiv (int n) {
        
       return f;
    }