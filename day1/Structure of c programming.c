/******************Documentation Section*************/
// A program to illustrate Structure of C programming
/* A program to calculate the area of circle
Author: Bishal Rijal,Niranjan Adhikari */

/*************Link Section****************************/
#include<stdio.h>
#include<conio.h>

/*************** Definition Section ******************/
#define PI 3.1416


/**************** Global Declaration section *********/
float r=10 //variable which are used in more than one function are called global variable
// function declaration is also done in this section
float area_of_circle(float );

/**************** main function section****************/
int main {
    float area;
    area= area_of_circle(r);
    printf("Area of circle of radius %f is %f",r,area);
    getch();

}
/********* subprogram section ***********/
// function that are called in main program section are defined here

float area_of_circle(float radius){
    return (PI*radius*radius);
}



