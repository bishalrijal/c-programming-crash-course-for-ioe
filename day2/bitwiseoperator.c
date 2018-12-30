//bit wise operator
// assignment for you is to print the binary value of the ressult

#include<stdio.h>
int main(){
	int n1=15,n2=10 ,AND,OR,XOR,leftshift;// calculated as binary ie n1=00001111 AND 00001010
	AND=n1&n2; //00001010 ie equvalet to 10
	OR=n1|n2; //00001111 ie equivalent to 15
	XOR=n1^n2; //00000101 eqivalent to 5
	printf("logical operator \n -----------------------------------------");
	printf("\nAND = %d",AND);
	printf("\nOR = %d",OR);
	printf("\nXOR = %d",XOR);
	printf("\nbitwise shift \n ----------------------------------------");
	leftshift=n1<<1;
	printf("\nleftshift by 1 = %d",leftshift);
	// right shift  class work 
	
}

