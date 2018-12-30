// determine the larger number   using conditional operator
// condition operator is ternary since it operate on three operator
#include<stdio.h>
int main(){
	int n1,n2,larger;
	printf(" Enter the two NUMBERS ");
	scanf("%d%d",&n1,&n2);
	larger=n1>n2?n1:n2;// if the expression is true the result is  n1(fist after ?) else n2 (after :)
	printf("larger number is %d",larger);
}
