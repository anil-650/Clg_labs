1. Store 8-bit of data in memory using address
```s
MVI A,49 H
STA 2501 H
HLT
```
2. Store 8-bit of data in memory using indirect address.
```s
LXI H 
MVI M
HLT
```
3. Add 2 8-bit numbers
```s
LXI H,2501 H
MOV A,M
INX H
ADD M
INX H
MOV M,A
HLT
```
4. Subtract 2 8-bit numbers
```s
LXI H,2501 H
MOV A,M
INX H
SUB M
INX H
MOV M,A
HLT
```
5. Add 2 16-bits numbers
```s
LHLD 2501 H
XCHG
LHLD 2503 H
Mov A,E
ADD L
MOV L,A
MOV A,D
ADC H
MOV HA
SHLD 4004 H
HLT
```
6. Subtract 2 16-bits numbers
```s
LHLD 2500 H
XCHG
LHLD 2502 H
MOV A,E
SUB L
MOV L,A
MOV AD
SBB H
MOV H, A
SHLD 2504 H
HLT
```
7. Add content of 2 memory location
```s
LXI H,2500 H
MOV A,M
INX H
ADD M
INX H
MOV M,A
MVI A,00
ADC A
INX H
MOV M,A
HLT
```
8. 1s complement of number
```s
LDA 2501 H
CMA
STA 2502 H
HLT
```
9. 2s complement of a number
```s
LDA 2501 H  
CMA 
ADI,01 H 
STA 2502 H 
HLT
```
10. Largest among 2 numbers
```s
LXI H,2501 H
MOV A, M
INX H CMP M
JNC AHEAD 
STA 2503 H
MOV A,M
HLT
```