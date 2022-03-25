// Contains repetitive HiOp stuff, such as size checks,
// before the call to bare bones compute kernels.

template<class T>
void MatrixSparseCSR<T>::hiopSetMatrixZero(int i)
{
  std::cout << ID_STRING << "\n";
  T::setMatrixZero(&a_, nnz_);
}
