/*Roll no:101059
PRN:1032230750
STUDENT NAME: Chaitanya Parate
Batch:A2
LAB ASSIGNMENT NO 8: swapping of numbers using call by value and call by reference*/

void swap(int,int);    
void swap1(int*,int*);      
#include<stdio.h>
void main()
{
int a,b;
printf("enter two values:\n");
scanf("%d%d",&a,&b);
printf("\nswapping the value using call by value\n");
swap(a,b);
printf("\nswapping the value using call by reference\n");
swap1(&a,&b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("\nvalue of a is:%d\nvalue of b is:%d\n",a,b);
}
void swap1(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
printf("\nvalue of a is:%d \nvalue of b is:%d\n",*p,*q);
}
