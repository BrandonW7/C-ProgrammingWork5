/*
 * Program Description:
 * This program allows a teacher to enter percentage marks.
 * A negative mark indicates the end of input.
 * It calculates and displays the average percentage mark for the class.
 */

 #include <stdio.h>

 int main() {
     float mark, total = 0;
     int count = 0;
 
     printf("Enter percentage marks (-1 to end):\n");
 
     while (1) {
         scanf("%f", &mark);
         if (mark < 0) {
             break;
         }
         total += mark;
         count++;
     }
 
     if (count > 0) {
         printf("Average mark: %.2f%%\n", total / count);
     } else {
         printf("No marks entered.\n");
     }
 
     return 0;
 }
 