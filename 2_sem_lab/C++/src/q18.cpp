// 18. Write a program to perform using ++ operator overloading using member function.

#include <iostream>

using namespace std;

class A{
    int a;
    public:
    A(){
        a = 0;
    }

    void operator++(){
        a++;
    }

    void display(){
        cout << a << endl;
    }
};

int main(){
    A ob;
    ++ob;
    ob.display();
    ob.operator++();
    ob.display();

    return 0;
}
