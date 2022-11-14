// 13. Write a program to find sum of Four no. Using Default Argument in Member Function.

#include <iostream>

using namespace std;

class add{
    public:
        int sum(int p, int q, int r = 20, int s = 10)
        {
            return (p + q + r + s);
        }
}

int main(){
    add d;
    cout << d.sum(5,30) << endl;
    cout << d.sum(5,30,40) << endl;
    cout << d.sum(5,30,40,50) << endl;

    return 0;
}
