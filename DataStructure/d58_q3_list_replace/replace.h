void replace(const T& x, list<T>& y) {
  auto it = begin();
  while (true) {
  while( it != end() &&*it!=x) it++;
    if(it==end()) break;
  for(T k : y){
    insert(it,k);
  }

  it = erase(it);

  
}
}
