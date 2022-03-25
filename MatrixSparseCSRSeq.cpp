/// Implementation source for sequential matrix.
/// This file contains only constructor and preprocessor directives
/// specific to this implementation.
#include <iostream>
#include "MatrixSparseCSR.hpp"
#include "SeqPolicy.hpp"


#define ID_STRING "Template using sequential policy ..."

template<class T>
MatrixSparseCSR<T>::MatrixSparseCSR(double a) : a_(a)
{
  std::cout << "\nMatrixSparseCSR constructor with sequential execution policy ... \n";
}

#include "MatrixSparseCSRImpl.hpp"
template MatrixSparseCSR<csr::SeqPolicy>::MatrixSparseCSR(double a);
