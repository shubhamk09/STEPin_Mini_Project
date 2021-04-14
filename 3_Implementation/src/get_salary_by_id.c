#include "salary_management.h"

long get_salary_by_id(char id[20]){
    
    emp e = get_details_employee(id);
    return e.salary;

}