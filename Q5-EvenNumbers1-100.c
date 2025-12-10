/*
 * Program Description:
 * This program uses a loop to print all even numbers from 1 to 100,
 * separated by commas.
 */

 #include <stdio.h>

 int main() {
     for (int i = 2; i <= 100; i += 2) {
         printf("%d", i);
         if (i < 100) {
             printf(", ");
         }
     }
 
     printf("\n");
     return 0;
 }
 