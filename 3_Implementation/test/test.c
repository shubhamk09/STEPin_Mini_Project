	#include "test.h"
	#include "salary_management.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_get_details_employee(void)
	{
		emp employee={};
		emp employee_check={11710408, "shubham", "software", 420040};
		employee=get_details_employee("11710408");
		TEST_ASSERT_EQUAL(employee_check.id, employee.id);
		
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_get_details_employee);

  		return UNITY_END();
	}