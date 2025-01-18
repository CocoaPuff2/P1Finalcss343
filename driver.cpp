#include "CDLinkedList.h"
//#include "mtflist.h"
//#include "transposelist.h"
#include <iostream>
using namespace std;


int main() {

    CDLinkedList list; // uncomment to test CDLinkedList
    //MtfList list;  // uncomment to test Mtflist
    //TransposeList list; // uncomment to test transposelist

    // Test isEmpty() method
    std::cout << "Is list initially empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    // Test add() method and getCurrentSize()
    std::cout << "Adding elements to the list..." << std::endl;
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    std::cout << "List size after adding 10, 20, 30, 40: " << list.getCurrentSize() << std::endl;

    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;


    // test contains() method
    std::cout << "Does list contains 20? " << (list.contains(20) ? "Yes" : "No") << std::endl;
    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;


    std::cout << "Does list contains 50? " << (list.contains(50) ? "Yes" : "No") << std::endl;

    // test retrieve() method
    try {
        std::cout << "List element at index 1 is: " << list.retrieve(1) << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;


    try {
        std::cout << "List element at index 2 is: " << list.retrieve(2) << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;


    // test remove() method
    std::cout << "Removing 20 from list... " << (list.remove(20) ? "Success" : "Failure") << std::endl;
    std::cout << "List size after removing 20: " << list.getCurrentSize() << std::endl;

    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;

    // test getCurrentSize() method
    std::cout << "List current size is: " << list.getCurrentSize() << std::endl;

    // test resetTraverseCount() and getTraverseCount() methods
    list.resetTraverseCount();
    std::cout << "Traverse count after reset: " << list.getTraverseCount() << std::endl;

    // test getTraverseCount()
    list.contains(10);
    std::cout << "Traverse count after accessing 10: " << list.getTraverseCount() << std::endl;
    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;

    list.remove(30);
    std::cout << "Traverse count after removing 30: " << list.getTraverseCount() << std::endl;
    for (int i = 1; i < list.getCurrentSize() + 1; i++)
        cout << list.retrieve(i) << endl;


    // tset clear() method
    list.clear();
    std::cout << "List cleared. Is the list empty now? " << (list.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "List size after clear: " << list.getCurrentSize() << std::endl;

    return 0;
}