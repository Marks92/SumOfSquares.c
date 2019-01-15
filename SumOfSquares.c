/* CS 153 PROGRAM ASSIGNMENT #4 
 
 This program prompts the user for a z value that
 then calculates all of the ordered pairs that can
 satisfy the equation x^2 + y^2 = z. The program
 also checks to see if there are values to the entered 
 z value and if there are none it prints "None Found"
 
 Mark Schuberth 

10/4/2018 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h> /* used for INT_MAX */

int main()
{
 int x,y,z, count = 0;
 
 /* z must be between 0 and INT_MAX */
 printf("Enter a positive z value from 0 to 2,147,483,647: ");
 scanf("%d", &z);
 
 /* loop that checks for all solutions to x^2+y^2=z */
 /* if the number entered by the user is not a positive int */
 /* or if it is over INT_MAX the loop returns None Found! */
 if(z <= INT_MAX && z > 0)
 {
  for(x = 1; x*x <= z; x++)
  {
   for(y = 1; y*y <= z; y++)
   {
    if(y*y + x*x == z)
    {
     /* prints solutions to equation in ordered pairs */
     printf("(%d , %d)\n", x, y);
     count++;
    }
   }
  }
  /* finds the zero pair when y = 0 */
  x = sqrt(z);
  printf("(%d , 0)\n", x);
  count++;
  
  /* finds the zero pair when x = 0 */
  y = sqrt(z);
  printf("(0 , %d)\n", y);
  count++;
 }
 
 /* counts the number of solutions found */
 /* if none are found it prints "None Found!" */
 if(count == 0)
 {
  printf("None Found!");
 }
 else 
 {
  printf("All solutions have been found!");
 }
 
 return 0;
}
