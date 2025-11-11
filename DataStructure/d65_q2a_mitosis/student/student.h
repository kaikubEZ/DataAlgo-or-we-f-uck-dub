#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <vector>

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
     std::vector<int> m;
     for(int i = 0; i < a;++i){
          m.push_back(top());
          pop();
     }
     for(int i = a; i <= b;++i){
          m.push_back(top());
          m.push_back(top());
          pop();
     }
     
     for(int i = m.size()-1; i>=0;--i){
          push(m[i]);
     }
}

#endif