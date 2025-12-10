/*
 * Program Description:
 * This program prints numbers from 1 to 10.
 * It also prints a special message when the number is 3 or 7.
 */

 #include <stdio.h>

 int main() {
     for (int i = 1; i <= 10; i++) {
         printf("%d\n", i);
 
         if (i == 3) {
             printf("This number is three\n");
         }
 
         if (i == 7) {
             printf("This number is seven\n");
         }
     }
 
     return 0;
 }
 