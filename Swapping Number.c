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
