#include<stdio.h>

int main(){
	FILE *file;
	file=fopen("program.txt","r");
	
	if(file== NULL){
		printf("error while opening file\n");
		exit(1);
	}
	
	char line[100];
	while(fgets(line,sizeof(line),file))
	{
		printf("%s",line);
	}
	fclose(file);
	return 0;
}
