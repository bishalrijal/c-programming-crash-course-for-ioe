// input radius of circle from user and calculate the Area of circle 
#include<stdio.h>

int main(){
	float radius, area;
	printf("enter the radius of circle \n");
	scanf("%f",&radius);// scanf is input function  and '&radius' is address of variable radius
	area=3.14*radius*radius;
	printf(" the area of cicle is %f",area);
}
