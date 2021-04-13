#include "salary_management.h"

int main(){
    get_details_all();
    // add_employee();
    // get_details_all();
    long sal= get_salary_by_id("11710408");
    del_employee("11710408");
    get_details_all();
    printf(" %ld",sal);
}