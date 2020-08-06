/*******************************************************************************************************************************************************************************
 ** Program: identity_matrix.hpp 
 ** Author: Ryan Persson
 ** Date Created: 8/6/2020
*******************************************************************************************************************************************************************************/
#ifndef _IDENTITY_MATRIX_HPP
#define _IDENTITY_MATRIX_HPP

#include <vector>
#include <string>
#include <iostream> //only needed for print_matrix

#include "matrix.hpp"

class Identity_Matrix: public Matrix 
{
public:
    Identity_Matrix(int size=0) : Matrix(size, size) {
        this->fill(0);
        for(int i = 0; i < this->height; i++) {
            this->insert(1, i,i);
        }
    }
};

#endif