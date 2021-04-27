chess: bin/chess
	
bin/chess: obj/chess.o obj/libfigure.a
	gcc -Wall -I -Werror -o bin/chess obj/chess.o obj/libfigure.a
obj/chess.o: src/chess.c
	gcc -Wall -Werror -c -o obj/chess.o src/chess.c
test/libfigure.a: obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/wincondition.o obj/knight.o obj/knightcheck.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o obj/turncheck.o obj/board_builder.o
	ar rcs test/libfigure.a obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/knight.o obj/knightcheck.o obj/wincondition.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o obj/turncheck.o obj/board_builder.o
obj/libfigure.a: obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/wincondition.o obj/knight.o obj/knightcheck.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o obj/turncheck.o obj/board_builder.o
	ar rcs obj/libfigure.a obj/pawn.o obj/pawnattack.o obj/pawnmove.o obj/rookcheck.o obj/rook.o obj/knight.o obj/knightcheck.o obj/wincondition.o obj/bishop.o obj/bishopcheck.o obj/queen.o obj/king.o obj/kingcheck.o obj/turncheck.o obj/board_builder.o
obj/pawn.o: src/pawn.c 
	gcc -Wall -I -Werror -c -o obj/pawn.o src/pawn.c
obj/pawnattack.o: src/pawnattack.c 
	gcc -Wall -I -Werror -c -o obj/pawnattack.o src/pawnattack.c
obj/pawnmove.o: src/pawnmove.c 
	gcc -Wall -I -Werror -c -o obj/pawnmove.o src/pawnmove.c
obj/rook.o: src/rook.c 
	gcc -Wall -I -Werror -c -o obj/rook.o src/rook.c
obj/rookcheck.o: src/rookcheck.c 
	gcc -Wall -I -Werror -c -o obj/rookcheck.o src/rookcheck.c
obj/knight.o: src/knight.c 
	gcc -Wall -I -Werror -c -o obj/knight.o src/knight.c
obj/knightcheck.o: src/knightcheck.c 
	gcc -Wall -I -Werror -c -o obj/knightcheck.o src/knightcheck.c
obj/bishop.o: src/bishop.c 
	gcc -Wall -I -Werror -c -o obj/bishop.o src/bishop.c
obj/bishopcheck.o: src/bishopcheck.c 
	gcc -Wall -I -Werror -c -o obj/bishopcheck.o src/bishopcheck.c
obj/king.o: src/king.c 
	gcc -Wall -I -Werror -c -o obj/king.o src/king.c
obj/kingcheck.o: src/kingcheck.c 
	gcc -Wall -I -Werror -c -o obj/kingcheck.o src/kingcheck.c
obj/queen.o: src/queen.c
	gcc -Wall -I -Werror -c -o obj/queen.o src/queen.c
obj/turncheck.o: src/turncheck.c
	gcc -Wall -I -Werror -c -o obj/turncheck.o src/turncheck.c
obj/wincondition.o: src/wincondition.c
	gcc -Wall -I -Werror -c -o obj/wincondition.o src/wincondition.c
obj/board_builder.o: src/board_builder.c
	gcc -Wall -I -Werror -c -o obj/board_builder.o src/board_builder.c

test: bin/test

bin/test: test/mytests.o test/testmain.o test/libfigure.a
	gcc -Wall -I -Werror -o bin/test.bin test/mytests.o test/testmain.o test/libfigure.a
test/testmain.o: test/main.c
	gcc -Wall -I -Werror -c -o test/testmain.o test/main.c
test/mytests.o: test/mytests.c
	gcc -Wall -I -Werror -c -o test/mytests.o test/mytests.c

.PHONY : clean
clean:
	rm -rf obj/*.o obj/*.a bin/chess