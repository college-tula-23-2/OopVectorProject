#pragma once
class Vector
{
	int* items;
	int size;
	int capacity;

	void NewCapacity();
public:
	Vector() : items{ nullptr }, 
		size{ 0 }, 
		capacity{ 0 } {};

	Vector(int size)
		: items{ new int[size + size / 2] },
		size{ size },
		capacity{ size + size / 2} {};

	~Vector() { delete[] items; }

	void PushBack(int value); // O(1)
	void PushFront(int value); // O(N)
	void Insert(int index, int value); // O(N)

	int PopBack();
	int PopFront();
	int Remove(int index);

	int Item(int index);
	void Item(int index, int value);
	int& At(int index);

	int& operator[](int index);

	int Size();
	int Capacity();
};

