include 'emu8086.inc'

print "Enter a Lowercase Letter: "

mov ah,1
int 21h

sub al,'a'
add al,'A'

printn ""
print "Upper Case: "

mov ah,2
mov dl,al
int 21h