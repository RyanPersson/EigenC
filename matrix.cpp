/*******************************************************************************************************************************************************************************
 ** Program: matrix.cpp 
 ** Author: Ryan Persson
 ** Date Created: 11/25/2019
*******************************************************************************************************************************************************************************/
#include <vector>
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

/*prints a matrix */
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
void Matrix::insert(int value, int row, int col)
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

/*TODO*/
/*Finds the determinant of a matrix*/
// float determinant(Matrix input) {

// }

/*TODO*/
// /*Inverts a matrix*/
// Matrix invert(Matrix input) {
//     if(!check_dimensions(3, input)) {
//         std::cout << "The matrix is not square and cannot be inverted." << std::endl;
//         return;
//     }


//     std::cout << "Worked";
// }

/*TODO break this function up into three options.*/
/*Checks dimensions are suitable for operation*/
bool check_dimensions(int option, Matrix left, Matrix right) { //choose an int option based on what you are trying to do with the matrix.
    switch(option) {
        case 1: //multiply
            if(left.get_width()==right.get_height()) 
                return true;
            else
                return false;
            break;
        case 2: //add
            if(left.get_width()==right.get_width() 
            && left.get_height()==right.get_height()) 
                return true;
            else
                return false;
            break;
        case 3: //is square
            if(left.get_width()==left.get_height()) 
                return true;
            else
                return false;
            break;
        default: //No option specified
            std::cout << "No option specified." << std::endl;
            return false;
    }
}

/*Multiplies two matrices together */
Matrix multiply(Matrix left, Matrix right) {
    if(check_dimensions(1, left, right)) {
        int left_height = left.get_height();
        int left_width = left.get_width();
        int right_height = right.get_height();
        int right_width = right.get_width();
        Matrix new_matrix(left_height, right_width);
        for(int i = 0; i < left_height; i++) {
            for(int j = 0; j < right_width; j++) {
                for(int k = 0; k < left_width; k++) {
                    int new_num = left.at(i,k) * right.at(k,j);
                    new_matrix.insert(new_num,i,j);
                }

            }
        }
        return new_matrix;
    }
    else //If matrix indices don't match up.
    {
        std::cout << "Mismatchted sizes" << std::endl;
        return 0;
    }
}

/*Adds two matrices together*/
Matrix add_matrices(Matrix left, Matrix right) {
    if(check_dimensions(2,left,right)) {
        Matrix new_matrix(left.get_height(), left.get_width());
        int height = new_matrix.get_height();
        int width = new_matrix.get_width();
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                int toAdd = left.at(i,j) + right.at(i,j);
                new_matrix.insert(toAdd,i,j);
            }
        }
        return new_matrix;
    }
    else
      {
        std::cout << "Mismatchted sizes" << std::endl;
        return 0;
    }
}





// /* */
// void Matrix::()
// {
// }