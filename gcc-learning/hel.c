   #include <stdio.h>
  
int main() { 
    int count = 0; // Initialize a counter

//   0x0000000000001139 <+0>:     push   rbp
//    0x000000000000113a <+1>:     mov    rbp,rsp
//    0x000000000000113d <+4>:     sub    rsp,0x10
//    0x0000000000001141 <+8>:     mov    DWORD PTR [rbp-0x4],0x0
//    0x0000000000001148 <+15>:    jmp    0x115d <main+36>
//    0x000000000000114a <+17>:    lea    rax,[rip+0xeb3]        # 0x2004
//    0x0000000000001151 <+24>:    mov    rdi,rax
//    0x0000000000001154 <+27>:    call   0x1030 <puts@plt>
//    0x0000000000001159 <+32>:    add    DWORD PTR [rbp-0x4],0x1
//    0x000000000000115d <+36>:    cmp    DWORD PTR [rbp-0x4],0x4
//    0x0000000000001161 <+40>:    jle    0x114a <main+17>
//    0x0000000000001163 <+42>:    mov    eax,0x0
//    0x0000000000001168 <+47>:    leave
//    0x0000000000001169 <+48>:    ret
// opration destination source
    while (count < 5) { // Loop 5 times
        printf("Hello, World! \n"); // Print "Hello, World!"
        count++; // Increment the counter
    }   


    return 0; // Return 0 to indicate successful execution
}
// print f ohhyhahahah
