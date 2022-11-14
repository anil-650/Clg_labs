// 21. Write a program to perform using + operator overloading for string concatenation.

#include <iostream>
#include <string.h>

using namespace std;

class String{
    public:
        char str[20];

        void input(){
            cout << "Enter a string: ";
            cin >> str;
        }

        void display(){
            cout << str;
        }


        String operator+(String x){
            String s;
            strcat(str, " ");
            strcat(str, x.str);
            strcpy(s.str, str);
            return s;
        }
};

int main(){
    String str1, str2, str3;
    str1.input();
    str2.input();
    
    str1.display();
    str2.display();

    str3 = str1+str2;

    str3.display();

    return 0;
}
