#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	FILE *fp;
	int a,b;
	fp=fopen("data.txt","r");
	if(fp==NULL)
	{
		printf("can not open file to read\n");
		exit(1);
	}
	
	while(!feof(fp) && fscanf(fp, "%d %d", &a, &b)!=-1)
	{
		printf("%d\n", a+b);
	}
	return 0;
}
