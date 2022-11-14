// 20. Write a program to perform using + operator overloading for 2 complex number function.

#include <iostream>

using namespace std;

class complex{
    int x,y;
    public:
    void getdata(int real, int imag){
    x = real;
    y = imag;
    }

    complex operator+(complex c){
        complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }

    void display(){
        cout << "Addition result = " << x << "+i" << y << endl;
    }

};

int main(){
    complex c1, c2, c3;
    c1.getdata(2, 3);
    c2.getdata(3, 3);
    c3 = c1+c2;
    c3.display();

    return 0;
}
