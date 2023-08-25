section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string

section .text
    global main
    extern printf

main:
    push rbp             ; Save base pointer
    mov rdi, hello       ; Load address of the string into rdi
    call printf         ; Call printf function
    add rsp, 8           ; Adjust stack after the call
    pop rbp              ; Restore base pointer

    xor rax, rax         ; Return 0
    ret
