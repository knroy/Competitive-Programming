include 'emu8086.inc'

print 'Enter number 1: '

mov ah,1
int 21h

mov bl,al

mov ah,1
int 21h

mov bh,al
printn ''
print 'Enter number 2: '

mov ah,1
int 21h

mov cl,al

mov ah,1
int 21h

mov ch,al

printn ''
printn 'Waiting for the calcualtion: '
printn 'Addition: '

mov ah,0

sub bh,48
sub ch,48

mov al,bh
mov bh,0
mov bh,10
add al,ch

div bh

mov bh,0
mov bh,ah
mov ch,al
add bh,48

sub bl,48
sub cl,48

mov al,0
mov ah,0
mov al,ch

add al,bl
add al,cl

mov bl,10
div bl

mov bl,0
mov bl,ah

add bl,48
add al,48

mov ah,2
mov dl,al
int 21h

mov ah,2
mov dl,bl
int 21h

mov ah,2
mov dl,bh
int 21h

ret