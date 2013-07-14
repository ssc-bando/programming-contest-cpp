
CC      = gcc
CXX     = g++
OBJS    = main.o fizzbuzz.o
CCFLAGS = -std=c++11 -O2 -Werror -Wall

fizzbuzz.out: $(OBJS)
	$(CXX) -o $@ $(OBJS)

.c.o:
	$(CC) $(CCFLAGS) -c $<

.cpp.o:
	$(CXX) $(CCFLAGS) -c $<

run:
	./fizzbuzz.out

calc:
	./fizzbuzz.out 1

clean:
	rm fizzbuzz.out
	rm *.o
