all : main.o ArrayList/ArrayList.o ArrayStack/ArrayStack.o
	g++ main.o ArrayList/ArrayList.o ArrayStack/ArrayStack.o -o ArrayStack.

main.o : main.cpp
	g++ -c main.cpp -o main.o

ArrayList/ArrayList.o : ArrayList/ArrayList.cpp
	g++ -c ArrayList/ArrayList.cpp -o ArrayList/ArrayList.o

ArrayStack/ArrayStack.o : ArrayStack/ArrayStack.cpp
	g++ -c ArrayStack/ArrayStack.cpp -o ArrayStack/ArrayStack.o

clean :
	rm -f *.o ArrayStack.
