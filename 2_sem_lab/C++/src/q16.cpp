// 16. Write a program to show the method of accessing the static private method function.

#include <iostream>

using namespace std;

class test{
    static int count;
    static void display(){
        count++;
        cout << "count: " << count << endl;
    }

    public:
    static void showcount(){
        display();
    }
};

int test::count;

int main(){
    test t1;
    t1.showcount();

    return 0;
}


