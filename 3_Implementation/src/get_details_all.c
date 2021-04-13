#include "salary_management.h"

void get_details_all(){
   FILE *fp = NULL;
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
               
                if (column == 0) {
                    printf("Name = ");
                }
  
                
                if (column == 1) {
                    printf("\tID = ");
                }
  
               
                if (column == 2) {
                    printf("\tDepartment = ");
                }

                if (column == 3) {
                    printf("\tSalary = ");
                }
  
                printf("%s", value);
                value = strtok(NULL, ", ");
                column++;
            }
  
            printf("\n");
        }
  
       
        fclose(fp);
    } 
}