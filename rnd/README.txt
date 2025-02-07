gcc -c rand.c
ld  /usr/lib/x86_64-linux-gnu/crt1.o rand.o -lc /usr/lib/x86_64-linux-gnu/crtn.o

# Dynamic linker:
ld  /usr/lib/x86_64-linux-gnu/crt1.o rand.o -lc  /usr/lib/x86_64-linux-gnu/crtn.o -dynamic-linker /lib64/ld-linux-x86-64.so.2

