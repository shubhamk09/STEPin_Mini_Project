/**
 * @file salary_management.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Structure to store the retrived information of employee
 * 
 */
typedef struct employee
{
    
    long id;
    char name[50];
    char department[20];
    long salary;
}emp;


/**
 * @brief Get the details all of the employee
 * 
 */
void get_details_all();

/**
 * @brief Add new employee to the database
 * 
 */
void add_employee();

/**
 * @brief Get the salary by id of the employee
 * 
 * @param id 
 * @return long 
 */
long get_salary_by_id(char id[20]);

/**
 * @brief Delete the employee from the database
 * 
 * @param id 
 */
void del_employee(char id[20]);

/**
 * @brief Get the row which contain the given id of the employee
 * 
 * @param id 
 * @return int 
 */
int get_row(char id[20]);

/**
 * @brief Delete the line(Data of employee) from the database
 * 
 * @param srcFile 
 * @param tempFile 
 * @param line 
 */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line);

/**
 * @brief print the content of database
 * 
 * @param fptr 
 */
void printFile(FILE *fptr);

/**
 * @brief Increment the salary of an employee
 * 
 * @param id 
 */
void increment(char id[20]);

/**
 * @brief Get the details of employee by id
 * 
 * @param id 
 * @return emp 
 */
emp get_details_employee(char id[20]);

/**
 * @brief Calculate the the payable salary of the employee for current month
 * 
 * @param id 
 * @return float 
 */
float calculate_salary(char id[20]);

/**
 * @brief Convert long to string
 * 
 * @param str 
 * @param num 
 */
void toString(char str[], long num);


#endif