#include "salary_management.h"

float calculate_salary(char id[20]){

    long salary = get_salary_by_id(id);
    float basic = (salary*0.464976751)/12;
    float fba = (salary*0.449227538)/12;
    float gross = (salary*0.914204289)/12;
    float pf = (salary*0.055797210)/12;
    float bonus = (salary*0.029998500)/12;
    float perday = (salary*0.464976751)/365;

    int unpaid;
    printf("ENter how many days of unpaid leaves?\n");
    scanf("%d", &unpaid);
    float payable_salary=basic-(unpaid*perday);
    return payable_salary;

    
}