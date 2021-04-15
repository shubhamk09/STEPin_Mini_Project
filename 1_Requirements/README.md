
# Requirements

  

  

## Introduction

  

  

The aim of this project is to automate the salary system of an organisation. The Salary Management System helps streamline and centralize the salary payments of the organisation. It helps an organisation to manage the salary of the employees. The software calculate salary, incentives, bonus and tax deduction etc by itself. Manager can add the details of an employee like name, address department etc. and can see salary breakdown of every employee. This project will significantly cut down the processing time and cost of hiring a seperate person to handle salary related tasks.

  

  

## Research

  

  

### Problem Identification

  

  

The organisation using manual system to manage salaries have to calculate salaries and tax deduction af the employee. The manual work required a lot of paper work and handle several type of files manually. They have to keep record of tax of whole organization. All this paperwork is extremly time consuming job, and accordingly costly as well as they have to hire more man power to the job in time.

  

  

There is always a risk of human error in the manual work, which will eventually halt or slow down the productivity of whole organisation. And if there is a delay in payment of salaries of any employee then this affect the relationship of organisation and the employee. Therefore organisation require a software that can handle all of the work without making any error and reduce the time and cost of managing the salry.

  

  

### Benefits

  

  

* Saves times and efforts that go into building a plan, acquiring and compiling all employee data, and manually setting up the entire system.

  

* Doesn’t hamper productivity of those employees who would have otherwise spent time in dealing with paper work.

  

* Company resources are saved; implementing it manually is very costly.

  

* Mistakes in manually managing the salaries can lead to fines and penalties. Thus salary management system help in reducing unwanted costs.

  

* The user need not be an expert in any domain as all the calculation is done by the software. User just have to use the software to do the task without worrying about the working of the software.

  

* Timely delivery of the salaries and taxes. Oranization could deliver the salarries and taxes in time thus maintaining a healthy relationship between organization and its employees.

  
  

### State of Art

  

* Before salary management system, the organization have to do all the work of managing manually. This was a tidious task to do and lot of paper work to handle. First generation of salary managemnt system does not have any databases. They were just being used to cut down the time nedded in calculation. User still have to manually feed the required input to the system in order to get results. Salaray managemnt system were added as a module to the accounting system of the organisation, which have only few features. Support for the database was included in later years with dedicated software which truly streamlined the processes.

  

## Defining my System

  

  

## SWOT Analysis

  

  

![](swot.png)

  

  

## 4W's and 1H

  

  

### Who:

  

* The software targets the medium to large size organization in which it is impossible to keep track of salary of each and every employee.

  

  

### What:

  

* This Product enables the organisation to handle all the employee's financial records in a hassle-free, automated fashion. This includes employee's salaries, bonuses, deductions, net pay, and generation of pay-slips.

  

  

### When:

  

* The product is going to be used when an organisation wants to calculate salary, tax, breakdown the salary and fetch information about the salary.

  
  
  

### Where:

  

* This product can be implemented in any organisation with a large number of employees.

  

  

### How:

  

* This product deployeed can be in a desktop, and the user just have to chose which function is neede to be performed, the system will perform that function and give the results.

  
  

## Detail requirements

  

### High Level Requirements:

  
| HLR ID | Description | Status |
| ----- | -------- | -------- |
| HR1 | User should be able to add new employee | Implemented |
| HR2 | User should able to get details of employees | Implemented |
| HR3 | User should be able to increment the salary of an employee | Implemented |
| HR4 | User should be able to remove an employee  | Implemented |
| HR5 | User should be able calulate monthly salary | Implemented |
| HR6 | User should be able to print salary slip | Future |


### Low Level Requirements:

| LLR ID | Description | Status | 
| ----- | -------- | -------- |
| LR1 | User should be able to select the task which he desire to perform. | Implemented |
| LR2 | System should ask user all the necessary details of employee to add employee to the database. | Implemented |
| LR3 | User should be able to input the id of the employee in order to get the details of the employee. | Implemented |
| LR4 | User should be able to input the id of the employee in order to remove the details of the employee. | Implemented |
| LR5 | User should be able to input the id of the employee in order to remove the details of the employee. | Implemented |
| LR6 | System should calculate basic salary, fba, gross monthly salary, Provident fund and perday salary of employee. | Implemented |
| LR7 | User should be able to input the id of the employee and the icrement value in order to increment the salary of the employee. | Implemented |
| LR8 | When incrementing the salary system should fetch all the details of employee, increment the salary, delete the old record of employee and then rewrite the whole record into the file . | Implemented |
| LR9 | Data should be stored in a CSV file | Implemented |
| LR10 | System should be able to print the salary slip in proper format including basic salary, fba, gross monthly salary, Provident fund and perday salary of employee.| Future |


