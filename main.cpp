#include <iostream>
#include "MatrixSparseCSR.hpp"
#include "CudaPolicy.hpp"
#include "SeqPolicy.hpp"
#include "MatrixSparseCSRSeqOperators.hpp"

int main()
{
  MatrixSparseCSR<csr::SeqPolicy> seqmat1(2.0);
  seqmat1.hiopSetMatrixZero(3);

  MatrixSparseCSR<csr::CudaPolicy> cudamat(4);
  cudamat.hiopSetMatrixZero(3);

  MatrixSparseCSR<csr::SeqPolicy> seqmat2(2.0);
  MatrixSparseCSR<csr::SeqPolicy> seqmat3(2.0);

  csr::matrixMatrixMultiplySparse(seqmat1, seqmat2, seqmat3);

  // Compiler error
  // csr::matrixMatrixMultiplySparse(seqmat1, cudamat, seqmat3);
  
  return 0;
}

