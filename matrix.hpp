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
        std::vector<std::vector<T> > data;
        int height, width;
    public:
        Matrix(int height, int width);
        ~Matrix();
        void print_Matrix();
        T* at(int row, int col);
        int size() {return (this->width)*(this->height); };
        void add(T value, int row, int col);
        void get(int row, int col);
        bool check_size(int row, int col); //Figure out exception handling
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

/*Creates a new 2d vector Matrix*/
template <class T>
Matrix<T>::Matrix(int height, int width): height(height), width(width) {
    for(int i = 0; i < this->height; i++) {
        std::vector<T> row;
        for(int j = 0; j < this->width; j++) {
            row.push_back(T);
        }
        this->data.push_back(row);
    }
}

/*Destroys matrix*/
template <class T>
Matrix<T>::~Matrix() {
    /*Assume T class handles it's own destruction.*/
}

/*prints the Matrix*/
template <class T>
void Matrix<T>::print_Matrix(){

}

/*Returns T* at [row][col]*/
template <class T>
T* Matrix<T>::at(int row, int col) {
    this->check_size(row,col);
    return this->data[row][col];
}

/* sets the element at [row][col] */
template <class T>
void Matrix<T>::add(T value, int row, int col) {
    this->check_size(row,col);
    this->data[row][col] = value;
}

/* */
template <class T>
void Matrix<T>::() {

}




#endif