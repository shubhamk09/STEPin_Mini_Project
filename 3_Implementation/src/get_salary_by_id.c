#include "salary_management.h"

long get_salary_by_id(char id[20]){
FILE *fp = NULL;
    long salary;
    fp = fopen("employee.csv", "r");
     if (!fp)
        printf("Can't open file\n");
    else {
        
        char buffer[1024];
  
        int row = 0;
        int column = 0;
  
        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;
  
            
            if (row == 1)
                continue;
  
           
            char* value = strtok(buffer, ", ");

            
            while (value) {
               
                if (column == 0 && strcmp(value, id)!=0) {
                    break;
                }
                if(column==3){
                    salary=atol(value);
                }
  
                
                value = strtok(NULL, ", ");
                column++;
            }
            
            
        }
  
        
        fclose(fp);
        return salary;
    } 
}