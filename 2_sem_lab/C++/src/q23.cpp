// 23. Write a program to multiple inheritance.

#include <iostream>

using namespace std;

class A{
    public:
        void show(){
            cout << "class A" << endl;
        }
};

class B{
    public:
        void show(){
            cout << "class B" << endl;
        }
};

class C:public A, public B{
    public:
        void show(){
            cout << "class C" << endl;
        }
};


int main(){
    C ob;
    ob.show();
    ob.A::show();
    ob.B::show();

    return 0;
}
