#include <stdio.h>
#include <string.h>
#include "calculator.h"

void main() {
	double opt1, opt2, result;
	char method;

	printf("Enter operand: ");
	scanf("%d",&opt1);

	printf("Enter second operand: ");
	scanf("%d",&opt2);

	printf("Enter method (add,sub,mul,div): ");
	scanf("%s",&method);

	if(strcmp(&method,"add") == 0) {
		add(&opt1,&opt2,&result);
	} else if(strcmp(&method,"sub") == 0) {
		sub(&opt1,&opt2,&result);
	} else if(strcmp(&method,"mul") == 0) {
		mul(&opt1,&opt2,&result);
	} else if(strcmp(&method,"div") == 0) {
		div(&opt1,&opt2,&result);
	} else {
		printf("Invalid method");
		return;
	}
	printf("Result: %d\n", result);
	return;
}

void add(double *opt1, double *opt2, double *result) {
	*result = *opt1 + *opt2;
	return;
}

void sub(double *opt1, double *opt2, double *result) {
	*result = *opt1 - *opt2;
	return;
}

void mul(double *opt1, double *opt2, double *result) {
	*result = *opt1 * *opt2;
	return;
}

void div(double *opt1, double *opt2, double *result) {
	*result = *opt1 / *opt2;
	return;
}
