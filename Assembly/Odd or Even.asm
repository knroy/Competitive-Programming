include 'emu8086.inc'

print 'Enter a Number to check Odd or Even: '

mov ah,1
int 21h

sub al,48

mov bl,2

div bl

printn ""

cmp ah,0
JE even

cmp ah,1
JE odd

even:
    print 'The Number is Even!!'
    jmp end
    
Odd:
    print 'The Number is Odd!!'
    jmp end

end:
ret

    
