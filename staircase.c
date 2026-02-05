#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Wrong Input\n");
		return 1;
	}
	for (int i = 1, length = atoi(argv[1]) + 1; i < length; i++) {
		for (int j = 0; j < i; j++) {
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
