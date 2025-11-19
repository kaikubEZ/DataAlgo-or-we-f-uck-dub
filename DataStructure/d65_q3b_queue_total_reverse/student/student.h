#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse(){
  mFront = aux == 0 ? (mFront + mSize - 1) % mCap : (mFront + mCap - mSize + 1) % mCap;
  aux = aux == 0 ? 1 : 0;
}

template <typename T>
const T &CP::queue<T>::front() const{
  return mData[mFront];
}

template <typename T>
const T &CP::queue<T>::back() const{
  return mData[((aux == 0) ? (mFront + mSize - 1) : (mFront - mSize + 1 + mCap)) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T &element){
  ensureCapacity(mSize + 1);
  mData[((aux == 0) ? (mFront + mSize) : (mFront - mSize + mCap)) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop(){
  mFront = ((aux == 0) ? (mFront + 1) : (mFront - 1 + mCap)) % mCap;
  mSize--;
}

#endif