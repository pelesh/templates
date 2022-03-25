/// File containing implementation of standalone operators acting on
/// CSR matrices (non-member functions).
/// Uses function overloading instead of inheritance to create abstract
/// interface.
namespace csr {

void matrixMatrixMultiplySparse(const MatrixSparseCSR<csr::SeqPolicy>& m1,
                                const MatrixSparseCSR<csr::SeqPolicy>& m2,
                                MatrixSparseCSR<csr::SeqPolicy>& result)
{
    std::cout << "\nMultiplying two CSR matrices using sequential policy ...\n"; 
}

} // namespace csr