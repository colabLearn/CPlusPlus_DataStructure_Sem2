#pragma once
template<typename T>
class Newarray;



template<typename T>
class arrNode
{	
private:
	unsigned int index;
	T* data;
	arrNode<T>* next;
	friend class Newarray<T>;

};

