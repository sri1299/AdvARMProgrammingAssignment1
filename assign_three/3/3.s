     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg

     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    ;Store the array in memory
		MOV  R3, #0x20000000
		MOV  R4, #0x06 ; Array size
		STR  R4,[R3]

		ADD  R3, #0x04
		
		MOV  R4, #0x56 ;Array element
		STR  R4,[R3] 
		
		MOV  R4, #0x71 ;Array element
		ADD  R3, #0x04
		STR  R4,[R3]
		
		MOV  R4, #0x97 ;Array element
		ADD  R3, #0x04
		STR  R4,[R3]
		
		MOV  R4, #0x01 ;Array element
		ADD  R3, #0x04
		STR  R4,[R3]
		
		MOV  R4, #0x54 ;Array element
		ADD  R3, #0x04
		STR  R4,[R3]
		
		MOV  R4, #0x83 ;Array element
		ADD  R3, #0x04
		STR  R4,[R3]
		
		MOV R4, #0x00
        
		;Finding even
		MOV R0, #0x00
		MOV  R3,  #0x20000000
        LDR R5, [R3] ;Array size
		MOV R6, #0x01
		ADD  R3, #0x04
Loop
		LDR R4, [R3]
		TST R4, #1
		ADDEQ R0, R0, #0x01 ;Even count 
		ADD  R3, #0x04
		ADD R6, #0x01
		CMP R6, R5
		BLE Loop
		
		BL printMsg
stop    B stop ; stop program
     ENDFUNC
     END 