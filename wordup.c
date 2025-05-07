//Author: Johnny de Leon
//Date:4/21/25
//Purpose: Project 10


#include <stdio.h>
#define FILEU "word.txt"
#define CSIZE 5
#define CSIZE 5
#define SSIZE 50



int main () {

char guess[SSIZE];

printf("enter your guess ");
fgets(guess, SSIZE, stdin);

int si;
	for(si = 1; guess[si] !='\0'; si++){
	} 
	si--;
	printf("%d", si);
	if(si > 5 || si < 1){
	printf("your guess must be 5 letters long.\nPlease try again: ");
	}
	
	

	return 0;
}
