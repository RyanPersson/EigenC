#include <vector>
#include <iostream>
#include <string>

#include "io_functions.hpp"
#include "matrix.hpp"

int main() {
    
    Matrix test(2,3);

    test.insert(5,1,2);

    test.print_matrix();

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            test.insert(i*j,i,j);
        }
    }
    test.print_matrix();


    Matrix newM = add_matrices(test, test);
    newM.print_matrix();

    Matrix left(4,7);
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 7; j++) {
            left.insert(i*j,i,j);
        }
    }
    left.print_matrix();
    Matrix right(7,4);

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 4; j++) {
            right.insert(i*j + 5,i,j);
        }
    }
    right.print_matrix();

    Matrix mult = multiply(left, right);

    mult.print_matrix();

    return 0;
}