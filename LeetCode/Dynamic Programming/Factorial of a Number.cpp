#include <iostream>
using namespace std;


int Factorial(int n){
    if(n == 0) return 1;
    return n * Factorial(n - 1);
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    if(n < 0) cout << "Error" << endl;
    else cout << Factorial(n) << endl;
    return 0;
}
