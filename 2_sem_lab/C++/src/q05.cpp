// 5. Write a program to print multiplication 1 to 10.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    clrscr();

    int i,j;

    cout << "Multiplication form 1 to 10:" << endl;
    for(i =1; i <= 10; i++)
        for(j = 1; j < i; j++)
            cout << i << "*" << j << "=" << i*j << endl;

    return 0;
}
