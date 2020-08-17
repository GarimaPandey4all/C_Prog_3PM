#include<stdio.h>
#include<conio.h>

void main()
{
   int a, b, c; // int - data type : a, b, c - variables
   clrscr();

   printf("Enter any value for a:");
   scanf("%d", &a);
   // scanf--> read user input , format specifier
   // & --> address of operator

   printf("Enter any value for b:");
   scanf("%d", &b);

   c = a + b;

   printf("Addition is: %d", c);

   getch();
}