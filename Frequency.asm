		.data
prompt:	.asciiz	"Enter text, followed by #:\n"
		.globl main
occurance:	.space 104 # going by int data requiring a byte since we need to count howmany times 26 * 4 = 103

		.text
main:
		li $s0, 90 
		li $s1, 35 # Store the #character to detect string finish
		li $s2, 32 # space
		li $s3, 9  # tab
		li $s4, 10 # new line
		li $s5, 15 # enter
		li $s6, 58 # :

		li $v0, 4 # print string.
		la $a0, prompt # Print the welcome message
		syscall

input:		
		li $v0,12 # Load reading a char.
		syscall 
		
		beq $v0, $s1, printStart # Jump to printing preparation==finish of the string:
		beq $v0, $s2, input # skip spaces
		beq $v0, $s3, input # skip tabs
		beq $v0, $s4, input #  skip lines (carriage return)
		beq $v0, $s5, input # skip enter 
		bgt $v0, $s0, lwrCase # lwrCase go to lwrCase step
		addi $v0, -65 #input symbols starting at 65 where ansii A is
arrayHandler:
		sll $v0, $v0, 2 # multiply $v0 by 4.
		la $t0, occurance # Load the array in $t0
		add $t0, $t0, $v0
		lw $t1, 0($t0) 
		addi $t1, 1 # add 1 to the counter
		sw $t1, occurance($v0) # save it tot he array
		j input # to to the next input.

lwrCase:
		addi $v0, -97 # ansii a starts at 79
		j arrayHandler 
printStart:
		li $s0, 64 
		li $s1, 0 
		li $s3, 25 #26 -1 = 25 (0 to 25) 
		li $v0, 11 # print character
		move $a0, $s4 #print \n
		syscall 
print_loop:	
		addi $s0, 1 # add 1 to $s0
		move $a0, $s0 # mov $s0 to $a0
		syscall

		move $a0, $s6 # : 
		syscall

		move $a0, $s2 # space
		syscall

		sll $t0, $s1, 2 # shift by 2 or multiply by 4
		lw $a0, occurance($t0) # print the array element.
		li $v0, 1 # print the int.
		syscall

		li $v0, 11 # Load code for priting char.
		move $a0, $s4 # /n new line to get good formating.
		syscall

		beq $s3, $s1 finish # is it done hell yes and jump to the finish line
		addi $s1, 1
		j print_loop # if not jump to the next letter.

finish:
		li $v0, 10
		syscall # goodbye.