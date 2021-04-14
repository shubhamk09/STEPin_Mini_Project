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

typedef struct employee
{
    
    long id;
    char name[50];
    char department[20];
    long salary;
}emp;



void get_details_all();


void add_employee(char name[50], long id,char department[20], long salary);


long get_salary_by_id(char id[20]);


void del_employee(char id[20]);

int get_row(char id[20]);

void deleteLine(FILE *srcFile, FILE *tempFile, const int line);

void printFile(FILE *fptr);

void increment(char id[20]);

emp get_details_employee(char id[20]);


void toString(char str[], long num);


#endif