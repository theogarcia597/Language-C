pizzeria.out: date.o ingredient.o pizza.o pizzeria.o main.c
	gcc date.o ingredient.o pizza.o pizzeria.o main.c -o pizzeria.out
date.o: date.c date.h
	gcc -c date.c
ingredient.o: ingredient.c ingredient.h date.o
	gcc -c ingredient.c
pizza.o: pizza.c pizza.h ingredient.o 
	gcc -c pizza.c
pizzeria.o: pizzeria.c pizzeria.h pizza.o
	gcc -c pizzeria.c







