// type conversion 
#include<stdio.h>
int main(){
	// implicit type conversion 
	int n=10,n1,n2;
	float f ,f2=56;
	f=n;/* itself convert integer to float but it is not possible to convert float to integer implicitely  for detail imformation refer textbook*/

	printf("%f",f);
	// explict type conversion
	n1= (int)9.3;
	printf("\n%d",n1);
	n2=(int)(f2/f+0.5);
	printf("\n%d",n2);
	
	return 0;
	
}
