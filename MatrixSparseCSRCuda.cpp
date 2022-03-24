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
template MatrixSparseCSR<CudaPolicy>::MatrixSparseCSR(double a);

