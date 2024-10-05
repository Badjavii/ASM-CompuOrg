; E01-Hello-World.asm
.386
.model flat, stdcall
.stack 4096
ExitProcess proto,
dwExitCode:dword

.data
    mensaje db 'Hello World broyuuuuuu', 0

.code
main proc
    ;
          mov    edx, offset mensaje
          call   print

    ;
          invoke ExitProcess, 0
main endp

print proc
    ;
          mov    eax, 4
          mov    ebx, 1
          int    80h
          ret
print endp

end main