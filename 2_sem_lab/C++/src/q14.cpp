// 14. Write a program to area of circle, triangle, rectangle using function overloading.

#include <iostream>

using namespace std;

void area(double r){
    cout << "Area of Circle: " << 3.14*r*r << endl;
}

void area(double b, double h){
    cout << "Area of Triangle: " << 0.5*b*h << endl;
}

void area(int l, int b){
    cout << "Area of Circle: " << l*b << endl;
}

int main(){
    area(5.3);
    area(3,6);
    area(5,6);

    return 0;
}

