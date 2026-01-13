#include <stdio.h>

int fact();/*function for finding factorial*/
int comb(int ,int ); /*function for return number*/
int main()
{
   int row,col,n;
   int ans;
   printf("Enter number of rows of pascal's triangle :\n");
   scanf("%d",&n);
   for(row=0;row <=n;row++)/*main for loop*/
   {
       for(col=n-row;col=!0;col--)/*nested for loop for managing space*/
       {
           printf(" ");
       }
       for(col=0;col <= row;col++)
       {
           ans=comb(row,col);/*calling a function for combination*/
           printf(" %d ",ans);/*printing the required number*/
       }
       printf("\n");/*printing new line after dealing with one row*/
   }
}


int comb(int x,int y)
{
    int a,b,c,d;
    a=fact(x);/*calling a function for factorial*/
    b=fact(y);
    c=fact(x-y);
    d=a/(b*c);
    return(d);
}
int fact(int x)
{
    int i,p=1;
    for(i=1;i <=x;i++)
    {
        p=p*i;
    }
    return(p);
}
