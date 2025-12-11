#include "kernel/types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2){
	printf("Incorrect arguments\n");
	exit(1);
	}

  int n = atoi(argv[1]);

  if(n<=0){
	printf("Error: ticks must be a positive number\n");
	exit(1);
	}

  sleep(n);
  exit(0);
}
