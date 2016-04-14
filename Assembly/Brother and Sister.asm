include 'emu8086.inc'

print 'Enter the Fcuking Number: '

mov bh,10

mov ah,1
int 21h

mov bl,al

mov ah,1
int 21h

mov cl,al

sub bl,48
sub cl,48

printn ""

cmp cl,5

JL yes_less

cmp cl,5
JE yes_equal

cmp cl,5
JG yes_greater


yes_less:
    sub bh,5
    add bh,cl
    sub bl,1
    
    add bl,48
    add bh,48
    
    print "Brother: "
    mov ah,2
    mov dl,bl
    int 21h
    
    printn ""
    print "Sister: "
    mov ah,2
    mov dl,bh
    int 21h
    jmp end
    
yes_equal:

    mov bh,0
    add bl,48
    add bh,48
    
    print "Brother: "
    mov ah,2
    mov dl,bl
    int 21h
    
    printn ""
    print "Sister: "
    mov ah,2
    mov dl,bh
    int 21h
    jmp end
    
yes_greater:
    
    mov bh,cl
    sub bh,5
    
    add bl,48
    add bh,48
    
    print "Brother: "
    mov ah,2
    mov dl,bl
    int 21h
    
    printn ""
    print "Sister: "
    mov ah,2
    mov dl,bh
    int 21h
    jmp end
    
end:
    ret
    


