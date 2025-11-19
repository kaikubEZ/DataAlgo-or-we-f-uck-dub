#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    
    T* arr = new T[mSize];
    size_t oldSize = mSize;
    for(size_t i = 0;i<pos;++i){
        arr[i+1] = front();
        pop();
    }

    arr[0] = front();
    pop();

    for(int i = pos+1;i<oldSize;++i){
        arr[i] = front();
        pop();
    }

    delete[] mData;
    mData = arr;
    
    mFront = 0;
    
}

#endif
