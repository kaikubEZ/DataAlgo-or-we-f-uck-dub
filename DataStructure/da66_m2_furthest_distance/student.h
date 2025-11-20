#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, int &aux){
	if(n==NULL) return 0;
     
     int left = my_recur(n->left,aux);
     int right = my_recur(n->right,aux);

     aux = std::max(aux,left+right);

     return std::max(left , right) +1 ;
	
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::furthest_distance() {
	if(mRoot == NULL) return -1;
     int temp =0;
     my_recur(mRoot,temp);
     return temp;
}

#endif
