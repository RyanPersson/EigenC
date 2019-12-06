/*******************************************************************************************************************************************************************************
 ** Program: matrix.hpp 
 ** Author: Ryan Persson
 ** Date Created: 11/16/2019
*******************************************************************************************************************************************************************************/
#ifndef _MATRIX_HPP
#define _MATRIX_HPP

#include <vector>
#include <iostream>
#include <string>
#include <iostream> //only needed for print_matrix

class Matrix
{
private:
    std::vector<std::vector<int>> data;
    int height, width;

public:
    Matrix(int height=0, int width=0);
    ~Matrix();
    int get_height() { return this->height; };
    int get_width() { return this->width; };
    void print_matrix();
    std::string matrix_to_string();
    int at(int row, int col);
    int size() { return (this->width) * (this->height); };
    void insert(int value, int row, int col);
    bool check_size(int row, int col); //Figure out exception handling
   
    
        /* TODO 
        
        int[] eigenvalues();
        float determinant();
        std::vector<int> row(int row);
        std::vector<int> col(int col);
        */
};

/*Non member functions*/

//Default arg of Matrix right is set to zero so that function can be called with option 3 to check if a single matrix left is square. 
bool check_dimensions(int option, Matrix left, Matrix right=0);
Matrix multiply(Matrix left, Matrix right);    
Matrix add_matrices(Matrix left, Matrix right);
Matrix invert(Matrix input);
float determinant(Matrix input);


#endif