### Instruction Set

**Control Introduction**

|Opcode|Operand|Meaning|Explanation|
|------|-------|-------|-----------|
|NOP|None|No operation|No operation is performed,i.e.,the instruction is fetched and decoded|
|HLT|None|Halt and enter wait state|The CPU finishes executing the current instruction and stops further execution. An interrupt or reset is necessary to exit from the halt state.|
|DI|None|Disable interrupts|The interrupt enable flip-flop is reset and all the interrupts are disabled except TRAP.|
|EI|None|Enable interrupts| The interrupt enable flip-flop is set and all the interrupts are enabled.|
|RIM|None|Read interrupt mask|This instruction is used to read the status of interrupts 7.5, 6.5, 5.5 and read serial data input bit|
|SIM|None|Set interrupt mask|This instruction is used to implement the interrupts 7.5, 6.5, 5.5, and serial data output.|

**Data Transfer Introduction**

|Opcode|Operand|Meaning|Explanation|
|------|-------|-------|-----------|
|MOV|Rd,Sc M,Sc Dt,M|Copy from the source (Sc) to the destination(Dt)|This instruction copies the contents of the source register into the destination register without any alteration. **Example** − MOV K, L|
|MVI|Rd,data M,data|Move immediate 8-bit|The 8-bit data is stored in the destination register or memory.  Example − MVI K, 55L|
|LDA|16-bit address|Load the accumulator|The contents of a memory location, specified by a 16-bit address in the operand, are copied to the accumulator.  Example − LDA 2034K|
|LDAX|B/D Reg. pair|Load the accumulator indirect|The contents of the designated register pair point to a memory location. This instruction copies the contents of that memory location into the accumulator.  Example − LDAX K|
|LXI|Reg. pair, 16-bit data|Load the register pair immediate|The instruction loads 16-bit data in the register pair designated in the register or the memory.  Example − LXI K, 3225L|
|LHLD|16-bit address|Load H and L registers direct|The instruction copies the contents of the memory location pointed out by the address into register L and copies the contents of the next memory location into register H.  Example − LHLD 3225K|
|STA|16-bit address|16-bit address|The contents of the accumulator are copied into the memory location specified by the operand.  This is a 3-byte instruction, the second byte specifies the low-order address and the third byte specifies the high-order address.  Example − STA 325K|
|STAX|16-bit address|Store the accumulator indirect|The contents of the accumulator are copied into the memory location specified by the contents of the operand.  Example − STAX K|
|SHLD|16-bit address|Store H and L registers direct|The contents of register L are stored in the memory location specified by the 16-bit address in the operand and the contents of H register are stored into the next memory location by incrementing the operand.  This is a 3-byte instruction, the second byte specifies the low-order address and the third byte specifies the high-order address.  Example − SHLD 3225K|
|XCHG|None|Exchange H and L with D and E|The contents of register H are exchanged with the contents of register D, and the contents of register L are exchanged with the contents of register E.  Example − XCHG|
|SPHL|None|Copy H and L registers to the stack pointer|The instruction loads the contents of the H and L registers into the stack pointer register. The contents of the H register provide the high-order address and the contents of the L register provide the low-order address.  Example − SPHL|
|XTHL|None|Exchange H and L with top of stack|The contents of the L register are exchanged with the stack location pointed out by the contents of the stack pointer register.  The contents of the H register are exchanged with the next stack location (SP+1).  Example − XTHL|
|PUSH|Reg. pair|Push the register pair onto the stack |The contents of the register pair designated in the operand are copied onto the stack in the following sequence.  The stack pointer register is decremented and the contents of the high order register (B, D, H, A) are copied into that location.  The stack pointer register is decremented again and the contents of the low-order register (C, E, L, flags) are copied to that location.  Example − PUSH K|
|POP|Reg. pair|Pop off stack to the register pair |The contents of the memory location pointed out by the stack pointer register are copied to the low-order register (C, E, L, status flags) of the operand.  The stack pointer is incremented by 1 and the contents of that memory location are copied to the high-order register (B, D, H, A) of the operand.  The stack pointer register is again incremented by 1.  Example − POPK|
|OUT|8-bit port address|Output the data from the accumulator from a port with 8-bit address The contents of the accumulator are copied into the I/O port specified by the operand.  Example − OUT K9L|
|IN|8-bit port address|Input data to accumulator to a port with 8bit address |The contents of the input port designated in the operand are read and loaded into the accumulator.  Example − IN5KL|

**Arithmetic Instructions**

