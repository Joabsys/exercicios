#include <stdio.h>

int main()
{
    int i, space, row;                           // Declare integer variables number of rows,space and i
    printf("Enter number of rows\n");  // Read number of rows
    scanf("%d",&row);
    for(i=0; i<row; i++)                       // Run tha loop nmber of rows times
    {
        for(space=(row-i-1);space>0;space--)  // calculate number of spaces with formulae s=row-i-1
        {
            printf(" ");                                         // Print spaces
            
        }
        for(int j=(2*i -1); j>0;j--)                    // Calculate number of * in every row with formulae j= (2*i-1)
        {
            printf("*");                                    // Print *
        }
        printf("\n");    
     
    }
    for(i=row; i>0; i--)                       // Run tha loop nmber of rows times
    {
        for(space=(row-i);space>0;space--)  // calculate number of spaces with formulae s=row-i-1
        {
            printf(" ");                                         // Print spaces
            
        }
     for(int l=(2*i -3); l>0;l--)                    // Calculate number of * in every row with formulae j= (2*i-1)
        {
            printf("*");                                    // Print *
        }   
        
            printf("\n"); 
    }
    return 0;
}
