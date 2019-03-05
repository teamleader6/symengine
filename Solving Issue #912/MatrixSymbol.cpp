#include "MatrixSymbol.h"
MatrixSymbol::MatrixSymbol(char s,int n_rows,int n_cols)
{
    symbol = s;
    no_rows = n_rows;
    no_cols = n_cols;
}

void Matrix(MatrixSymbol M)
{
    std::string outString = "Matrix([\n";
    int i , j;
    for(i = 0;i < M.no_rows;i++)
    {
        outString += "[";
        for(j = 0;j < M.no_cols;j++)
        {
            outString += (std::string(1,M.symbol)+"["+std::to_string(i)+","+std::to_string(j)+"]");
            if(j != M.no_cols - 1)
            {
                outString += ",";
            }
        }
        outString += "]";
        if(i != M.no_rows - 1)
        {
            outString += ",\n";
        }
    }
    outString += "])";
    std::cout << outString <<"\n";
}


