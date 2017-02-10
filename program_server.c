/*
 * S.A. Ishani
 * Index No: 13000462
 */

#include "program.h"

//Addition function
int *
addition_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Addition function called\n");
	printf("Parameters: %d, %d\n\n", argp-> num1, argp->num2 );
	result = argp->num1 + argp->num2;

	return &result;
}


//Subtraction function
int *
subtraction_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Subtraction function called\n");
	printf("Parameters: %d, %d\n\n", argp-> num1, argp->num2 );
	result = argp->num1 - argp->num2;

	return &result;
}


//Multiplication function
int *
multiplication_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Multiplication function called\n");
	printf("Parameters: %d, %d\n\n", argp-> num1, argp->num2 );
	result = argp->num1 * argp->num2;

	return &result;
}


//Division function
int *
division_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Division function called\n");
	printf("Parameters: %d, %d\n\n", argp-> num1, argp->num2 );
	result = argp->num1 / argp->num2;

	return &result;
}
