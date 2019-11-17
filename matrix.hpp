/*******************************************************************************************************************************************************************************
 ** Program: matrix.cpp 
 ** Author: Ryan Persson
 ** Date Created: 11/16/2019
*******************************************************************************************************************************************************************************/
#ifndef _MATRIX_HPP
#define _MATRIX_HPP

#include <vector>
#include <iostream>


template<typename T>
class Matrix {
    private: 
        std::vector<std::vector<T> > matrix;
        int width, height;
    public:
        Matrix(int width, int height);
        ~Matrix();
        void print_Matrix();
        T at(int row, int col);
        int size() {return (this->width)*(this->height); };
        void add(T value, int row, int col);
        void get(int row, int col);
        /* TODO 
        Matrix<T> multiply(Matrix<T> left, Matrix<T> right);
        Matrix<T> add(Matrix<T> left, Matrix<T> right);
        Matrix<T> invert(Matrix<T> input);
        T[] eigenvalues();
        T[] determinant();
        std::vector<T> row(int row);
        std::vector<T> col(int col);
        */
};

#endif