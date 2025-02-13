#pragma once
#include "VectorIterator.h"

template <typename T>
class Vector
{
	T* items;
	int size;
	int capacity;

	void NewCapacity();
public:
	Vector() : items{ nullptr }, 
		size{ 0 }, 
		capacity{ 0 } {};

	Vector(int size)
		: items{ new T[size + size / 2] },
		size{ size },
		capacity{ size + size / 2} {};

	~Vector() { delete[] items; }

	void PushBack(T); // O(1)
	void PushFront(T); // O(N)
	void Insert(int, T); // O(N)

	T PopBack();
	T PopFront();
	T Remove(int);

	T Item(int);
	void Item(int, T);
	T& At(int);

	T& operator[](int);

	int Size();
	int Capacity();

	void Clear();

	VectorIterator<T> Iterator()
	{
		return VectorIterator<T>(this);
	}
};

#include "Vector.inl"
