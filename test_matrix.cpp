#include <vector>
#include <iostream>
#include <string>

#include "io_functions.hpp"
#include "matrix.hpp"
#include "identity_matrix.hpp"

int main() {

    Identity_Matrix i_7x7(7); //generates a 7x7 identity matrix
    i_7x7.print_matrix();

    Matrix a_2x3(2,3); //New 2x3 matrix
    a_2x3.fill(5);
    a_2x3.print_matrix();

    Matrix b_3x7(3,7); //New 3x7 matrix
    b_3x7.fill(2);
    b_3x7.print_matrix();

    Matrix ab_2x7 = multiply(a_2x3, b_3x7);
    ab_2x7.print_matrix();

    multiply(ab_2x7,i_7x7).print_matrix();

    return 0;
}