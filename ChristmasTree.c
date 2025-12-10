/*
 * Program Description:
 * This program prints a Christmas tree based on the number of tiers entered by the user.
 * Each tier has an increasing number of rows and stars.
 */

 #include <stdio.h>

 int main() {
     int tiers;
 
     // Input number of tiers
     printf("Enter number of tiers for the Christmas tree: ");
     scanf("%d", &tiers);
 
     int stars = 1;
 
     // Print each tier
     for (int t = 1; t <= tiers; t++) {
         for (int row = 1; row <= t + 1; row++) {
             // Print spaces
             for (int s = 0; s < tiers - row; s++) {
                 printf(" ");
             }
 
             // Print stars
             for (int i = 0; i < stars; i++) {
                 printf("*");
             }
 
             printf("\n");
             stars += 2; // Increase stars for next row
         }
     }
 
     // Print tree base
     for (int i = 0; i < tiers - 1; i++) printf(" ");
     printf("|\n");
 
     for (int i = 0; i < tiers - 2; i++) printf(" ");
     printf("===V===\n");
 
     return 0;
 }
 