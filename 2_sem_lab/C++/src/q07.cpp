// 7. Write a program to swapping two no. pass by reference.

#include <iostream>

using namespace std;

void swap( int *a,  int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

    cout << "After swapping num1 = " << *a << "\nAfter swapping num2 = " << *b << endl;
}

int main(){
    int n1,n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping num1 = " << n1 << "\nBefore swapping num2 = " << n2 << endl;
    swap(&n1, &n2);

    return 0;
}
