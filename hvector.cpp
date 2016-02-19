#include "stdafx.h"
#include <iostream>

#include "hvector.h"
template<class T>
hvector<T>::hvector()
{
	p = static_cast<T*>(malloc(sizeof(T) * size_limit));
	first = p;
	last = p;
	count = 0;
}
template <class T>
void hvector<T>::add(T toadd)
{

	*p = toadd;
	last = p;
	p++;
	count++;
	if (count > size_limit*0.75)
	{
		resize_hvector();
	}
}

template<class T>
void hvector<T>::resize_hvector()
{
	first = static_cast<T*>(realloc((void*)first, sizeof(T)*size_limit * 2));
	if (first == NULL)
	{
		cout << "oops" << endl;
	}
	size_limit *= 2;
	p = first + count;
	last = p - 1;
}
template<class T> T hvector<T>::pop()
{
	T tmp = *last;
	p = last;
	last--;
	return tmp;
	count--;
}

template<class T> T hvector<T>::operator[](int x)
{
	return *(first + x);
}
