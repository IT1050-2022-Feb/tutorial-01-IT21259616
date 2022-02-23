/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float avg;
  
  printf("enter the mark of 1st subject :");
  scanf("%d",&mark1);
  printf("enter the mark of 2nd subject :");
  scanf("%d",&mark2);

  avg = (mark1 + mark2)/2.0;
  printf("average of your marks are %.2f :",avg);
  return 0;
}

