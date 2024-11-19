#include<stdio.h>

int main(){
	FILE *file;
	file=fopen("program.txt","w");
	
	if(file== NULL){
		printf("error while opening file");
		return 1;
	}
	
	fprintf(file,"Hello World\n");
	fprintf(file,"mic check 123\n");
	fclose(file);
	return 0;
}
