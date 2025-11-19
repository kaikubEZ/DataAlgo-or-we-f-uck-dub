#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include<algorithm>

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos){
  int newSize = mSize - pos.size();
  T* arr = new T[newSize];
  int j = 0, k = 0;
  sort(pos.begin(),pos.end());
  for(size_t i = 0;i<mSize;++i){
    if(i!=pos[j]){
      arr[k] = mData[(mFront + i)%mCap];
      k++;
    } else j++;
  }

  delete[] mData;
  mData = arr;
  mSize = newSize;
  mCap = mSize;
  mFront = 0;
}

#endif