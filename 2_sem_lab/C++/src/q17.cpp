// 17. Write a program to show the ways calling constructors and destructors.

#include <iostream>

using namespace std;

class B{
    public:
        B(){
            cout << "Constructor is called\n";
        }

        ~B(){
            cout << "Destructor is called\n";
        }

        void show(){
            cout << "Hello World" << endl;
        }
};

int main(){
    B cd;
    cd.show();

    return 0;
}
