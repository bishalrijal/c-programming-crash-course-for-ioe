#include<stdio.h>
int main(){
	int x=5;
	/*
	printf("x++=%d",x++);
	printf("\nx=%d",x);
	*/
	printf("\nx++=%d",x++);// print the value 5 and increment the value 
	printf("\nx++=%d",x++);// initial value is 6 so print 6 then increase the value to 7
	printf("\nx=%d",x);// prit the value 7
	printf("\nx++=%d",++x);// increase the value then  print so x = 8
}
