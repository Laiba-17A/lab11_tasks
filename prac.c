struct university{
	char uni_name[20];
};

struct teacher{
	char t_name[20];
	char course[20];
};

struct department{
	char dept_name[20];
};

struct student{
	int id;
	char name[20];
	struct university data;
	struct teacher info;
	struct department dept;
};



int main(){
	struct student s1[3];
	int i;
	for(i=0;i<3;i++){
		printf("enter id %d ",i+1);
		scanf("%d",&s1[i].id);
		printf("enter student name\n");
	    gets(s1[i].name);
	    printf("enter university name\n");
	    gets(s1[i].data.uni_name);
	    printf("enter teacher name\n");
	    gets(s1[i].info.t_name);
	    printf("enter course name\n");
	    gets(s1[i].info.course);
	    printf("enter department name\n");
	    gets(s1[i].dept.dept_name);
	}
	//struct student s2;
	//struct student s3;
	
	/*s1[0].id=1234;
	strcpy(s1[0].name,"Laiba");
	strcpy(s1[0].data.uni_name,"FAST");
	strcpy(s1[0].info.t_name,"Sir Khalid");
	strcpy(s1[0].info.course,"PF Lab");
	strcpy(s1[0].dept.dept_name,"AI");
	
	s1[1].id=1204;
	strcpy(s1[1].name,"Arshia");
	strcpy(s1[1].data.uni_name,"FAST");
	strcpy(s1[1].info.t_name,"Sir Khalid");
	strcpy(s1[1].info.course,"PF Lab");
	strcpy(s1[1].dept.dept_name,"CS");
	
	s1[2].id=1104;
	strcpy(s1[2].name,"Zahra");
	strcpy(s1[2].data.uni_name,"FAST");
	strcpy(s1[2].info.t_name,"Sir Khalid");
	strcpy(s1[2].info.course,"PF Lab");
	strcpy(s1[2].dept.dept_name,"AI");
	//printf("%s",s1.info.course);*/
	//printf("Name: %s \n ID: %d \n University: %s \n Department: %s \n Course Instructor: %s \n Course Name: %s \n ",s2.name,s2.id,s2.data,s2.dept,s2.info.t_name,s2.info.course );
	//printf(" %d\n",s1[0].id);
	//printf(" Name: %s \n ID: %d \n University: %s \n Department: %s \n Course Instructor: %s \n Course Name: %s \n",s1.name,s1.id,s1.data,s1.dept,s1.info.t_name,s1.info.course);
	int j;
	int n=3;
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
		
		if(!(strcmp(s1[i].dept,s1[j].dept))){
			printf(" Name: %s \n ID: %d \n University: %s \n Department: %s \n Course Instructor: %s \n Course Name: %s \n",s1[i].name,s1[i].id,s1[i].data,s1[i].dept,s1[i].info.t_name,s1[i].info.course);
			printf(" Name: %s \n ID: %d \n University: %s \n Department: %s \n Course Instructor: %s \n Course Name: %s \n",s1[j].name,s1[j].id,s1[j].data,s1[j].dept,s1[j].info.t_name,s1[j].info.course);
		}
	}
	}
}
