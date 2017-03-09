#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct  intlist{
	struct intlist*next;
	char*data;
};

double push (int stack, int i) {

	return 0;
}

double pop () {

	return 0;
}

int main ()
{
	int iNArgs;
	char buf[256], sCommand[16];
	char sArg[256];
	fgets(buf,256,stdin);
	iNArgs=sscanf(buf,"%15s %256",sCommand,&sArg);
	if(!strcmp(sCommand,"push")&&iNArgs==2) {
		printf("%s\n", sArg);
		return 0;
	}
	if(!strcmp(sCommand, "pop")&&iNArgs==1) {
		printf("%d",0);
			return 0;
	}
	return 0;
}