section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string
    format db "%s", 10, 0            ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp             ; Save base pointer
    mov rdi, format      ; Load format string into rdi
    mov rsi, hello       ; Load address of the string into rsi
    xor rax, rax         ; Clear rax register before syscall
    call printf         ; Call printf function
    pop rbp              ; Restore base pointer

    xor rax, rax         ; Return 0
    ret
