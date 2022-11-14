// 3. Write a program to print file details including owner access permissions, file access time, where file name is given as argument
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    struct stat s;
    if (argc < 2)
    {
        cout << "\n enter filename in";
        //exit();
    }
    for(i=1;i<argc; i++)
    {
        cout << "File : " << argv[i] << "\n";
        if(stat(argv[i],&s) < 0)
            cout << "error in obtaining stats In";
        else
        {
            cout << "owner UID : " << s.st_uid << "\n";
            cout << "group ID : " << s.st_gid << "\n";
            cout << "Acess permissions : " << s.st_mode << "\n";
            cout << "Acess Time : " ;cout << s.st_atime << "\n";
            cout << "File Size : " << s.st_size << "\n";
            cout << "File Size(in blocks) : " << s.st_blksize << "\n";
        }
    }
    return 0;
}
