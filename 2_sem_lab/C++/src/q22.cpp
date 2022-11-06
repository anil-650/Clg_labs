// 22. Write a program to single inheritance.

#include <iostream>

using namespace std;

class A{
    int a,b;
    public:
    void input(){
        cout << "Enter value for a & b: ";
        cin >> a >> b;
    }

    void show(){
        cout << "a = " << a << "\tb = " << b << endl;
    }
};

class B:public A{
    int c,d;
    public:
    void getdata(){
        cout << "Enter value for c & d: ";
        cin >> c >> d;
    }

    void display(){
        cout << "c = " << c << "\td = " << d << endl;
    }
};

int main(){
    B ob;
    ob.input();
    ob.show();
    ob.getdata();
    ob.display();

    return 0;
}
