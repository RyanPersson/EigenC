#include <vector>
#include <iostream>
#include <string>

#include "template_functions.hpp"
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

    //add_matrices(test, zeroes);

    //sum.print_matrix();

    return 0;
}