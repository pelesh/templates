#include <iostream>
#include "MatrixSparseCSR.hpp"
#include "CudaPolicy.hpp"
#include "SeqPolicy.hpp"


int main()
{
  MatrixSparseCSR<SeqPolicy> seqmat(2.0);
  seqmat.hiopSetMatrixZero(3);

  MatrixSparseCSR<CudaPolicy> cudamat(4);
  cudamat.hiopSetMatrixZero(3);
  
  return 0;
}

