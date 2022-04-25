ecole.out: eleve.o classe.o ecole.o main.c
	gcc eleve.o classe.o ecole.o main.c -o ecole.out

eleve.o: eleve.c eleve.h 
	gcc -c eleve.c
classe.o: classe.c classe.h eleve.o 
	gcc -c classe.c
ecole.o: ecole.c ecole.h classe.o
	gcc -c ecole.c


