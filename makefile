pa3: main.o Account.o Money.o
	g++ -o pa3 main.o Account.o Money.o

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp 

clean:
	rm pa3 *.o