#include<stdio.h>
int main(){
	int a=0,b=0;
	printf("a=%d , b=%d",a,b);
	printf("\n a&&b %d",a&&b);
	printf("\n a||b %d",a||b);
	printf("\n !b %d",!b);
	printf("\n !a %d",!a);
	printf("\n-------------------------------------------------------");
	a=0,b=1;
	printf("\na=%d , b=%d",a,b);
	printf("\n a&&b %d",a&&b);
	printf("\n a||b %d",a||b);
	printf("\n !b %d",!b);
	printf("\n !a %d",!a);
	printf("\n-------------------------------------------------------");
	a=1,b=0;
	printf("\na=%d , b=%d",a,b);
	printf("\n a&&b %d",a&&b);
	printf("\n a||b %d",a||b);
	printf("\n !b %d",!b);
	printf("\n !a %d",!a);
	printf("\n-------------------------------------------------------");
	a=1,b=1;
	printf("\na=%d , b=%d",a,b);
	printf("\n a&&b %d",a&&b);
	printf("\n a||b %d",a||b);
	printf("\n !b %d",!b);
	printf("\n !a %d",!a);
	printf("\n-------------------------------------------------------");


}
