#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if(m==0) return false;
  size_t Size = end() - begin();  
  size_t A = a -begin();
  size_t  B = b-begin();
  if (A >= Size || B >= Size || A + m > Size || B + m > Size || (A + m > B && B + m > A)) return false;

  for(size_t i = 0;i<m;++i){
    T temp = mData[A+i];
    mData[A+i] = mData[B+i];
    mData[B+i] = temp;
  }
  return true;
}

#endif
