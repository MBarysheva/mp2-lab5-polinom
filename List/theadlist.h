
#ifndef _theadlist_h
#define _theadlist_h
#include "tlist.h"
#include <iostream>
using namespace std;
template <class T>
class THeadList : public TList<T> {
protected:
	TLink<T> *pHead;
public:

	//constructor
	THeadList() : TList<T>() {
		pHead = new TLink<T>;
		TList<T>::pStop = pHead;
		pHead->pNext = pHead;
		TList<T>::pFirst = pHead;
	}

	//destructor
	~THeadList() {
		TList<T> ::DelList();
		delete pHead;
	}

	//add first link
	void InsFirst(T el) {
		TList::InsFirst(el);
		pHead->pNext = TList<T>::pFirst;
	}

	// add last link
	void InsLast(T el) {
		//ÒÓÒÒÒ ÓÁÈÐÀÅÌ TList::!!!!!!!!
		InsLast(el);
	}

	//add current link
	void InsCurr(T el) {
		//ÒÓÒÒÒ ÓÁÈÐÀÅÌ TList::!!!!!!!!
		InsCurr(el);
	}

	// delete first link
	void DelFirst() {
		TList::DelFirst();
		pHead->pNext = TList<T>::pFirst;
	}
};
#endif