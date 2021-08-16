#include <stdio.h>
#include <stdlib.h>


/*This program creates a file that plots on the screen the numbers from 1 to 100. 
As for the multiples of the number of 3, the program plots the word "Foo" 
As for the multiples of the number  of 5 the program plots the word "Baa" and as for the multiples of  both 3, and 5 the 
program exhibits "FooBaa"*/ 


int main() {

/*creating a count variable  to the for loop*/

  int i;
/*Creating the for loop*/
  for (i = 1; i < 101; ++i)
  {
/*Conditional to check if the number is a multiple of 3*/
    if(i%3==0){
        printf("Foo \n");
    }
/*Conditional to check if the number is a multiple of 5*/
    if(i%5==0){

        printf("Baa \n");
    }
/*Conditional to check if the number is a multiple of both 3, and 5*/
    if (i%3==0 && i%5==0){
        printf("FooBaa \n");
    }
/*Conditional to plot the other numbers*/
    else{
    printf("%d \n", i);
    }
  }
  return 0;
}
