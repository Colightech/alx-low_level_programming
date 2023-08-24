section .data
    format db "Hello, Holberton",10,0  ; The format string with newline

section .text
    global main
    extern printf

main:
    sub rsp, 8             ; Align the stack to 16 bytes boundary
    mov rdi, format        ; Load the address of the format string
    call printf           ; Call the printf function
    add rsp, 8             ; Restore the stack pointer
    mov eax, 0x60          ; syscall: exit
    xor edi, edi           ; status: 0
    syscall

