#include <stdio.h>
#include <string.h>
#include "calculator.h"

int main() {
	int opt1, opt2, result;
	char method;

	printf("Enter operand: ");
	scanf("%d",&opt1);

	printf("Enter method (add,sub,mul,div): ");
        scanf("%s",&method);

	printf("Enter second operand: ");
	scanf("%d",&opt2);	

	if(strcmp(&method,"add") == 0) {
		add(&opt1,&opt2,&result);
	} else if(strcmp(&method,"sub") == 0) {
		sub(&opt1,&opt2,&result);
	} else if(strcmp(&method,"mul") == 0) {
		mul(&opt1,&opt2,&result);
	} else if(strcmp(&method,"div") == 0) {
		div(&opt1,&opt2,&result);
	} else {
		printf("Invalid method\n");
		return 1;
	}
	printf("Result: %d\n", result);
	return 0;
}

void add(int *opt1, int *opt2, int *result) {
	*result = *opt1 + *opt2;
	return;
}

void sub(int *opt1, int *opt2, int *result) {
	*result = *opt1 - *opt2;
	return;
}

void mul(int *opt1, int *opt2, int *result) {
	*result = *opt1 * *opt2;
	return;
}

void div(int *opt1, int *opt2, int *result) {
	*result = *opt1 / *opt2;
	return;
}
