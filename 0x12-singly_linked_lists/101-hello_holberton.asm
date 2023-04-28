section .data
    hello db "Hello, Holberton!", 10, 0   ; String to print, followed by a newline character and null terminator

section .text
    global main            ; Declare main function as entry point
    extern printf          ; Declare printf function (provided by C library)

main:
    push rbp               ; Save base pointer
    mov rbp, rsp           ; Set base pointer to current stack pointer

    ; Call printf with the address of the hello string on the stack
    mov rdi, hello         ; First argument: address of format string
    xor eax, eax           ; Clear eax register to indicate success
    call printf            ; Call printf function

    ; Clean up stack and return
    mov rsp, rbp           ; Restore stack pointer
    pop rbp                ; Restore base pointer
    xor eax, eax           ; Set return value to zero
    ret                    ; Return from main functioin
