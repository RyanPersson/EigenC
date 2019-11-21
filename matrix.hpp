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
#include <iostream> //Only needed for print_martix

template <typename T>
class Matrix
{
private:
    std::vector<std::vector<T>> data;
    int height, width;

public:
    Matrix(int height=0, int width=0);
    ~Matrix();
    void print_matrix();
    std::string matrix_to_string();
    T at(int row, int col);
    int size() { return (this->width) * (this->height); };
    void add(T value, int row, int col);
    void get(int row, int col);
    //TODO
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
Matrix<T>::Matrix(int height, int width) : height(height), width(width)
{
    for (int i = 0; i < this->height; i++)
    {
        std::vector<T> row;
        for (int j = 0; j < this->width; j++)
        {
            row.push_back(0);
        }
        this->data.push_back(row);
    }
}

/*Destroys matrix*/
template <class T>
Matrix<T>::~Matrix()
{
    /*Assume T class handles it's own destruction.*/
}

/* */
template <class T>
void Matrix<T>::print_matrix() 
{
    std::cout << this->matrix_to_string() << std::endl;
    return;
}

/*returns matrix as string*/
template <class T>
std::string Matrix<T>::matrix_to_string()
{
    std::string m_string = "";
    for (int i = 0; i < this->height; i++)
    {
        std::vector<T> row;
        m_string += "\n[";
        for (int j = 0; j < this->width; j++)
        {
            m_string += " ";
            m_string += std::to_string(this->data[i][j]);
            m_string += " ";
        }
        m_string += "]";
    }
    return m_string;
}

/*Returns T* at [row][col]*/
template <class T>
T Matrix<T>::at(int row, int col)
{
    if(this->check_size(row, col)){
        return this->data[row][col];
    }
    else
        std::cout << "\ntried to access out of bounds el." << std::endl;
    return NULL;
    
}

/* sets the element at [row][col] */
template <class T>
void Matrix<T>::add(T value, int row, int col)
{
    if(this->check_size(row, col)) {
        this->data[row][col] = value;
    }
    else 
        std::cout << "\nTried to access out of bounds el." << std::endl;
    return;
}
   
/*Checks if matrix size is correct*/
template <class T>
bool Matrix<T>::check_size(int row, int col) {
    if(row >= this->height || col >= this->width)
        return false;
    else
        return true;
}

// /* */
// template <class T>
// void Matrix<T>::()
// {
// }

#endif