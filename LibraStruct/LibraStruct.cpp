#include "LibraStruct.h"

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), size(0) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    Node<T>* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

template <typename T>
void LinkedList<T>::insertFront(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head;
    head = newNode;
    size++;
}

template <typename T>
void LinkedList<T>::insertEnd(const T& value) {
    Node<T>* newNode = new Node<T>(value);

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    size++;
}

template <typename T>
void LinkedList<T>::remove(const T& value) {
    Node<T>* current = head;
    Node<T>* prev = nullptr;

    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        return;
    }

    if (prev == nullptr) {
        head = current->next;
    }
    else {
        prev->next = current->next;
    }

    delete current;
    size--;
}

template <typename T>
bool LinkedList<T>::contains(const T& value) const {
    Node<T>* current = head;

    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }

        current = current->next;
    }

    return false;
}

template <typename T>
int LinkedList<T>::getSize() const {
    return size;
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return size == 0;
}

template <typename T>
void LinkedList<T>::printList() const {
    Node<T>* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}


template <typename T>
void LinkedList<T>::reverse() {
    Node<T>* current = head;
    Node<T>* prev = nullptr;
    Node<T>* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

template <typename T>
void LinkedList<T>::sort() {
    if (size <= 1) {
        return;
    }

    bool swapped;
    Node<T>* current;
    Node<T>* last = nullptr;

    do {
        swapped = false;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                T temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;

                swapped = true;
            }

            current = current->next;
        }

        last = current;

    } while (swapped);
}

template <typename T>
T LinkedList<T>::getMiddle() const {
    Node<T>* slow = head;
    Node<T>* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return (slow != nullptr) ? slow->data : T();
}

template <typename T>
void LinkedList<T>::removeDuplicates() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* runner = current;
        while (runner->next != nullptr) {
            if (runner->next->data == current->data) {
                Node<T>* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
                size--;
            }
            else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

template class LinkedList<int>;
