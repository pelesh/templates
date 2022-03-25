namespace csr {

class CudaPolicy
{
public:
    CudaPolicy() = default;
    ~CudaPolicy() = default;

    void setMatrixZero(double* vals, int nnz)
    {
        std::cout << "Raw kernel: setting zeros using CUDA ...\n";
    }
};

} // namespace csr
