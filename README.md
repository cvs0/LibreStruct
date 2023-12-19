# LibraStruct

`LibraStruct` is a C++ library that provides a generic linked list implementation with various functionality for managing and manipulating linked lists.

## Features

- **Generic Linked List**: Implement a linked list that can store elements of any data type.
- **Insertion and Removal**: Easily insert elements at the front or end of the list and remove elements based on their values.
- **Search and Check**: Check if a particular value is present in the list, get the size of the list, and check if the list is empty.
- **Reverse Operation**: Reverse the order of elements in the linked list.
- **Sorting**: Sort the elements in the linked list.
- **Get Middle Element**: Retrieve the middle element of the linked list.
- **Remove Duplicates**: Remove duplicate elements from the linked list.

## Usage

### Include the Library

```cpp
#include "LibraStruct.h"
```

### Create a Linked List

```cpp
LinkedList<int> myList; // Example for an integer list
```

### Insert Elements

```cpp
myList.insertFront(42); // Insert at the front
myList.insertEnd(100);  // Insert at the end
```

### Remove Elements

```cpp
myList.remove(42); // Remove element with value 42
```

### Reverse the List

```cpp
myList.reverse();
```

### Sort the List

```cpp
myList.sort();
```

### Get Middle Element

```cpp
int middleElement = myList.getMiddle();
```

### Remove Duplicates

```cpp
myList.removeDuplicates();
```

### Print the List

```cpp
myList.printList();
```

## Build and Run

To compile and run the provided example code, you can use a C++ compiler such as `g++`:

```bash
g++ LibraStruct.cpp -o LibraStruct
./LibraStruct
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.