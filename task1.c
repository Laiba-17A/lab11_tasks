#include<stdio.h>

int main(){
	FILE *file;
	file=fopen("prac.csv","w");
	
	if(file== NULL){
		printf("error while opening file\n");
		return 1;
	}
	int i;
	char name[5][100];
	for(i=0;i<5;i++){
	   printf("enter name \n");
	   gets(name[i]);
	   fprintf(file,name[i]);
	   fprintf(file,"\n");
}
	fclose(file);
	return 0;
}
