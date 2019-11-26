/****************************************************************************************************************************************************************************** 
 ** Program FileName: complex_number.hpp
 ** Author: Ryan Persson
 ** Date Created: 11/25/2019
 ** Description: Interface for complex_number struct.
******************************************************************************************************************************************************************************/
#ifndef __COMPLEX_NUMBER_HPP
#define __COMPLEX_NUMBER_HPP
#include <cmath>

/*Allows us to keep number as int UNTILL nescessary in order to avoid floating point errors.*/
struct real_num { 
    int whole; //int stored until an operation is performed that outputs a float. 
    float real;
    bool is_whole; //false until float is needed
};

/*Allows us to keep imaginary number as 2 ints untill float is nescessary to avoid floating point errors.*/
struct complex_num { 
    real_num real; //real part of a complex number.
    real_num imaginary; //imaginary part of a complex number.
};

#endif
