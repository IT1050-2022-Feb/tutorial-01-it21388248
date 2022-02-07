/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
	float avg;
		
			printf("Enter marks for the 1st subject: ");
		scanf("%d",&m1);
		
			printf("\nEnter marks for the 2nd subject: ");
		scanf("%d",&m2);
	
		
		avg=(m1+m2)/2.0;
		
		printf("\nAverage mark of the student is %.2f",avg);
		
  return 0;
}

