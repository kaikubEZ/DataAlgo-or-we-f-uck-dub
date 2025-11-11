#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include <queue>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  T a = mData[(mFront + pos) % mCap];
  for (int i = pos+1; i < mSize; i++) {
    mData[(mFront + i - 1 + mCap) % mCap] = mData[(mFront + i + mCap) % mCap];
  }
  // int cnt = 0;
  // for(int i = (mFront + pos + 1) % mCap; ;++i ) {
    // mData[(i - 1 + mCap) % mCap] = mData[i];
    // cnt++;
    // if (cnt == mSize - pos) break;
  // }
  mData[(mFront + mSize - 1) % mCap] = a; 
}

#endif
