PROJECT_NAME=salarymanagement

INC= inc
SSRC=src

SRC=main.c \
src/get_details_all.c \
src/add_employee.c \
src/get_salary_by_id.c \
src/del_employee.c
# TEST_SRC=test_complex.c\
# unity.c

$(PROJECT_NAME):$(SRC) $(INC)
	gcc -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).out

run:$(PROJECT_NAME)
	./$(PROJECT_NAME).out

coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC) -o $(PROJECT_NAME).out
	./${PROJECT_NAME}.out
	gcov -a $(SRC)

valgrind:$(PROJECT_NAME)
	valgrind ./${PROJECT_NAME}.exe

cppcheck:$(SRC)
	cppcheck $(SRC)

clean:$(SRC)
	rm *gcov *gcda *gch
