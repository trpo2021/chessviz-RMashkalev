all: bin/chess
	
bin/chess: obj/chess.o obj/libfigure.a
	gcc -Wall -Werror -o bin/chess obj/chess.o obj/libfigure.a
obj/chess.o: obj/src/chess.c
	gcc -Wall -Werror -c -o obj/chess.o obj/src/chess.c
obj/libfigure.a: obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/wincondition.o obj/knight.o obj/knightcheck.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o
	ar rcs obj/libfigure.a obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/knight.o obj/knightcheck.o obj/wincondition.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o
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
obj/knight.o: obj/src/knight.c 
	gcc -Wall -Werror -c -o obj/knight.o obj/src/knight.c
obj/knightcheck.o: obj/src/knightcheck.c 
	gcc -Wall -Werror -c -o obj/knightcheck.o obj/src/knightcheck.c
obj/bishop.o: obj/src/bishop.c 
	gcc -Wall -Werror -c -o obj/bishop.o obj/src/bishop.c
obj/bishopcheck.o: obj/src/bishopcheck.c 
	gcc -Wall -Werror -c -o obj/bishopcheck.o obj/src/bishopcheck.c
obj/king.o: obj/src/king.c 
	gcc -Wall -Werror -c -o obj/king.o obj/src/king.c
obj/kingcheck.o: obj/src/kingcheck.c 
	gcc -Wall -Werror -c -o obj/kingcheck.o obj/src/kingcheck.c
obj/queen.o: obj/src/queen.c
	gcc -Wall -Werror -c -o obj/queen.o obj/src/queen.c
obj/wincondition.o: obj/src/wincondition.c
	gcc -Wall -Werror -c -o obj/wincondition.o obj/src/wincondition.c
.PHONY : clean
clean:
	rm -rf obj/*.o obj/*.a bin/chess