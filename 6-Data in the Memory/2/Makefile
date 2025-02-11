all: safeadd safesubtract safemultiply safedivide

safeadd: 2-safeadd.c 2-safeint.c
	gcc -o safeadd 2-safeadd.c 2-safeint.c

safesubtract: 2-safesubtract.c 2-safeint.c
	gcc -o safesubtract 2-safesubtract.c 2-safeint.c

safemultiply: 2-safemultiply.c 2-safeint.c
	gcc -o safemultiply 2-safemultiply.c 2-safeint.c

safedivide: 2-safedivide.c 2-safeint.c
	gcc -o safedivide 2-safedivide.c 2-safeint.c

clean:
	rm safeadd safesubtract safemultiply safedivide