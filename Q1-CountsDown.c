/*
 * Program Description:
 * This program uses a while loop to print numbers from 10 to 1 on the same line,
 * separated by commas. No comma is printed after the last number.
 */

 #include <stdio.h>

 int main() {
     int i = 10;
 
     while (i > 0) {
         printf("%d", i);
         if (i > 1) {
             printf(",");  // Print comma unless it's the last number
         }
         i--;
     }
 
     printf("\n");
     return 0;
 }
 