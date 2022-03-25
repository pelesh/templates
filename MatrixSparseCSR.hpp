#include <iostream>
#include "MatrixSparse.hpp"


template <class T>
class MatrixSparseCSR : public MatrixSparse, T
{
public:
  MatrixSparseCSR(double a);
  virtual ~MatrixSparseCSR(){}

  virtual void hiopSetMatrixZero(int i) override;

private:
  double a_;
  int nnz_;
};
