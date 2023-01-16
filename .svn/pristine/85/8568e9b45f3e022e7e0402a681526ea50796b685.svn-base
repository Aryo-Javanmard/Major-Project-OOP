
CC = g++
CFLAGS = -Wall -g

project: main.o character.o player.o enemy.o grid.o battle.o potion.o 
	$(CC) $(CFLAGS) -o project main.o character.o player.o enemy.o grid.o battle.o potion.o 
main.o: main.cpp character.o player.o enemy.o grid.o battle.o potion.o
	$(CC) $(CFLAGS) -c main.cpp

player_test: player_test.cpp player.o
	$(CC) $(CFLAGS) player_test.cpp player.o -o player_test

enemy_test: enemy_test.cpp enemy.o
	$(CC) $(CFLAGS) enemy_test.cpp enemy.o -o enemy_test
potion_test: potion_test.cpp potion.o
	$(CC) $(CFLAGS) potion_test.cpp potion.o -o potion_test
 
character.o: character.h character.cpp 

player.o: player.h player.cpp

enemy.o: enemy.h enemy.cpp

grid.o: grid.h grid.cpp  

battle.o: battle.h battle.cpp

potion.o: potion.h potion.cpp




clean:
	rm -f *.o project 