void shift(int k) {
 int go;
	if(k>=0) go=k%mSize;
	else go = (mSize-int(abs(k))%mSize)%mSize;
	
  node* p = mHeader->next;
  while(go--) p = p->next;
 
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	p->prev->next = mHeader;
	mHeader->prev = p->prev;
	p->prev = mHeader;
	mHeader->next = p;
	

}
