#  Spencer Yoder
#    Z1814808
#    CSCI 340-2
#
#    I certify that this is my own work and where appropriate an extension
#    of the starter code provided for the assignment.

.DEFAULT_GOAL := shuffle.exe

shuffle.o: shuffle.cc
	g++ -c shuffle.cc -Wall -std=c++11

shuffle.exe: shuffle.o
	g++ -o shuffle.exe shuffle.o -Wall -std=c++11

clean:
	rm *.o shuffle.exe
