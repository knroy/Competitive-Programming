include 'emu8086.inc'

print "Enter a Uppercase Letter: "

mov ah,1
int 21h

sub al,'A''
add al,'a'

printn ""
print "Lower Case: "

mov ah,2
mov dl,al
int 21h