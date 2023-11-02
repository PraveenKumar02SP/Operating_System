#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("PRAVEEN KUMAR S\n");
  printf("Process ID: %d\n", getpid() );
  printf("Parent Process ID: %d\n", getpid() );
  return 0;
}
