     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg

     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    ;Store the 3 numbers in memory
		MOV  R3, #0x20000000
		MOV  R4, #0x90
		STR  R4,[R3] 
		ADD  R3, #0x04
		MOV  R4, #0x14
		STR  R4,[R3] 
		ADD  R3, #0x04
		MOV  R4, #0x33
		STR  R4,[R3] 
		
		MOV R4, #0x00
        ;Finding largest
		MOV R0, #0x00
		MOV  R3,  #0x20000000; Base Address
        LDR R4, [R3]
		CMP R4, R0
		MOVGT R0, R4
		
		ADD  R3, #0x04
		LDR R4, [R3]
		CMP R4, R0
		MOVGT R0, R4
		
		ADD  R3, #0x04
		LDR R4, [R3]
		CMP R4, R0
		MOVGT R0, R4
		
		BL printMsg
stop    B stop ; stop program
     ENDFUNC
     END 