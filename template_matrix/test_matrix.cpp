#include <vector>
#include <iostream>
#include <string>

#include "matrix.hpp"


int main() {
    
    Matrix<float> test(2,3);


    test.add(5,1,2);

    test.print_matrix();

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            test.add(i*j,i,j);
        }
    }
    test.print_matrix();

    



    return 0;
}