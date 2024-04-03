#pragma once
template<typename T>
class gLinkedListD;

template <typename T>
class gNodeD
{
	T data;
	gNodeD<T>* next;
	gNodeD<T>* prev;

	friend class gLinkedListD<T>;
};

