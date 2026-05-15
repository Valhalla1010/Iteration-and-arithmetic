programmet:	funktion.cpp sortering.cpp sortering.h mergeSort.cpp mergeSort.h slutSort.cpp slutSort.h
	g++ -o programmet funktion.cpp sortering.cpp mergeSort.cpp slutSort.cpp
	
run:	programmet
	./programmet
	
clean:
	rm programmet		
