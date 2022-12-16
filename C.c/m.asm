ORG 0000H ;Set program counter 0000H
MOV A, 50H ;Load the contents of Memory location 50H into A
ADD A, 51H ;Add the contents of memory 51H with CONTENTS A
MOV 52H, A ;Save the LS byte of the result in 52H
MOV A, #00 ;Load 00H into A
ADDC A, #00 ;Add the immediate data and carry to A
MOV 53H, A ;Save the MS byte of the result in location 53h
END