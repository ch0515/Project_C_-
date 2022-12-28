#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "MY NAME IS TOM";
	char* temp = strtok(str, " ");

	while (temp != NULL) {
		printf("%s\n", temp);
		temp = strtok(NULL, " ");
	}
	return 0;
}