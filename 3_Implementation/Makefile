
SRC =  src/basic_calculation.c src/advanced_calculation.c src/addition.c src/calculate_power.c src/multiplication.c src/subtraction.c src/factorial.c src/square.c main.c 




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