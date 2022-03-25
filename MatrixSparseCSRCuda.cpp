/// Implementation source for CUDA matrix.
/// This file contains only constructor and preprocessor directives
/// specific to this implementation.
#include <iostream>
#include "MatrixSparseCSR.hpp"
#include "CudaPolicy.hpp"

#define ID_STRING "Template using CUDA policy ..."

template<class T>
MatrixSparseCSR<T>::MatrixSparseCSR(double a) : a_(a)
{
  std::cout << "\nMatrixSparseCSR constructor with CUDA execution policy ... \n";
}

#include "MatrixSparseCSRImpl.hpp"
template MatrixSparseCSR<csr::CudaPolicy>::MatrixSparseCSR(double a);

