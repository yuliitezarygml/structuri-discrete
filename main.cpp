#include <iostream>
#include <iomanip>
#define NMAX 100
using namespace std;
typedef unsigned long long llu;
llu Factorial (unsigned n);
llu FactorialRecursiv (unsigned n);
llu Permutari (unsigned n);
llu Aranjamente (unsigned n);
llu Combinari (unsigned n);
llu CombinatiOptim (unsigned n);

int main() {

    system("color F0");
    unsigned i, m = 2, n =6;
     cout << "Hello World!" << endl;
     cout << "tema: elemente din combinare!" << endl;
     cout << "1. Factorial interativ\n" << endl;
    for (unsigned i=1; i<=20; i++) {
        // cout << i << " ! =  " << Factorial(i) << "\t";
        // printf("%2u! = %20llu \t", i, Factorial(i));
        // printf("%2u! = %12llu ", i, Factorial(i));
        // printf("%2u! = %-20llu \t", i, Factorial(i));
        cout << setw(2) << i << " ! = " << setw(19) << Factorial(i) << " | ";
        if (i % 4 == 0)
            cout << endl;

    }
    cout << "2. Factorial recursiv \n" << endl;
    for (unsigned i=1; i<=20; i++) {
        cout << setw(2) << i << " ! = " << setw(19) << Factorial(i) << " | ";
        if (i % 4 == 0)
            cout << endl;

    }
    cout << "\nPermutari P("<< n << ") = " << Permutari(n) << endl;
    cin.get();  // Wait for user input before closing console
    return 0;
 }
    llu Factorial (unsigned n) {

        unsigned i;
        llu f=1;
        for (i=2;i<=n;i++)
            f=f*i;
        return f;
    }
    llu FactorialRecursiv (unsigned n) {
        
       if(n <= 1) return 1;

        return FactorialRecursiv(n-1)*n;
    }

llu Permutari (unsigned n){
    return Factorial(n);
}
llu Aranjamente (unsigned n){
    return 0;  
}
llu Combinari (unsigned n){
    return 0;  
}
llu CombinatiOptim (unsigned n){
    return 0;  
}