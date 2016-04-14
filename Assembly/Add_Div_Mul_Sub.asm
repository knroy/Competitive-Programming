include 'emu8086.inc'

print 'Enter Number One: '

mov ah,1
int 21h
mov bl,al
               
printn ''

print 'Enter Number Two: '

mov ah,1
int 21h
mov cl,al

printn ''

print 'Enter Number To choose Add/Div/Mul/Sub:( 1 => Add, 2 => Sub, 3 => div & 4=> mul) '

mov ah,1
int 21h

cmp al,'1'
JE addition

cmp al,'2'
JE subtruction

cmp al,'3'
JE Division

cmp al,'4'
JE multiplication

jmp error


addition:

sub bl,48
sub cl,48

add bl,cl
add bl,48

printn ''
print 'Addition : '

mov ah,2
mov dl,bl
int 21h

printn ''

jmp end

subtruction:

sub bl,48
sub cl,48

sub bl,cl
add bl,48

printn ''
print 'Subtruction : '

mov ah,2
mov dl,bl
int 21h

printn ''

jmp end


Division:

sub bl,48
sub cl,48

mov ah,0
mov al,0

mov al,bl
mov bl,0

div cl
mov cl,0

;reminder
mov bl,ah
add bl,48

mov cl,al
add cl,48

printn ''
printn 'Division'
printn '========'

print 'Reminder: '

mov ah,2
mov dl,bl
int 21h

printn ''
print 'Result: '

mov ah,2
mov dl,cl
int 21h

printn ''
jmp end

multiplication:
sub bl,48
sub cl,48

mov ah,0
mov al,0

mov al,bl

mul cl

mov bl,0
mov bl,al
add bl,48

printn ''
print 'Multiplication: '

mov ah,2
mov dl,bl
int 21h

printn ''
jmp end

error:
print 'Sorry! Wrong choice :p Lol!!'
jmp end

end:
ret