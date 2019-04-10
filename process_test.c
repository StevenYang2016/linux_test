#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int z;

int main(){
	
	int *a=NULL;
	pid_t pid;
	if((pid=fork())){
		a=(int *)malloc(100*sizeof(int));
		z=pid;
		printf("z1=%d\n",z);
	}else{
		a=&z;
		*a=pid;
		printf("z2=%d\n",z);
	}
	printf("pid=%d\n",pid);
	return 0;
}
