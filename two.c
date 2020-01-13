#include <stdio.h>
#include <unistd.h>
#define SIZE 100

int main() {
	unsigned int results[SIZE];
	int j;
	int k;
	k = syscall(353, results, SIZE);
	if(k) {
		printf("What follows are the local PIDs of the processes that are in the same login sesson of this process.\n");
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
