#include <vector>
#include <iostream>
#include <string>

#include "io_functions.hpp"
#include "matrix.hpp"
#include "identity_matrix.hpp"

int main() {


    Identity_Matrix i_5(5);
    i_5.print_matrix();

    Matrix new_5x3(5,3);
    new_5x3.fill(15);
    new_5x3.print_matrix();

    Matrix new_test_left = multiply(i_5, new_5x3);
    new_test_left.print_matrix();

    Matrix new_test_right = multiply(new_5x3, i_5);
    new_test_right.print_matrix();

    return 0;
}