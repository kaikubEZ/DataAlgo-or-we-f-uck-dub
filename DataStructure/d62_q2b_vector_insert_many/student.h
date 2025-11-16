#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  sort(data.begin(),data.end());
  // int dataSize = data.end()-data.begin();
  ensureCapacity(mSize + data.size());

  for(int i =(int)data.size() - 1; i>=0;--i){
    insert(begin() +data[i].first,data[i].second);
  }
}

#endif
