/*
 * Program Description:
 * This program reads a number from the user and prints its digits in reverse order
 * using a do-while loop.
 */

 #include <stdio.h>

 int main() {
     int num;
 
     // Input number from user
     printf("Please enter a number: ");
     scanf("%d", &num);
 
     // Print digits in reverse
     do {
         printf("%d", num % 10); // Print the last digit
         num = num / 10;         // Remove the last digit
     } while (num != 0);
 
     printf("\n");
     return 0;
 }
 