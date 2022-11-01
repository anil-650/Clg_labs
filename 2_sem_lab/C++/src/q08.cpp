// 8. Write a program to find the sum of four numbers using default argument passing.

#include <iostream>

using namespace std;

int sum(int a, int b, int c=20, int d=40){
    return a+b+c+d;
}

int main(){
    cout << "Sum" << sum(5,10) << endl;
    cout << "Sum" << sum(5,10,15) << endl;
    cout << "Sum" << sum(5,10,15,30) << endl;

    return 0;
}
