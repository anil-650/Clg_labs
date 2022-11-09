// 2. Write a program to report behavior of Linux kernel including information on configured memory, amount of free and used memory.
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    cout << "\n The Kernel Version is : \n";
    system("cat/proc/sys/kernel/osrelease");
    cout << "\n The CPU Space : \n";
    system("cat/proc/cpuinfo | awk 'NR==3, NR==4{print}'\n");
    cout << "\n Amount of CPU time since system was last booted is : ";
    system("cat/proc/uptime \n");
    cout << "\n The configured memory is :\n ";
    system("cat/proc/meminfo | awk 'NR == 1{print $2}'\n");
    cout << "\n Amount of free memory :\n ";
    system("cat/proc/meminfo | awk 'NR == 2{print $2}'\n");
    cout << "\n Amount of used memory is :\n ";
    system("cat/proc/meminfo | awk '{if (NR==1) a=$2; if(NR==2) b=$2 }END {print a-b}' \n");
    cout << endl;
    return 0;
}
