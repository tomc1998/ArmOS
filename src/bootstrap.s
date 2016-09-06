.global _start
_start:
	ldr sp, =0x08000000
	bl kernel_main

