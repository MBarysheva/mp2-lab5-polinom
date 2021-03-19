//tlist.h
#ifndef _tlist_h
#define _tlist_h
template <class T>
struct TLink {
	T val;
	TLink<T> *pNext;
};

template <class T>
class TList {
protected:
	TLink <T> *pFirst, *pLast, *pCurr, *pPrev, *pStop;
	int len; //lenght
	int pos;//where pCurr shows
public:

	//constructor
	TList() {
		pFirst = NULL;
		pLast = NULL;
		pCurr = NULL;
		pPrev = NULL;
		pStop = NULL;
		len = 0;
		pos = 0;
	}

	//destructor
	~TList() {
		TLink<T> *tmp = pFirst;
		while (pFirst != pStop) {
			pFirst = pFirst->pNext;
			delete tmp;
			tmp = pFirst;
		}
	}

	//insert at the beginning
	void InsFirst(const T& a) {
		TLink<T> *tmp;
		tmp = new TLink<T>;
		tmp->pNext = pFirst;
		tmp->val = a;
		pFirst = tmp;
		len++;
	}

	//insert at end
	void InsLast(const T& a) {
		if (pFirst == pStop)
			InsFirst(a);
		else {
			TLink<T> *p = pFirst;
			while (p->pNext != pStop)
				p = p->pNext;
			TLink<T> *tmp;
			tmp = new TLink<T>;
			tmp->val = a;
			tmp->pNext = pStop;
			p->pNext = tmp;
			pLast = tmp;
		}
	}

	//get a pointer pNext
	TLink<T>* GetNext() {
		return pCurr->pNext;
	}

	//delete first link
	void DelFirst() {
		if (pFirst == pStop)
			return;
		if (pCurr == pFirst)
			pCurr = pFirst->pNext;
		T res = pFirst->val;
		TLink<T> *tmp;
		tmp = pFirst;
		pFirst = pFirst->pNext;
		delete tmp;
		len--;
	}

	//insert to current poisition
	void InsCurr(const T& a) {
		if (pCurr == pFirst) {
			InsFirst(a);
			pCurr = pFirst;
		}
		else {
			TLink<T> *tmp = new TLink<T>;
			tmp->val = a;
			pPrev->pNext = tmp;
			tmp->pNext = pCurr;
			pCurr = tmp;
			len++;
		}
	}

	//delete current link
	void DelCurr() {
		if (pCurr == pStop)
			return;
		if (pCurr == pFirst)
			DelFirst();
		else {
			TLink<T> *tmp = pCurr;
			pPrev->pNext = pCurr->pNext;
			pCurr = pCurr->pNext;
			delete tmp;
			len--;
		}
	}

	//get current link
	T GetCurrEl() {
		return pCurr->val;
	}

	//set pCurr to the beginning
	void Reset() {
		pCurr = pFirst;
		pPrev = pStop;
		pos = 0;
	}

	//go to the next link
	void GoNext() {
		pPrev = pCurr;
		pCurr = pCurr->pNext;
		pos++;
	}

	//end check
	bool IsEnd() {
		return (pCurr == pStop);
	}

	//penultimate check
	bool IsNextEnd() {
		return (pCurr->pNext == pStop);
	}

	//add in order
	void InsOnOrder(const T& el) {
		if ((pFirst == pStop) || (el > pFirst->val))
			InsFirst(el);
		else
			if (pLast->val > el)
				InsLast(el);
			else
				for (Reset(); !IsEnd(); GoNext()) {
					if (el > pCurr->val) {
						InsCurr(el);
						break;
					}
				}
	}

	//delete the whole list
	void DelList() {
		for (Reset(); !IsEnd(); GoNext()) {
			DelCurr();
		}
		DelCurr();
	}
};
#endif
