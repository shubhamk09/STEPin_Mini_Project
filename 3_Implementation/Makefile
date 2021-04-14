PROJECT_NAME=salarymanagement

INC= inc
SSRC=src

SRC=main.c \
src/get_details_all.c \
src/add_employee.c \
src/get_salary_by_id.c \
src/del_employee.c \
src/increment.c \
src/calculate_salary.c \
src/get_detail_employee.c
# TEST_SRC=test_complex.c\
# unity.c


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME):$(SRC) $(INC)
	gcc -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).$(EXEC)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)

coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC) -o $(PROJECT_NAME).$(EXEC)
	./${PROJECT_NAME}.$(EXEC)
	gcov -a $(SRC)

valgrind:$(PROJECT_NAME)
	valgrind --track-origins=yes ./${PROJECT_NAME}.$(EXEC)

cppcheck:$(SRC)
	cppcheck $(SRC)

clean:$(SRC)
	rm -r *gcov *gcda *gch
