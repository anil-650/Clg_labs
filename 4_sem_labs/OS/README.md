1. Write a program to report behavior of Linux kernel including kernel version, CPU type and model.

```c++
// 1. Write a program to report behavior of Linux kernel including kernel version, CPU type and model
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std

int main()
{
    cout << "\n The kernel version is, \n";
    system("car/proc/sys/kernel/osrelease") ;
    cout << "\n The cpu space: \n";
    system("cat /proc/cputnfo | awk 'NR==3, NR==4{print}' \n ");
    cout << "\n Amount of cpu time since system was last booted is: ";
    system("cat /proc/uptime \n");
    system("cat /proc/meminfo | awk 'NR==1, NR==4{print $2}' \n ");
    cout << "\n Amount of free memory: \n";
    system("cat /proc/merminfo |awk 'NR = 2{Print $2}' \n ")
        cout << "\n Amount of used memory is: \n";
    system("cat /proc/meninfo | awk '{ if (NR==1) a=$2; if(NR==2) b=$2 }END {print a-b} 
            ' \n");
    cout << endl;
    return(0) ;
}
```

2. Write a program to report behavior of Linux kernel including information on configured memory, amount of free and used memory.

```c++
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
```

3. Write a program to print file details including owner access permissions, file access time, where file name is given as argument.

```c++
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
```

4. Write a program to copy files using system calls.

```c++
// 4. Write a program to copy files using system calls.

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void main()
{
    char buf;
    int fd_one, fd_two;

    fd_one = open("first_file", O_RDONLY);

    if (fd_one == -1)
    {
        printf("Error opening first_file\n");
        close(fd_one);
        fd return;
    }

    fd_two = open("second_file",
            O_WRONLY | O_CREAT,
            S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

    while(read(fd_one, &buf, 1))
    {
        write(fd_two, &buf, 1);
    } 

    printf("Successful copy");

    close(fd_one);
    close(fd_two);
}
```

5. Write a program using C to implement FCFS scheduling algorithm.

```c++
// 5. Write a program using C to implement FCFS scheduling algorithm.
#include <stdio.h>
// Function to find the waiting time for all processes
int waitingtime(int proc[], int n,
        int burst_time[], int wait_time[]) {
    // waiting time for first process is 0
    wait_time[0] = 0;
    // calculating waiting time
    for (int i = 1; i < n ; i++ )
        wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
    return 0;
}
// Function to calculate turn around time
int turnaroundtime( int proc[], int n,
        int burst_time[], int wait_time[], int tat[]) {
    // calculating turnaround time by adding
    // burst_time[i] + wait_time[i]
    int i;
    for ( i = 0; i < n ; i++)
        tat[i] = burst_time[i] + wait_time[i];
    return 0;
}
//Function to calculate average time
int avgtime( int proc[], int n, int burst_time[]) {
    int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
    int i;
    //Function to find waiting time of all processes
    waitingtime(proc, n, burst_time, wait_time);
    //Function to find turn around time for all processes
    turnaroundtime(proc, n, burst_time, wait_time, tat);
    //Display processes along with all details
    printf("Processes Burst Waiting Turn around 
            ");
    // Calculate total waiting time and total turn
    // around time
    for ( i=0; i<n; i++) {
        total_wt = total_wt + wait_time[i];
        total_tat = total_tat + tat[i];
        printf(" %d\t %d\t\t %d \t%d
                ", i+1, burst_time[i], wait_time[i], tat[i]);
    }
    printf("Average waiting time = %f
            ", (float)total_wt / (float)n);
    printf("Average turn around time = %f
            ", (float)total_tat / (float)n);
    return 0;
}
// main function
int main() {
    //process id's
    int proc[] = { 1, 2, 3};
    int n = sizeof proc / sizeof proc[0];
    //Burst time of all processes
    int burst_time[] = {5, 8, 12};
    avgtime(proc, n, burst_time);
    return 0;
}
```

6. Write a program using C to implement Round Robin scheduling algorithm. 

```c++
// 6. Write a program using C to implement Round Robin scheduling algorithm  
#include<stdio.h> 
#include<conio.h> 

void main() 
{ 
    // initlialize the variable name 
    int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10]; 
    float avg_wt, avg_tat; 
    printf(" Total number of process in the system: "); 
    scanf("%d", &NOP); 
    y = NOP; // Assign the number of process to variable y 

    // Use for loop to enter the details of the process like Arrival time and the Burst Ti
    me 
        for(i=0; i<NOP; i++) 
        { 
            printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i+1); 
            printf(" Arrival time is: \t"); // Accept arrival time 
            scanf("%d", &at[i]); 
            printf(" \nBurst time is: \t"); // Accept the Burst time 
            scanf("%d", &bt[i]); 
            temp[i] = bt[i]; // store the burst time in temp array 
        } 
    // Accept the Time qunat 
    printf("Enter the Time Quantum for the process: \t"); 
    scanf("%d", &quant); 
    // Display the process No, burst time, Turn Around Time and the waiting time 
    printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time "); 
    for(sum=0, i = 0; y!=0; ) 
    { 
        if(temp[i] <= quant && temp[i] > 0) // define the conditions 
        { 
            sum = sum + temp[i]; 
            temp[i] = 0; 
            count=1; 
        } 
        else if(temp[i] > 0) 
        { 
            temp[i] = temp[i] - quant; 
            sum = sum + quant; 
        } 
        if(temp[i]==0 && count==1) 
        { 
            y--; //decrement the process no. 
            printf("\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i+1, bt[i], sumat[i], sum-at[i]-bt[i]); 
            wt = wt+sum-at[i]-bt[i]; 
            tat = tat+sum-at[i]; 
            count =0; 
        } 
        if(i==NOP-1) 
        { 
            i=0; 
        } 
        else if(at[i+1]<=sum) 
        { 
            i++; 
        } 
        else 
        { 
            i=0; 
        } 
    } 
    // represents the average waiting time and Turn Around time 
    avg_wt = wt * 1.0/NOP; 
    avg_tat = tat * 1.0/NOP; 
    printf("\n Average Turn Around Time: \t%f", avg_wt); 
    printf("\n Average Waiting Time: \t%f", avg_tat); 
    getch(); 
}
```

7. Write a program using C to implement SJF scheduling algorithm.

```c++
// 7. Write a program using C to implement SJF scheduling algorithm
#include<stdio.h>
int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("nEnter Burst Time:n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1; 
    }
    //sorting of burst times
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }

    wt[0]=0; 

    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=(float)total/n; 
    total=0;
    printf("nProcesst Burst Time tWaiting TimetTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i]; 
        total+=tat[i];
        printf("np%dtt %dtt %dttt%d",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=(float)total/n; 
    printf("nnAverage Waiting Time=%f",avg_wt);
    printf("nAverage Turnaround Time=%fn",avg_tat);
}
```
