#include "salary_management.h"

emp get_details_employee(char id[20]){
    int rowg=get_row(id);
    char buffer[1024]="";
    FILE *fp = NULL;
    emp e;
    fp = fopen("employee.csv", "r");
     if (!fp)
        printf("Can't open file\n");
    else {
        
        int row = 0;
        int column = 0;
  
        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;
   
            if (row == 1)
                continue;
  
            if(row==rowg){
                char* value = strtok(buffer, ", ");
  
            while (value) {
               
                if (column == 0) {
                    e.id=atoi(value);
                }
  
                
                if (column == 1) {
                    strcpy(e.name, value);
                }
  
               
                if (column == 2) {
                    strcpy(e.department, value);
                }

                if (column == 3) {
                    e.salary=atoi(value);
                }
  
                value = strtok(NULL, ", ");
                column++;
            }
                break;
            }
            
        }
  
        
        fclose(fp);
        
    }
    return e;

}