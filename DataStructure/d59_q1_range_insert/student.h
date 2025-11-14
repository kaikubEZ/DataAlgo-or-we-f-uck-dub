#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int posi = position - begin();
  int range = last - first;
  int oldSize = mSize;
  ensureCapacity(oldSize + range);
  for(int i = oldSize;i>=posi;--i){
    mData[i+range] = mData[i];
  }
  mSize = oldSize + range;
  for(int i = 0; i<range;++i){
    mData[posi + i] = *(first++);
  }  
}

#endif
