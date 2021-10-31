     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT TitleMsg		

     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    ;Store the array in memory
		
		MOV R3, #0x01
		MOV R6, #0x00
		MOV R7, #0x10 ;Length of Fibonacci Series 
		MOV R4, #0x00
		MOV R5, #0x01
		BL TitleMsg
Loop
		ADD R6, R4, R5
		MOV R4, R5
		MOV R5, R6
		MOV R0, R4 
		BL printMsg ;Printing Fibonacci Series
		ADD R3, #0x01
		CMP R3, R7
		BLE Loop
		
stop    B stop ; stop program
     ENDFUNC
     END 