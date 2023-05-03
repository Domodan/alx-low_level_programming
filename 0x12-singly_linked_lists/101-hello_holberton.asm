section .data             ; Data section
    hello db 'Hello, Holberton', 0xA   ; Define a string 'Hello, Holberton' with a newline character 0xA
section .text             ; Text section
    global main           ; Declare the entry point of the program
    extern printf         ; Declare an external function printf

main:                     ; Entry point of the program
    push rbp             ; Save the base pointer to the stack
    mov rbp, rsp         ; Set the stack pointer as the base pointer
    sub rsp, 16          ; Allocate 16 bytes of memory on the stack for storing function arguments
    lea rdi, [hello]     ; Load the address of the string 'Hello, Holberton' into the rdi register
    xor eax, eax         ; Set the return value to 0
    call printf          ; Call the printf function to print the string
    add rsp, 16          ; Deallocate the memory on the stack
    mov rsp, rbp         ; Restore the stack pointer from the base pointer
    pop rbp              ; Restore the base pointer from the stack
    ret                  ; Return from the function

