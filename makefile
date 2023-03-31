CC = g++ -std=c++11

explore: explore.cpp commands.o
	${CC} -g -o explore explore.cpp commands.o

commands.o: commands.h commands.cpp
	${CC} -c commands.cpp

clean: 
	rm *.o 