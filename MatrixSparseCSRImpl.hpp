// Contains repetitive HiOp stuff, such as size checks, extracting
// data pointers, etc., before the call to bare bones compute kernels.
// All kernels are implemented here.
template<class T>
void MatrixSparseCSR<T>::hiopSetMatrixZero()
{
  std::cout << ID_STRING << "\n";
  T::setMatrixZero(&a_, nnz_);
}
