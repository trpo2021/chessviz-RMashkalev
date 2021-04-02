all: bin/chess
	
bin/chess: obj/chess.o obj/libfigure.a
	gcc -Wall -Werror -o bin/chess obj/chess.o obj/libfigure.a
obj/chess.o: obj/src/chess.c
	gcc -Wall -Werror -c -o obj/chess.o obj/src/chess.c
obj/libfigure.a: obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/wincondition.o
	ar rcs obj/libfigure.a obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/wincondition.o
obj/pawn.o: obj/src/pawn.c 
	gcc -Wall -Werror -c -o obj/pawn.o obj/src/pawn.c
obj/pawnattack.o: obj/src/pawnattack.c 
	gcc -Wall -Werror -c -o obj/pawnattack.o obj/src/pawnattack.c
obj/pawnmove.o: obj/src/pawnmove.c 
	gcc -Wall -Werror -c -o obj/pawnmove.o obj/src/pawnmove.c
obj/rook.o: obj/src/rook.c 
	gcc -Wall -Werror -c -o obj/rook.o obj/src/rook.c
obj/rookcheck.o: obj/src/rookcheck.c 
	gcc -Wall -Werror -c -o obj/rookcheck.o obj/src/rookcheck.c
obj/wincondition.o: obj/src/wincondition.c
	gcc -Wall -Werror -c -o obj/wincondition.o obj/src/wincondition.c
.PHONY : clean
clean:
	rm -rf obj/*.o obj/*.a bin/chess