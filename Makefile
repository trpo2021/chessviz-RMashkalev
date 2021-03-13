all: chess
	
chess: chess.o libfigure.a
	gcc -Wall -Werror -o chess chess.o pawn.o
chess.o: chess.c
	gcc -Wall -Werror -c -o chess.o chess.c
libfigure.a: pawn.o
	ar rcs libfigure.a pawn.o
pawn.o: pawn.c
	gcc -Wall -Werror -c -o pawn.o pawn.c
clean:
	rm *.o chess