#pragma once

template<typename T>
class gLinkedListS;

template<typename T>
class gNodeS
{
private:
	T data;
	gNodeS<T>* next;

	friend class gLinkedListS<T>;
};

