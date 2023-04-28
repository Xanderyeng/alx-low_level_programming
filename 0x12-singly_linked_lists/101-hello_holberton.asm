; File: hello.asm
; This program prints "Hello, Holberton" followed by a new line

    global  main
    extern  printf

    section .data
msg db "Hello, Holberton",0xA, 0

    section .text
main:
    ; Prepare arguments for printf
    push    rbp
    mov     rdi, msg        ; Set first argument (format string)
    xor     eax, eax        ; Set number of vector registers used to 0
    call    printf          ; Call printf

    ; Clean up stack
    pop     rbp

    ; Return from main
    xor     eax, eax        ; Set return value to 0
    ret
