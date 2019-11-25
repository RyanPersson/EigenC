/*******************************************************************************************************************************************************************************
 ** Program: matrix.cpp 
 ** Author: Ryan Persson
 ** Date Created: 11/25/2019
*******************************************************************************************************************************************************************************/
#include <vector>
#include <iostream>
#include <string>
#include <iostream> //Only needed for print_matrix

#include "matrix.hpp"

/*Creates a new 2d vector Matrix*/
Matrix::Matrix(int height, int width) : height(height), width(width)
{
    for (int i = 0; i < this->height; i++)
    {
        std::vector<int> row;
        for (int j = 0; j < this->width; j++)
        {
            row.push_back(0);
        }
        this->data.push_back(row);
    }
}

/*Destroys matrix*/
Matrix::~Matrix()
{
    /*vector objects handle their own destruction*/
}

/* */
void Matrix::print_matrix() 
{
    std::cout << this->matrix_to_string() << std::endl;
    return;
}

/*returns matrix as string*/
std::string Matrix::matrix_to_string()
{
    std::string m_string = "";
    for (int i = 0; i < this->height; i++)
    {
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

/*Returns int at [row][col]*/
int Matrix::at(int row, int col)
{
    if(this->check_size(row, col)){
        return this->data[row][col];
    }
    else
        std::cout << "\ntried to access out of bounds el." << std::endl;
    return 0;
    
}

/* sets the element at [row][col] */
void Matrix::add(int value, int row, int col)
{
    if(this->check_size(row, col)) {
        this->data[row][col] = value;
    }
    else 
        std::cout << "\nTried to access out of bounds el." << std::endl;
    return;
}
   
/*Checks if matrix size is correct*/
bool Matrix::check_size(int row, int col) {
    if(row >= this->height || col >= this->width)
        return false;
    else
        return true;
}

// /* */
// void Matrix::()
// {
// }