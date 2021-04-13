#include "salary_management.h"

void del_employee(char id[20]){
    int row=get_row(id);
    printf("\n%d", row);



    FILE *srcFile;
    FILE *tempFile;

    char path[100]="employee.csv";

    int line=row;


    /* Try to open file */
    srcFile  = fopen(path, "r");
    tempFile = fopen("delete-line.tmp", "w");


    /* Exit if file not opened successfully */
    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }



    // printf("\nFile contents before removing line.\n\n");
    // printFile(srcFile);


    // Move src file pointer to beginning
    rewind(srcFile);

    // Delete given line from file.
    deleteLine(srcFile, tempFile, line);


    /* Close all open files */
    fclose(srcFile);
    fclose(tempFile);


    /* Delete src file and rename temp file as src */
    remove(path);
    rename("delete-line.tmp", path);


    printf("\n\n\nFile contents after removing %d line.\n\n", line);

    // Open source file and print its contents
    srcFile = fopen(path, "r");
    printFile(srcFile);
    fclose(srcFile);




}

int get_row(char id[20]){
    FILE *fp = NULL;
    int del_row;
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
                del_row=row;
  
                
                value = strtok(NULL, ", ");
                column++;
            }
            
            
        }
  
        
        fclose(fp);
        return del_row;
    }




}


/**
 * Print contents of a file.
 */
void printFile(FILE *fptr)
{
    char ch;

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}



/**
 * Function to delete a given line from file.
 */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line)
{
    char buffer[BUFFER_SIZE];
    int count = 1;

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        /* If current line is not the line user wanted to remove */
        if (line != count)
            fputs(buffer, tempFile);

        count++;
    }
}