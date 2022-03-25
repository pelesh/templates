namespace csr {

/// Sequential execution policy for CSR matrix
class SeqPolicy
{
public:
    SeqPolicy() = default;
    ~SeqPolicy() = default;

    void setMatrixZero(double* vals, int nnz)
    {
        std::cout << "Raw kernel: setting zeros sequentially ...\n";
    }
};

} //namespace csr
