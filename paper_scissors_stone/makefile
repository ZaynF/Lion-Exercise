all: game

game: Player.o main.cpp
	g++ -o game Player.o main.cpp
	
Player.o: Player.cpp
	g++ -c -o Player.o Player.cpp
	
clean:
	rm *.o game
