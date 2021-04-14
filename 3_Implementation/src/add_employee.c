#include "salary_management.h"

void add_employee(char name[50], long id,char department[20], long salary){
    FILE *fp=fopen("employee.csv","a+");
    if(fp==NULL){
        printf("Cannot open the file\n");
    }
    
    // char name[50];
    // long id;
    // char department[20];
    // long salary;

    // scanf("%s", name);
    // scanf("%ld", &id);
    // scanf("%s", department);
    // scanf("%ld", &salary);

    fprintf(fp,"%s, %ld, %s, %ld\n", name, id, department, salary);
    fclose(fp);
}