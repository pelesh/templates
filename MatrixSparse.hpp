#pragma once

/// Pure virtual matrix class
class MatrixSparse
{
public:
  MatrixSparse(){}
  virtual ~MatrixSparse(){}

  virtual void hiopSetMatrixZero(int i) = 0;
};

