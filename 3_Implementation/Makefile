<<<<<<< HEAD
SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/calculate_power.c main.c
=======

SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/subtraction.c main.c

SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/factorial.c  main.c

>>>>>>> 00a9e214f932981b1dc156c1ad5ccfdaee31ec45

INC = -Iinc\
-Iunity\
-Itest



PROJECT_NAME = calc.out


$(PROJECT_NAME): $(SRC) 
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run :$(PROJECT_NAME)
		./${PROJECT_NAME}
		
doc: make -C documentation


clean: 
		rm -rf $(PROJECT_NAME) documentation/html