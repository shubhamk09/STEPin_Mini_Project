# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | System should be able to get employee details | 11710408 | a structure with employee id 11710408 | a structure with employee id 11710408 | Requirement based |
|  H_02       | If user want to get the salary of the employee  | 11710408 | 420040 | 420040 |Scenario based    |
|  H_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | System should able to take a employee id from user and return a structure containing the details of that employee |  11710408 | a structure with employee id 11710408 | a structure with employee id 11710408 |Requirement based |
|  L_02       | if user need to increment salary of an employee but bfore that he want to see what is his or her current salary |  11710408 | 420040 | 420040 |Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |