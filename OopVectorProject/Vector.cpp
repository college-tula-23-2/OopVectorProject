//#include "Vector.h"
//
//template <typename T>
//void Vector<T>::NewCapacity()
//{
//	capacity = size + ((size) ? size / 2 : 4);
//	int* itemsNew = new T[capacity];
//
//	for (int i{}; i < size; i++)
//		itemsNew[i] = items[i];
//
//	delete[] items;
//	items = itemsNew;
//}
//
//template <typename T>
//void Vector<T>::PushBack(T value)
//{
//	if (size >= capacity)
//		NewCapacity();
//
//	items[size++] = value;
//}
//
//template <typename T>
//void Vector<T>::PushFront(T value)
//{
//	Insert(0, value);
//}
//
//template <typename T>
//void Vector<T>::Insert(int index, T value)
//{
//	if (size >= capacity)
//		NewCapacity();
//
//	for (int i{ size - 1 }; i >= index; i--)
//		items[i + 1] = items[i];
//	items[index] = value;
//	size++;
//}
//
//template <typename T>
//T Vector<T>::PopBack()
//{
//	T value = items[--size];
//
//	if (capacity >= size * 2)
//		NewCapacity();
//
//	return value;
//}
//
//template <typename T>
//T Vector<T>::PopFront()
//{
//	return Remove(0);
//}
//
//template <typename T>
//T Vector<T>::Remove(int index)
//{
//	T value = items[index];
//
//	for (int i{ index + 1 }; i < size; i++)
//		items[i - 1] = items[i];
//	size--;
//
//	if (capacity >= size * 2)
//		NewCapacity();
//
//	return value;
//}
//
//template <typename T>
//T Vector<T>::Item(int index)
//{
//	if (index >= 0 && index < size)
//		return items[index];
//	else
//		throw -1;
//}
//
//template <typename T>
//void Vector<T>::Item(int index, T value)
//{
//	if (index >= 0 && index < size)
//		items[index] = value;
//	else
//		throw -1;
//}
//
//template <typename T>
//T& Vector<T>::At(int index) 
//{ 
//	if (index >= 0 && index < size)
//		return items[index];
//	else
//		throw -1;
//}
//
//template <typename T>
//T& Vector<T>::operator[](int index)
//{
//	return items[index];
//}
//
//template <typename T>
//int Vector<T>::Size() { return size; }
//
//template <typename T>
//int Vector<T>::Capacity(){	return capacity; }
//
//template <typename T>
//void Vector<T>::Clear()
//{
//	delete[] items;
//	size = 0;
//	capacity = 4;
//}
