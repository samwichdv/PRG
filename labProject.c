#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Program: PRG155 Lab 05 C
	Student: S D V
	Date: 12 - 02 - 2024
*/

double getInput() {
	double input;
	(void)scanf("%lf", &input);
	return input;
}

double proccesInput() {

	printf("Enter resistance (or 0 to end): ");
	fflush(stdout);
	double input = getInput();
	return input;
}

double calculateResistance() {
	double resistor, totalResistance, primResistor;
	primResistor = 0;
	do {
		resistor = proccesInput();
		if (resistor != 0)
			primResistor = primResistor + 1 / resistor;
	} while (resistor != 0);

	totalResistance = 1 / primResistor;
	if (totalResistance < 1000) {
		totalResistance = totalResistance / 1000;
		printf("Total parallel resistence is: %.2lf Ohm", totalResistance);
	}
	else if (totalResistance < 1000000) {
		totalResistance = totalResistance / 1000;
		printf("Total parallel resistence is: %.2lfk Ohm", totalResistance);
	}
	else if (totalResistance < 1000000000) {
		totalResistance = totalResistance / 1000000;
		printf("Total parallel resistence is: %.2lfM Ohm", totalResistance);
	}
	else {
		totalResistance = totalResistance / 1000000000;
		printf("Total parallel resistence is: %.2lfG Ohm", totalResistance);
	}
}


char getChoice() {
	char choice;
	char extrachoice;
	int choiceValidator = 0;
	do {
		printf("\nCalculate again [y/n]? ");
		fflush(stdout);
		(void)scanf(" %c", &choice);
		if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N') {
			//if (scanf(" %c", &extrachoice) == 1) {
			//	choiceValidator = 0;
			//}
			//else {
			//	choiceValidator = 1;
				return choice;
			//}
			
			}
		else {
			printf("Answer 'y' or 'n', please! ");
			}
	} while (choiceValidator != 1);
	
	
}

int main() {
	char choice;
	do {
		calculateResistance();
		choice = getChoice();
	} while (choice == 'y' || choice == 'Y');

	return 0;
}
//kiughvfiuytfg