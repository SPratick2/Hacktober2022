#include<stdio.h > 
int main()
{
   int n, a;

   printf("Enter number of rows: ");
   scanf("%d",&n);

   // for first half portion 
   // from top to bottom
   for(int i=1; i<=n; i++)
   {
     // In each iteration a will
     // start from 1
     a = 1;

     // print space
     for(int j=i; j <= n; j++)
     {
       printf(" ");
     }

     // print digit
     for(int k=1; k <= 2*i-1; k++)
     {
       printf("%d",a++);
     }

     // new line
     printf("n");
   }

   // for second portion 
   for(int i=n-1; i>=1; i--)
   {
     // In each iteration a will
     // start from 1
     a=1;

     // print space
     for(int j=n; j>=i; j--)
     {
       printf(" ");
     }

     // print digit
     for(int k=1; k<=2*i-1; k++)
     {
       printf("%d",a++);
     }

     // new line
     printf("\n");
   }

   return 0;
}
