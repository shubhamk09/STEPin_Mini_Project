#include "salary_management.h"


void increment(char id[20]){


    emp e = get_details_employee(id);
    del_employee(id);
    int inc;
    printf("\nHow much you want to increment? \n");
    scanf("%d", &inc);
    e.salary=e.salary+inc;

    FILE *fp=fopen("employee.csv","a+");
    if(fp==NULL){
        printf("Cannot open the file\n");
    }

    fprintf(fp,"%ld, %s, %s, %ld\n", e.id, e.name, e.department, e.salary);
    printf("\nThe salary is updated\n");
    fclose(fp);


}