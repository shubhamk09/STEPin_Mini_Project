#include "salary_management.h"

int main(){
    
    printf("\n========================= Welcome to the Salary Management system =========================\n");
    int input=0;
    while(input!=8){
        printf("\n===================================== Chose your Task =====================================\n");
        printf("1 - > Adding new Employee\n");
        printf("2 - > Calculate This Month's Salary\n");
        printf("3 - > Remove employee\n");
        printf("4 - > Get details of an Employee\n");
        printf("5 - > Get details of all Employees\n");
        printf("6 - > Get Salary of an Employee\n");
        printf("7 - > Increment Salary on Employee\n");
        printf("8 - > To Exit from the System\n");
        scanf("%d", &input);

        if(input==1){
            add_employee();
        }
        else if (input==2)
        {
            char id[20];
            printf("\nEnter the id of the employee:\n");
            scanf("%s", id);
            float payable_salary=calculate_salary(id);
            printf("Payable salary of %s is: %f", id, payable_salary);
        }
        else if (input==3)
        {
            char id[20];
            printf("\nEnter the id of the employee you want to remove:\n");
            scanf("%s", id);
            del_employee(id);
        }
        else if (input==4)
        {
            emp employee;
            char id[20];
            printf("\nEnter the id of the employee you want to get details:\n");
            scanf("%s", id);
            employee=get_details_employee(id);
            printf("\nID: %ld", employee.id);
            printf("\nName: %s", employee.name);
            printf("\nDepartment: %s", employee.department);
            printf("\nSalary: %ld", employee.salary);
        }
        else if (input==5)
        {
            get_details_all();
        }
        else if (input==6)
        {
            long salary;
            char id[20];
            printf("\nEnter the id of the employee you want to see the salary:\n");
            scanf("%s", id);
            salary=get_salary_by_id(id);
            printf("Salary of the Employee %s is: %ld", id, salary);
        }
        else if (input==7)
        {
            char id[20];
            printf("\nEnter the id of the employee you want to increment the salary:\n");
            scanf("%s", id);
            increment(id);
        }
        else if (input<1 && input>9)
        {
            printf("Invalid");
        }
        



    }
    
}