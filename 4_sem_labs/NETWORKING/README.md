1. Simulate Even Parity generator and checker.

```c
# include <stdio.h>
# define bool int

bool getParity(unsigned int n){
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & (n - 1);
    } 
    return parity;
}

int main(){
    unsigned int n = 7;
    printf("Parity of no %d = %s", n, (getParity(n)? "odd": "even"));
    getchar();
    return 0;
}
```

2. Simulate Two dimensional parity generator and checker

```c
#include<iostream>
#include<stdlib.h>
using namespace std;
#define maxlength 10
#define maxmessages 10

void initialize(int arr[][10],int m,int n){
    for(int i =0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            arr[i][j] = rand()%2;
        }
}

void print(int arr[][10],int m,int n){
    for(int i =0;i<m;i++)
    { for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<” “;
        }
        cout<<endl;
    }
}

// Even Parity

void addparbit(int arr[][10],int m,int n){
    for(int i=0;i<m;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == 1)
                count++;
        }
        if(count%2 == 0)
            arr[i][n] = 0;
        else
            arr[i][n] = 1;
    }
}

void induceerror(int arr[][10],int m,int n){
    int k1,k2;
    k1= rand()%m;
    k2 = rand()%n;
    if(arr[k1][k2]==0)
        arr[k1][k2]=1;
    else
        arr[k1][k2]=0;
    cout<<“Inducing error at line : “<<k1<<endl;
}

void checkerror(int arr[][10],int m,int n){
    for(int i=0;i<m;i++)
    {
        int count = 0;
        for(int j = 0;j < n;j++)
        {
            if(arr[i][j] == 1)
                count++;
        }
        if(count%2 == 0 && arr[i][n] != 0)
        {
            cout<<“Error here at line : ” <<i;
        }
        else if(count%2 == 1 && arr[i][n] != 1)
        {
            cout<<“Error here at line : ” <<i;
        }
    }
}

int main(){
    int m,n,arr[maxmessages][maxlength];
    cout << “Enter total number of messages”;
    cin >> m;
    cout << “Enter length of each message”;
    cin >> n;
    initialize(arr,m,n);
    print(arr,m,n);
    addparbit(arr,m,n);
    print(arr,m,n+1);
    induceerror(arr,m,n);
    print(arr,m,n+1);
    checkerror(arr,m,n);
    return 0;
}

```

3. Simulate checksum generator and checker

```c++
// C++ implementation of the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the One's complement
// of the given binary string

string Ones_complement(string data)
{
    for (int i = 0; i < data.length(); i++) {
        if (data[i] == '0')
            data[i] = '1';
        else
            data[i] = '0';
    }
    return data;
}

// Function to return the checksum value of
// the give string when divided in K size blocks

string checkSum(string data, int block_size){

    // Check data size is divisible by block_size
    // Otherwise add '0' front of the data

    int n = data.length();
    if (n % block_size != 0) {
        int pad_size = block_size - (n % block_size);
        for (int i = 0; i < pad_size; i++) {
            data = '0' + data;
        }
    }

    // Binary addition of all blocks with carry

    string result = "";

    // First block of data stored in result variable

    for (int i = 0; i < block_size; i++) {
        result += data[i];
    }

    // Loop to calculate the block
    // wise addition of data

    for (int i = block_size; i < n; i += block_size) {

        // Stores the data of the next bloack

        string next_block = "";
        for (int j = i; j < i + block_size; j++) {
            next_block += data[j];
        }

        // Stores the binary addition of two blocks

        string additions = "";
        int sum = 0, carry = 0;

        // Loop to calculate the binary addition of
        // the current two blocls of k size

        for (int k = block_size - 1; k >= 0; k--) {
            sum += (next_block[k] - '0')
                + (result[k] - '0');
            carry = sum / 2;
            if (sum == 0) {
                additions = '0' + additions;
                sum = carry;
            }
            else if (sum == 1) {
                additions = '1' + additions;
                sum = carry;
            }
            else if (sum == 2) {
                additions = '0' + additions;
                sum = carry;
            }
            else {
                additions = '1' + additions;
                sum = carry;
            }
        }

        // After binary add of two blocks with carry,
        // if carry is 1 then apply binary addition

        string final = "";
        if (carry == 1) {
            for (int l = additions.length() - 1; l >= 0;
                    l--) {
                if (carry == 0) {
                    final = additions[l] + final;
                }
                else if (((additions[l] - '0') + carry) % 2
                        == 0) {
                    final = "0" + final;
                    carry = 1;
                }
                else {
                    final = "1" + final;
                    carry = 0;
                }
            }
            result = final;
        }
        else {
            result = additions;
        }
    }
    return Ones_complement(result);
}

bool checker(string sent_message, string rec_message, int block_size)
{
    string sender_checksum= checkSum(sent_message, block_size);
    string receiver_checksum = checkSum(rec_message + sender_checksum, block_size);
    if (count(receiver_checksum.begin(),receiver_checksum.end(), '0')== block_size) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    string sent_message = "10000101011000111001010011101101";
    string recv_message = "10000101011000111001010011101101";
    int block_size = 8;
    if (checker(sent_message, recv_message, block_size)) {
        cout << "No Error";
    }
    else {
        cout << "Error";
    }
    return 0;
}
```

