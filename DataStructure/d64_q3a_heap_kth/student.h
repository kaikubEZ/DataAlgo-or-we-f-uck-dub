#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  priority_queue<T,Comp> pq(mLess);
  for(int i = 0; i<7 && i < mSize; ++i){
    pq.push(mData[i]);
  }
  for(int i = 0; i<k-1;++i){
    pq.pop();
  }
  return pq.top();

}
#endif
