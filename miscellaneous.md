# Useful GDB commands:

[GDB (Step by Step Introduction)](https://www.geeksforgeeks.org/c/gdb-step-by-step-introduction/)

Here are a few useful commands to get started with GDB.
| Command |	Description |
| ------- | ----------- |
| run or r | Executes the program from start to end. |
| break or b | Sets a breakpoint on a particular line. |
| disable | Disables a breakpoint |
| enable | Enables a disabled breakpoint. |
| next or n | Executes the next line of code without diving into functions. |
| step | Goes to the next instruction, diving into the function. |
| list or l	| Displays the code. |
| print or p | Displays the value of a variable. |
| quit or q | Exits out of GDB. |
| clear | Clears all breakpoints. |
| continue | Continues normal execution |


# Clear buffer
Alternate to `fflush(stdin);`

```{c}
void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
```
