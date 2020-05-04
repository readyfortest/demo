// To Generate Diamond Pattern using C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,k;
    printf("\n Enter n : ");
    scanf("%d",&n);
    // Upper Half Of the Diamond
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=(n-1);j++) // denotes no. of blank spaces
            {printf(" ");}
        for(k=1;k<=(2*i-1);k++) // Finding the nth term using AP logic
            {printf("*");}
        if(i==n)
        {
            break;
        }
        else
        {printf("\n");}
    }
    // Lower Half Of the Diamond
    for(i=n;i>=1;i--)
    {
      for(j=n-1;j>=i;j--) // Reverse of Upper Half Logic
            printf(" ");
        for(k=(2*i-1);k>=1;k--)
        {
            if(i==n)  // This if condition is to avoid repetition of last row in upper triangle
                {break;}
            else
            {printf("*");}
        }

        printf("\n");
    }
    return 0;
}
