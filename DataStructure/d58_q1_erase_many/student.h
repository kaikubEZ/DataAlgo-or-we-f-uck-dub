#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  std::vector<int> m = pos;
  std::sort(m.begin(),m.end(),std::greater<int>());
  for(int i:m){
    erase(begin() + i);
  }
}

#endif
