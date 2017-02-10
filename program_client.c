/*
 * S.A. Ishani
 * Index No : 13000462
 */

#include "program.h"


void
program_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	numbers  addition_1_arg;
	int  *result_2;
	numbers  subtraction_1_arg;
	int  *result_3;
	numbers  multiplication_1_arg;
	int  *result_4;
	numbers  division_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, PROGRAM, VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	
	//Addition
	addition_1_arg.num1 = 200;
	addition_1_arg.num2 = 100;
	result_1 = addition_1(&addition_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("The summation is %d\n", *result_1);
	}

	//Subtraction
	subtraction_1_arg.num1 = 200;
	subtraction_1_arg.num2 = 100;
	result_2 = subtraction_1(&subtraction_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("The subtraction is %d\n", *result_2);
	}

	//Multiplication
	multiplication_1_arg.num1 = 200;
	multiplication_1_arg.num2 = 100;
	result_3 = multiplication_1(&multiplication_1_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("The multiplication is %d\n", *result_3);
	}

	//Division
	division_1_arg.num1 = 200;
	division_1_arg.num2 = 100;
	result_4 = division_1(&division_1_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("The division is %d\n", *result_4);
	}

	
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	program_1 (host);
exit (0);
}
