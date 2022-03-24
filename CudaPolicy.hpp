class CudaPolicy
{
public:
    CudaPolicy() = default;
    ~CudaPolicy() = default;

    void setMatrixZero(double* vals, int nnz);
};