4. Simulate hamming code method

```c
#include <math.h>
#include <stdio.h>
int input[32];
int code[32];
int ham_calc(int, int);
void solve(int input[], int);
int ham_calc(int position, int c_l)
{
    int count = 0, i, j;
    i = position - 1;
    while (i < c_l) {
        for (j = i; j < i + position; j++) {
            if (code[j] == 1)
                count++;
        }
        i = i + 2 * position;
    }
    if (count % 2 == 0)
        return 0;
    else
        return 1;
}
void solve(int input[], int n)
{
    int i, p_n = 0, c_l, j, k;
    i = 0;
    while (n > (int)pow(2, i) - (i + 1)) {
        p_n++;
        i++;
    }
    c_l = p_n + n;
    j = k = 0;
    for (i = 0; i < c_l; i++) {
        if (i == ((int)pow(2, k) - 1)) {
            code[i] = 0;
            k++;
        }
        else {
            code[i] = input[j];
            j++;
        }
    }
    for (i = 0; i < p_n; i++) {
        int position = (int)pow(2, i);
        int value = ham_calc(position, c_l);
        code[position - 1] = value;
    }
    printf("\nThe generated Code Word is: ");
    for (i = 0; i < c_l; i++) {
        printf("%d", code[i]);
    }
}
void main()
{
    input[0] = 0;
    input[1] = 1;
    input[2] = 1;
    input[3] = 1;
    int N = 4;
    solve(input, N);
}
```

5. Simulate and implement stop and wait protocol for noisy channel

```c++
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

using namespace std;

#define time 5
#define max_seq 1
#define tot_pack 5

int randn(int n){
    return rand()%n + 1;
}

typedef struct{
    int data;
}packet;

typedef struct
{
    int kind;
    int seq;
    int ack;
    packet info;
}frame;

typedef enum{ frame_arrival,error,time_out }event_type;
frame data1;

//creating prototype

void from_network_layer(packet *);
void to_physical_layer(frame *);
void to_network_layer(packet *);
void from_physical_layer(frame*);
void sender();
void receiver();
void wait_for_event_sender(event_type *);
void wait_for_event_receiver(event_type *);

//end

#define inc(k) if(k<max_seq)k++;else k=0;

int i=1;
char turn;
int disc=0;

int main(){
    while(!disc)
    { sender();
        // delay(400);
        receiver();
    }
    getchar();
}

void sender(){
    static int frame_to_send=0;
    static frame s;
    packet buffer;
    event_type event;
    static int flag=0; //first place

    if (flag==0){
        from_network_layer(&buffer);
        s.info=buffer;
        s.seq=frame_to_send;
        cout << "\nsender information \t" << s.info.data << "\n";
        cout << "\nsequence no. \t" << s.seq;
        turn='r';
        to_physical_layer(&s);
        flag=1;
    }

    wait_for_event_sender(&event);

    if(turn=='s'){
        if(event==frame_arrival){
            from_network_layer(&buffer);
            inc(frame_to_send);
            s.info=buffer;
            s.seq=frame_to_send;
            cout << "\nsender information \t" << s.info.data << "\n";
            cout << "\nsequence no. \t" << s.seq << "\n";
            getch();
            turn='r';
            to_physical_layer(&s);
        }
    }
}

//end of sender function

void from_network_layer(packet *buffer){
    (*buffer).data=i;
    i++;
} //end of from network layer function
void to_physical_layer(frame *s)
{
    data1=*s;
} //end of to physical layer function
void wait_for_event_sender(event_type *e)
{
    static int timer=0;
    if(turn=='s')
    { timer++;
        //timer=0;
        return ;
    }
    else //event is frame arrival
    {
        timer=0;
        *e=frame_arrival;
    }
} //end of wait for event function
void receiver()
{
    static int frame_expected=0;
    frame s,r;
    event_type event;
    wait_for_event_receiver(&event);
    if(turn=='r')
    { if(event==frame_arrival)
        {
            from_physical_layer(&r);
            if(r.seq==frame_expected)
            {
                to_network_layer(&r.info);
                inc (frame_expected);
            }
            else
                cout<<"\nReceiver :Acknowledgement resent \n";
            getch();
            turn='s';
            to_physical_layer(&s);
        }
    }
}

//end of receiver function

void wait_for_event_receiver(event_type *e){
    if(turn=='r')
    {
        *e=frame_arrival;
    }
}

void from_physical_layer(frame *buffer){
    *buffer=data1;
}

void to_network_layer(packet *buffer){
    cout << "\nReceiver : packet received \t" <<  i-1;
    cout << "\n Acknowledgement sent \t";
    getch();
    if(i>tot_pack)
    { disc=1;
        cout << "\ndiscontinue\n";
    }
}

```
