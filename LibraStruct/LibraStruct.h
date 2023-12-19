#ifndef LIBRA_STRUCT_H
#define LIBRA_STRUCT_H

#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList();

    ~LinkedList();

    void insertFront(const T& value);

    void insertEnd(const T& value);

    void remove(const T& value);

    bool contains(const T& value) const;

    int getSize() const;

    bool isEmpty() const;

    void printList() const;

    void reverse();

    void sort();

    T getMiddle() const;

    void removeDuplicates();
};

#endif
