// 6. Write a program for swapping two no. pass by address.

#include <iostream>

using namespace std;

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    cout << "After swapping n1 = " << a << "\nAfter swapping n2 = " << b << endl;
}

int main(){
    int n1,n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping num1 = " << n1 << "\nBefore swapping num2 = " << n2 << endl;
    swap(n1, n2);

    return 0;
}
