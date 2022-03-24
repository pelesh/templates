

template<class T>
void MatrixSparseCSR<T>::hiopSetMatrixZero(int i)
{
  std::cout << ID_STRING << "\n";
  T::setMatrixZero(&a_, nnz_);
}
