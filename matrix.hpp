/*******************************************************************************************************************************************************************************
 ** Program: matrix.cpp 
 ** Author: Ryan Persson
 ** Date Created: 11/16/2019
*******************************************************************************************************************************************************************************/
#ifndef _MATRIX_HPP
#define _MATRIX_HPP

#include <vector>
#include <iostream>
#include <string>
#include <iostream> //Only needed for print_matrix

class Matrix
{
private:
    std::vector<std::vector<int>> data;
    int height, width;

public:
    Matrix(int height=0, int width=0);
    ~Matrix();
    void print_matrix();
    std::string matrix_to_string();
    int at(int row, int col);
    int size() { return (this->width) * (this->height); };
    void add(int value, int row, int col);
    void get(int row, int col);
    //TODO
    bool check_size(int row, int col); //Figure out exception handling
                                       /* TODO 
        Matrix multiply(Matrix left, Matrix right);
        Matrix add(Matrix left, Matrix right);
        Matrix invert(Matrix input);
        int[] eigenvalues();
        float determinant();
        std::vector<int> row(int row);
        std::vector<int> col(int col);
        */
};

#endif