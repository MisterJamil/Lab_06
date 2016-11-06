// Lab_06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#define MAX 100
int indexOf(char *sFirstName, char cLet);
int lastIndexOf(char *sFirstName, char cLet);

int main(){
	char cLet;
	int pos1, pos2;
	char sFirstName[MAX];
	printf("What is your first name?\n");
	scanf("%s", &sFirstName);
	printf("Enter a letter from your first name to find its position number.\n");
	scanf("%c", &cLet);
	scanf("%c", &cLet);
	pos1 = indexOf(sFirstName, cLet);
	pos2 = lastIndexOf(sFirstName, cLet);
	return 0;
}

int indexOf(char *sFirstName, char cLet ){
	int pos1 = -1;
	int len = strlen(sFirstName);
	for (int i = 0; i < len && pos1 < 0; i++) {
		if (sFirstName[i] == cLet) {
			pos1 = i;
			printf("First index: %d\n", pos1 + 1);
		}
	}
	return pos1;
}

int lastIndexOf(char *sFirstName, char cLet ) {
	int len = strlen(sFirstName);
	int pos2 = -1;
	for (int i = len; i > 0 && pos2 < 0; i--) {
		if (sFirstName[i] == cLet) {
			pos2 = i;
			printf("Last index: %d\n", pos2 + 1);
		}
	}
	return pos2;
}