#  Spencer Yoder
.DEFAULT_GOAL := shuffle.exe

shuffle.o: shuffle.cc
	g++ -c shuffle.cc -Wall -std=c++11

shuffle.exe: shuffle.o
	g++ -o shuffle.exe shuffle.o -Wall -std=c++11

clean:
	rm *.o shuffle.exe
