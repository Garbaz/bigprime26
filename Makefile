bigprime:
	gcc -O3 -lgmp -o bigprime26 bigprime26.c

efficient:
	gcc -O3 -lgmp -o efficientBP26 efficientBP26.c


all: bigprime efficient
