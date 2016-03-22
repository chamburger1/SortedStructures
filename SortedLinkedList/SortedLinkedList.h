#ifndef __CS235_SORTED_LINKED_LIST_H_
#define __CS235_SORTED_LINKED_LIST_H_

#include <iostream>
#include <list>
#include <algorithm>

template<class T>
class SortedLinkedList{
public:
    SortedLinkedList() {}

    unsigned int size() { return linkedList.size(); }
    bool empty() { return linkedList.empty(); }
    void clear() { linkedList.clear(); }

    T& front() { return linkedList.front(); }
    T& back() { return linkedList.back(); }
    T& at(unsigned int pos) { auto it = linkedList.begin(); std::advance(it,pos); return *it; }

    void push_front(const T& data);
    void push_back(const T& data);
    T& pop_front() { T& data = back(); linkedList.pop_back(); return data; }
    T& pop_back() { T& data = back(); linkedList.pop_back(); return data; }
    
    T& remove(unsigned int pos) { T& data = at(pos); linkedList.erase(linkedList.begin()+pos); return data; }

    void insert(const T& data);

    unsigned int count(const T& data);
    void display();
    
private:
    std::list<T> linkedList;

};

#include "SortedLinkedList.cpp"

#endif