	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 15, 0
	.globl	_nok                            ; -- Begin function nok
	.p2align	2
_nok:                                   ; @nok
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	w0, [sp, #24]
	str	w1, [sp, #20]
	ldr	w8, [sp, #24]
	ldr	w9, [sp, #20]
	subs	w8, w8, w9
	cset	w8, le
	tbnz	w8, #0, LBB0_2
	b	LBB0_1
LBB0_1:
	ldr	w8, [sp, #24]
	str	w8, [sp, #16]
	b	LBB0_5
LBB0_2:
	ldr	w8, [sp, #24]
	ldr	w9, [sp, #20]
	subs	w8, w8, w9
	cset	w8, ge
	tbnz	w8, #0, LBB0_4
	b	LBB0_3
LBB0_3:
	ldr	w8, [sp, #20]
	str	w8, [sp, #16]
	b	LBB0_4
LBB0_4:
	b	LBB0_5
LBB0_5:
	ldr	w8, [sp, #16]
	str	w8, [sp, #12]
	b	LBB0_6
LBB0_6:                                 ; =>This Inner Loop Header: Depth=1
	mov	w8, #1
	tbz	w8, #0, LBB0_12
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_6 Depth=1
	ldr	w8, [sp, #12]
	ldr	w10, [sp, #24]
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_10
	b	LBB0_8
LBB0_8:                                 ;   in Loop: Header=BB0_6 Depth=1
	ldr	w8, [sp, #12]
	ldr	w10, [sp, #20]
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_10
	b	LBB0_9
LBB0_9:
	ldr	w8, [sp, #12]
	str	w8, [sp, #28]
	b	LBB0_12
LBB0_10:                                ;   in Loop: Header=BB0_6 Depth=1
	b	LBB0_11
LBB0_11:                                ;   in Loop: Header=BB0_6 Depth=1
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	LBB0_6
LBB0_12:
	ldr	w0, [sp, #28]
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	.cfi_def_cfa_offset 64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #18
	stur	w8, [x29, #-4]
	mov	w8, #12
	stur	w8, [x29, #-8]
	ldur	w9, [x29, #-4]
                                        ; implicit-def: $x8
	mov	x8, x9
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	ldur	w9, [x29, #-8]
                                        ; implicit-def: $x8
	mov	x8, x9
	stur	x8, [x29, #-16]                 ; 8-byte Folded Spill
	ldur	w0, [x29, #-4]
	ldur	w1, [x29, #-8]
	bl	_nok
	ldr	x10, [sp, #24]                  ; 8-byte Folded Reload
	ldur	x8, [x29, #-16]                 ; 8-byte Folded Reload
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
                                        ; implicit-def: $x8
	mov	x8, x0
	str	x8, [x9, #16]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	w0, #0
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Smallest shared divisible of %d and %d is: %d\n"

.subsections_via_symbols