// 9. Write a program to find square and cube of a number using inline function.

#include <iostream>

using namespace std;

inline int square(int a){
    return a*a;
}

inline int cube(int a){
    return a*a*a;
}

int main(){
    int num;
    cout << "Enter a number: " ;
    cin >> num;

    cout << "Square of number: " << square(num) << endl;
    cout << "Cube of number: " << cube(num) << endl;

    return 0;
}
