/*
 * Program Description:
 * This program calculates and displays the sum of all odd integers between 1 and 99.
 */

 #include <stdio.h>

 int main() {
     int sum = 0;
 
     for (int i = 1; i < 100; i += 2) {
         sum += i;
     }
 
     printf("Sum of all odd numbers from 1 to 99 is: %d\n", sum);
 
     return 0;
 }
 