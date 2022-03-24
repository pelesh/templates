

template<class T>
void Derived<T>::tstMethod(int i)
{
  std::cout << ID_STRING << "\n";
  T::setMatrixZero(&a_, nnz_);
}
