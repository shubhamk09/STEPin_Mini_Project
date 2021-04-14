#include "salary_management.h"

void add_employee(){

    char name[50];
    long id;
    char department[20];
    long salary;

    printf("Enter Id of the Employee:\n");
    scanf("%ld", &id);
    printf("Enter Name of the Employee:\n");
    scanf("%s", name);
    printf("Enter Department of the Employee:\n");
    scanf("%s", department);
    printf("Enter Slary of the Employee:\n");
    scanf("%ld", &salary);
    
    printf("%ld, %s, %s, %ld\n", id, name, department, salary);
    
    FILE *fp=fopen("employee.csv","a+");

    if(fp==NULL){
        printf("Cannot open the file\n");
    }

    fprintf(fp,"%ld, %s, %s, %ld\n", id, name, department, salary);
    
    fclose(fp);
}