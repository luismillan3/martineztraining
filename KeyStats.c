/******************************/
// Written by: Gabriel Roman
// Date: 4/5/17
// EXAM 4
/******************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PAUSE myPause()
#define FLUSH myFlush()
#define CLS system("cls")
#define LB 0
#define UB 

/*prototype functions*/
int getChoice();
void displayMenu();
void myFlush();
void myPause();
/********************/
void enterKey(char array1[], int array2[]);
void displayHowMany(char array1[], int array2[]);
void displayNeverPressed(char array1[], int array2[]);
void displayPressedMost(char array1[], int array2[]);


main() {
int choice;
do {
choice = getChoice();
switch (choice) {
case 1: // Enter keys
enterKey();
break;
case 2: // display how many of each key
displayHowMany();
break;
case 3: // display the keys never pressed
displayNeverPressed();
break;
case 4: // display key that has been pressed most
displayPressedMost();
break;
case 5: // Quit..
printf("\n\tThanks, have a good day!\n\n\t");
PAUSE;
break;
default:
printf("ERROR: invalid selection\n");
PAUSE;
break;
} // end switch
} while (choice != 5);
} // end main
  /*================================ F U N C T I O N S ================================*/

/*--------------------------------------------------------- MENU FUNCTIONS */
int getChoice() {
int result;
displayMenu();
scanf("%i", &result); FLUSH;
return result;
} // end getChoice

void displayMenu() {
CLS;
printf("\t\t\t\t|E X A M  4|\n");
printf("================================================================================\n\n");
printf("\t[1] Enter key(s) on keyboard \n");
printf("\t[2] Display how many of each key has been pressed \n");
printf("\t[3] Display the key that have never been pressed \n");
printf("\t[4] Display the key that has been pressed the most \n");
printf("\t[5] Quit...\n\n");
printf("Selection: ");
} // end displayMenu

void myFlush() {
while (getchar() != '\n');
} // end myFlush

void myPause() {
getchar();
} // end myPause
/*------------------------------------------------------- PROGRAM FUNCTIONS */

void enterKey(char array1[], int array2[]) {

} // end enterKey()

void displayHowMany(char array1[], int array2[]) {

} // end displayHowMany()

void displayNeverPressed(char array1[], int array2[]) {

} // end displayNeverPressed()

void displayPressedMost(char array1[], int array2[]) {

} // end displayPressedMost() 