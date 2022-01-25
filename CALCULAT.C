#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l;
	clrscr();
	printf("\nenter the no. which you want to add:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\naddition of the given no.is: %d",c);
	printf("\n\n\nenter the no. which you want to subtact:");
	scanf("%d %d",&d,&e);
	f=d-e;
	printf("\nsubtraction of the given no.is: %d",f);
	printf("\n\n\nenter the no. which you want to multiply:");
	scanf("%d %d",&g,&h);
	i=g*h;
	printf("\nmultiplication of the given no.is %d:",i);
	printf("\n\n\nenter the no. which you want to divide:");
	scanf("%d %d",&j,&k);
	l=j/k;
	printf("\ndivision of the given no.is: %d",l);
	getch();
}