#pragma once

#include "MatrixSparse.hpp"

/// Class template for CSR matrix classes
/// Template parameter specifies execution policy
template <class T>
class MatrixSparseCSR : public MatrixSparse, T
{
public:
  MatrixSparseCSR(double a);
  virtual ~MatrixSparseCSR(){}

  virtual void hiopSetMatrixZero() override;

private:
  double a_;
  int nnz_;
};
