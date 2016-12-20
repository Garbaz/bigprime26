#include <stdio.h>
#include <gmp.h>

mpz_t result, base;
FILE *outfile;

int main()
{
	mpz_init(base);
	mpz_init(result);

	mpz_set_ui(base, 2);

	mpz_pow_ui(result, base, 74207281);
	mpz_sub_ui(result, result, 1);
	
	outfile = fopen("out.txt", "w+"); 
	mpz_out_str(outfile, 26, result);
	fclose(outfile);
}
