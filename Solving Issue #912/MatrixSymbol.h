#pragma once
#include <string>
#include <iostream>

class MatrixSymbol
{
    char symbol; //matrix symbol
    int no_rows; //number of rows of a matrix 
    int no_cols; //number of columns
    public:
    MatrixSymbol(char s,int n_rows,int n_cols);//constructor
    friend void Matrix(MatrixSymbol M);
};