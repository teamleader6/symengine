#include <iostream>
#include "MatrixSymbol.h"
int main()
{
    MatrixSymbol X = MatrixSymbol('X', 3, 3);
    MatrixSymbol Y = MatrixSymbol('Y', 3, 3);
    Matrix(X);
    return 0;
}