#pragma once
#include "Wrap.h"
using namespace std;
template <typename T>
class Stack
{
private:
	int size, pos;
	Wrap<T> *arr;
public:
	Stack(int _size);
	Stack(const Stack &other);
	Stack(Stack &&other);
	~Stack();

	void Push(T item);
	Wrap<T>* Pop(int _pos);
	Wrap<T>* Get(int _pos);
	int getSize();
	void printStack();
};