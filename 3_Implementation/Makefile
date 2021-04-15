PROJECT_NAME=salarymanagement

INC = inc 
INC_unity = unity

SSRC=src 
TEST_SRC = test

BUILD = build

SRC=main.c \
src/get_details_all.c \
src/add_employee.c \
src/get_salary_by_id.c \
src/del_employee.c \
src/increment.c \
src/calculate_salary.c \
src/get_detail_employee.c

TEST_INC = unity/unity.c \
test/test.c



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

$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

# Build the program
all:$(SRC) $(INC)
	gcc -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).$(EXEC)

# Run the program
run:$(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)


# Document the code using Doxygen
doc:
	make -C ./documentation


# Checking code Coverage
coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).$(EXEC)
	./${PROJECT_NAME}.$(EXEC)
	gcov -a $(SRC)


# Run cpp check to see any error before compiling
cppcheck:$(SRC)
	cppcheck $(SRC)

# Clean unwanted files
clean:$(SRC)
	rm -f *.gcov *.gcda *.gch *.gcno

test:$(BUILD)
	gcc -I$(INC) -I$(SSRC) $(SRC) $(TEST_INC) -o $(PROJECT_NAME).$(EXEC) 
	./$(TEST_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build