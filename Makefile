all: bin/chess
	
bin/chess: obj/chess.o obj/libfigure.a
	gcc -Wall -Werror -o bin/chess obj/chess.o obj/pawn.o
obj/chess.o: src/chess.c
	gcc -Wall -Werror -c -o obj/chess.o src/chess.c
obj/libfigure.a: obj/pawn.o
	ar rcs obj/libfigure.a obj/pawn.o
obj/pawn.o: src/pawn.c
	gcc -Wall -Werror -c -o obj/pawn.o src/pawn.c
.PHONY : clean
clean:
	rm -rf obj/*.o obj/*.a bin/chess