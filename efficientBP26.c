#include <stdio.h>
#include <gmp.h>

#define SIZE ((74207281/8 + 1)/sizeof(mp_limb_t) + 1)

mp_limb_t num[SIZE];
FILE *out;

int main()
{
	for(unsigned int i = 0; i < SIZE - 1; i++)
	{
		num[i] = GMP_NUMB_MASK;
	}
	num[SIZE - 1] = 0x1ffffffffffff;
	
	out = fopen("out_efc.txt","w+");
	
	mpz_t numout = {SIZE, SIZE, num};
	
	mpz_out_str(out, 26, numout);
	fclose(out);
}
