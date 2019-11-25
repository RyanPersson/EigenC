CC=g++ -std=c++11 -g

all: test_matrix

matrix.o: matrix.cpp matrix.hpp
	$(CC) -c matrix.cpp -o matrix.o

test_matrix: test_matrix.cpp matrix.o
	$(CC) test_matrix.cpp matrix.o -o test_matrix

clean:
	$ rm -f matrix.o test_matrix