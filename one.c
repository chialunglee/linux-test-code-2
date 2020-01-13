#include <stdio.h>
#include <unistd.h>
#define SIZE 100

int main() {
	unsigned int results[SIZE];
	int j;
	int k;
	k = syscall(352, results, SIZE);
	if(k) {
		printf("What follows are the PIDs of the processes that are in the same login sesson of process 0\n");
		for(j = 0; j < k && j < SIZE; j++) {
			printf("[%d] %u ",j,results[j]);
		}
		printf("\n");
	}
	else {
		printf("There is an error when executing this system call.\n");
	}

	return 0;
}
