// 4. Write a program to print the results for following series: 1! + 2! + 3! ...

#include <iostream>

using namespace std;

int main(){
    int n, i, sum=0, fact=1;

    cout << "Enter number for series: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        fact = fact * i;
        sum = sum + fact;
    }

    cout << "Sum of series: " << sum << endl;
    return 0;
}
