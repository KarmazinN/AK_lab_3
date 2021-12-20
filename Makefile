all: main.o calculator.a
	g++ main.o calculator.a -o phrasal_verb_get

main.o: main.cpp
	g++ -c main.cpp

calculator.a : calculator.o
	ar rvs calculator.a calculator.o

calculator.o: calculator.cpp
	g++ -c calculator.cpp

clean:
	rm -rf *.o calculator.a phrasal_verb_get