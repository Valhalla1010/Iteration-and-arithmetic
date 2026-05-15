test12	:	test12.o
	g++ -o test test12.o
test12.o	:	test12.cpp
	g++ -c test12.cpp

