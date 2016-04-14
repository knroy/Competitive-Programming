include 'emu8086.inc'

mov ah,1
int 21h

mov bl,al
sub bl,48
add bl,1

mov cl,1 ;outer loop counter
printn ""

out_loop:

  mov al,cl
  mov ch,0 ; inner loop counter
  in_loop:
      print "*"
      inc ch
      cmp al,ch
      jne in_loop
        
  printn ''
  inc cl
  cmp cl,bl
  jne out_loop
        
        
        