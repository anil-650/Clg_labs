// 10. Write a program to find the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    int n, fact = 1, i;
    cout << "Enter a number: " ;
    cin >> n;

    if(n == 0){
        fact = 1;
    } else {
        for(i = n; i >= 1; i--){
            fact = fact*i;
        }
    }

    cout << "Factorial: " << fact << endl;

    return 0;
}
