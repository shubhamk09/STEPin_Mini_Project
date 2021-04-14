#include "salary_management.h"

void toString(char str[], long num){
    long i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

}

void increment(char id[20]){
    int rowg=get_row(id);
    char buffer[1024];
    FILE *fp = NULL;
    long salary;
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
                break;
            }
            
            
        }
  
        
        fclose(fp);
        
    } 
    
    //printf("%s", buffer);
    // char str[100]="11710408, shubham, software, 400020";
    char ch=',';
  	int i, index;
  	index = -1;
 
  	
  	
  	for(i = 0; i <= strlen(buffer); i++)
  	{
  		if(buffer[i] == ch)  
		{
  			index = i;	
 		}
	}
    
    char str2[100];
    for(int i=0;i<29;i++){
        str2[i]=buffer[i];
    }

    long num=get_salary_by_id("11710408");
    printf("how much to increment?");
    long inc;
    scanf("%ld", &inc);
    num=num+inc;
    char buff[20];
    toString(buff, num);

    	
    strcat(str2, buff);

    FILE *fp2=fopen("employee.csv","a+");
    if(fp2==NULL){
        printf("Cannot open the file\n");
    }
    //del_employee(id);
    printf("%s\n", str2);
    fprintf(fp2,"%s\n", str2);
    fclose(fp2);


  	


}

 


