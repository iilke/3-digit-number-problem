//Ilke D.  08/11/2022

//Find the largest number that can be written using the digits of a given 3-digit number.
//Example: Enter a 3 digit number: 409 // Biggest number: 940
#include <stdio.h>
int main()
{
int num=0;           //as given number by user
int a = 0;      //from now on imagine given number's digits as 'abc'
int bc = 0;
int b = 0;
int c = 0;

printf("Enter a 3 digit number: ");
scanf("%d",&num);

if (99<num<1000)
{
	int a = num/100;
	int bc = num%100;
	int b = bc/10;
	int c = num%10;
	
	if (a>b && b>c)  //a>b>c
	     printf("Biggest Number: %d%d%d",a,b,c);
    else if (a>c && c>b)  //a>c>b
    	 printf("Biggest Number: %d%d%d",a,c,b);
    else if (b>a && a>c) //b>a>c
    	 printf("Biggest Number: %d%d%d",b,a,c);
    else if(b>c && c>a) //b>c>a
		 printf("Biggest Number: %d%d%d",b,c,a);
	else if(c>a && a>b) //c>a>b
		 printf("Biggest Number: %d%d%d",c,a,b);
	else if(c>b && b>a) //c>b>a
		 printf("Biggest Number: %d%d%d",c,b,a);
}
else
	printf("wrong input!!!");

return 0;
}
