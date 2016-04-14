include 'emu8086.inc'

mov bl,0
mov cl,0

loop1:

mov ah,1
int 21h

cmp al,'1'
je output

cmp bl,9
je increment_cl

inc bl

jmp loop1

output:
    
    add bl,48
    add cl,48
    
    printn ""
    print "String Length: "
    mov ah,2
    mov dl,cl
    int 21h
    
    mov ah,2
    mov dl,bl
    int 21h
    
    jmp return
    
increment_cl:
    
    add cl,1
    mov bl,0
    jmp loop1
    
return:
    
    ret