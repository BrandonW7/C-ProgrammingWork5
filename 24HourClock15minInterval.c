/*
 * Program Description:
 * This program displays all the times in a 24-hour clock in 15-minute intervals.
 */

 #include <stdio.h>

 int main() {
     for (int hour = 0; hour < 24; hour++) {
         for (int minute = 0; minute < 60; minute += 15) {
             printf("%02d:%02d\n", hour, minute);
         }
     }
 
     return 0;
 }
 