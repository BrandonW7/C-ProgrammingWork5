/*
 * Program Description:
 * This program asks the user to enter a number between 1 and 5,
 * and then displays all numbers from 1 to 20 that are evenly divisible by that number.
 */

 #include <stdio.h>

 int main() {
     int divisor;
 
     // Get user input
     printf("Enter a number between 1 and 5: ");
     scanf("%d", &divisor);
 
     if (divisor < 1 || divisor > 5) {
         printf("Invalid input. Please enter a number from 1 to 5.\n");
         return 1;
     }
 
     printf("Numbers divisible by %d between 1 and 20:\n", divisor);
 
     for (int i = 1; i <= 20; i++) {
         if (i % divisor == 0) {
             printf("%d ", i);
         }
     }
 
     printf("\n");
     return 0;
 }
 