#include <stdio.h>

/* Question 2
 Complete the function below that print out a tree shape such as the following: 

    *
   ***
  *****
 *******
*********
   ***
   ***
   ***
   ***

  Note you can (and probably should) implement additional functions to help.

  You can assume that the width of the tree will be odd and hence every line will have an odd number of asterisks. The trunk will always have a width of three.

  Call this function from the main to test your program.
*/


void printTree(int width, int trunkLength){

    int i,j,t;
    int ispaces;

  ispaces = width -1; // initial spaces, 8 = 9-1
      for(t=ispaces;t>=0; t-=2)
        {
          for(j=1;j<=t; j++) // print spaces
        {
            printf("-");
        }
          int stars = width - t;
          for(i=1;i<=stars; i++) // print star
        {
            printf("*");
        }
          printf("\n");
        }
  



  
      for(t=ispaces;t>=0; t-=2)
        {
          for(j=1;j<=t; j++)
        {
            printf("-");
        }
          printf("\n");
        }
  
    for(i=1; i<=width; i+=2)
    { 
      // star
      for(j=1;j<=i; j++)
        {
            printf("*");
        }
      printf("\n");
    }  
  
    for(i=1; i<=width; i++)
    {
        for(j=1;j<=width-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }  
      for (t=1; t <=trunkLength; t++){
        for(j=0;j<=2; j++)
        {
            printf(" ");
        }
        for(j=0; j<=2; j++)
        {
            printf("*");
        }
        printf("\n");
  

    }}

int main(void) {
  printTree(9,4);
  return 0;
}