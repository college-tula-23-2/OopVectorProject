#pragma once
#include "Vector.h"

template <typename T>
class Vector;

template <typename T>
class VectorIterator
{
	Vector<T>* vector;
	int index;
public:
	VectorIterator(Vector<T>* vector)
		: vector{ vector }, index{ 0 } {
	}

	void Reset();
	void Next();
	bool IsEnd();
	T Current();
	VectorIterator<T> operator++();
	VectorIterator<T> operator++(int);

};

template<typename T>
void VectorIterator<T>::Reset()
{
	index = 0;
}

template<typename T>
void VectorIterator<T>::Next()
{
	if (index <= vector->Size() - 1)
		index++;
}

template<typename T>
inline bool VectorIterator<T>::IsEnd()
{
	return index >= vector->Size();
}

template<typename T>
T VectorIterator<T>::Current()
{
	return vector->At(index);
}

template<typename T>
inline VectorIterator<T> VectorIterator<T>::operator++()
{
	Next();
	return *this;
}

template<typename T>
inline VectorIterator<T> VectorIterator<T>::operator++(int)
{
	auto it = *this;
	Next();
	return it;
}




