/*
 * Program Description:
 * This program takes a positive integer input and generates the Collatz sequence.
 * If the number is even, it is halved.
 * If the number is odd, it is multiplied by 3 and incremented by 1.
 * This process repeats until the number becomes 1.
 * The program also displays the number of steps it took.
 */

 #include <stdio.h>

 int main() {
     int n, steps = 0;
 
     // Prompt user until valid input is given
     do {
         printf("Enter a positive integer: ");
         scanf("%d", &n);
         if (n < 1) {
             printf("Error: Number must be positive.\n");
         }
     } while (n < 1);
 
     printf("Value entered is %d\n", n);
 
     while (n != 1) {
         if (n % 2 == 0) {
             n = n / 2;
         } else {
             n = 3 * n + 1;
         }
         printf("Next value is %d\n", n);
         steps++;
     }
 
     printf("Final value 1, number of steps %d\n", steps);
 
     return 0;
 }
 