|Opcode|Operand|Meaning|Explanation|
|------|-------|-------|-----------|
|ADD|R M|Add register or memory, to the accumulator |The contents of the register or memory are added to the contents of the accumulator and the result is stored in the accumulator.  Example − ADD K.|
|ADC|R M|Add register to the accumulator with carry |The contents of the register or memory & M the Carry flag are added to the contents of the accumulator and the result is stored in the accumulator.  Example − ADC K|
|ADI|8-bit data|Add the immediate to the accumulator |The 8-bit data is added to the contents of the accumulator and the result is stored in the accumulator.  Example − ADI 55K|
|ACI|8-bit data|Add the immediate to the accumulator with carry |The 8-bit data and the Carry flag are added to the contents of the accumulator and the result is stored in the accumulator.  Example − ACI 55K|
|LXI|Reg.pair, 16bit data|Load the register pair immediate |The instruction stores 16-bit data into the register pair designated in the operand.  Example − LXI K, 3025M|
|DAD|Reg.pair|Add the register pair to H and L registers |The 16-bit data of the specified register pair are added to the contents of the HL register.  Example − DAD K|
|SUB|R M|Subtract the register or the memory from the accumulator |The contents of the register or the memory are subtracted from the contents of the accumulator, and the result is stored in the accumulator.  Example − SUB K|
|SBB|R M|Subtract the source and borrow from the accumulator |The contents of the register or the memory & M the Borrow flag are subtracted from the contents of the accumulator and the result is placed in the accumulator.  Example − SBB K|
|SUI|8-bit data|Subtract the immediate from the accumulator |The 8-bit data is subtracted from the contents of the accumulator & the result is stored in the accumulator.  Example − SUI 55K|
|XCHG|None|Exchange H and L with D and E |The contents of register H are exchanged with the contents of register D, and the contents of register L are exchanged with the contents of register E.  Example − XCHG|
|INR|R M|Increment the register or the memory by 1 |The contents of the designated register or the memory are incremented by 1 and their result is stored at the same place.  Example − INR K|
|INX|R|Increment register pair by 1 |The contents of the designated register pair are incremented by 1 and their result is stored at the same place.  Example − INX K|
|DCR|R M|Decrement the register or the memory by 1 |The contents of the designated register or memory are decremented by 1 and their result is stored at the same place.  Example − DCR K|
|DCX|R|Decrement the register pair by 1 |The contents of the designated register pair are decremented by 1 and their result is stored at the same place.  Example − DCX K|
|DAA|None|Decimal adjust accumulator |The contents of the accumulator are changed from a binary value to two 4-bit BCD digits.  If the value of the low-order 4-bits in the accumulator is greater than 9 or if AC flag is set, the instruction adds 6 to the low-order four bits.  If the value of the high-order 4-bits in the accumulator is greater than 9 or if the Carry flag is set, the instruction adds 6 to the high-order four bits.  Example − DAA|

## 2. Introduction to GNU Simulator 8085, with its features.

GNUSim8085 is a graphical simulator, assembler and debugger for the Intel 8085 microprocessor in Linux and Windows.

### Features

**Editor**

- Program editor with interactive input wizard for all the standard instructions.
- Syntax highlighting in editor to distinguish between instructions, operands, comments etc.
- A separate opcode view which displays assembled code in hex.

**Assembler**

- Support for all standard instructions of the 8085
- Minimalistic support for three assembler directives (.equ, .db, .ds) to control data locations, there exist no directives to directly control code locations
- Code start is defined outside source code ("load me at" entry) - if not defined (default), code is generated (strangely) from 4200h (instead from the real reset vector 0000h)
- Assembly results can be stored as listing file only (no binary file output)

**Debugger**

- Complete view of registers and flags
- Support for breakpoints
- Step by step execution/debugging of program
- Hex / Decimal Converter
- Runtime inspection of stack and source code variables defined
- Runtime inspection and manipulation of memory and I/O ports Printing
- Printing of program from editor as well as assembled hex code (known not to work well in Windows)

## 3. Write an Assembly Language Program to add N consecutive numbers.

```asm
lxi h,var
mov c,m
mvi b,01h
mvi e,00h
mvi a,00h
back: add b
jnc skip
inr e
skip: inr b
dcr c
jnz back
sta result
mov a,e
sta carry
hlt
var: db 0Ah
result: db 00h
carry: db 00h
```

## 4. Write an Assembly Language Program to find the smallest and largest number from a given series.

```asm
lxi h,var
mov c,m ;counter
inx h
dcr c
mov b,m;for largest
mov d,m;for smallest
mov a,m
back: cmp b
jc ahead
mov b,a
ahead: cmp d
jnc ahead2
mov d,a
ahead2: inx h
mov a,m
dcr c
jnz back
inx h
mov m,d
inx h
mov m,b
hlt
var: db 05h
var1: db 02h
var2: db 02h
var3: db 07h
var4: db 0Ah
var5: db 0Ah
smallest: db 00h
largest: db 00h
```

## 5. Write an Assembly Language Program for subtraction of two 8-bit numbers.

```asm
mvi a,05h
mvi b,03h
sub b
sta 000h
hlt
```

