// 19. Write a program to perform using ++ operator friend using member function.

#include <iostream>

using namespace std;

class A{
    int a;
    public:
    A(){
        a = 0;
    }

    void display(){
        cout << a << endl;
    }

    friend void operator++(A &op1);
    friend void operator++(A &op2,int);
};

void operator++(A &op1){
    op1.a++;
}

void operator++(A &op2,int){
    op2.a++;
}


int main(){
    A ob;
    ++ob;
    ob.display();
    ob++();
    ob.display();

    return 0;
}
