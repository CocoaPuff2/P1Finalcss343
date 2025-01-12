
#include "CDLinkedList.h"
// #include "mtflist.h"
// #include "transposelist.h"
#include <iostream>


int main() {
    // create instances
    CDLinkedList list;
    //MtfList list;
    //TransposeList list;

    // testing for add
    list.add(10);
    list.add(20);
    list.add(30);


    // test contains method
    std::cout << "List: contains 20? " << (list.contains(20) ? "Yes" : "No") << std::endl;

    // test retrieve method
    std::cout << "List element at index 1 is... " << list.retrieve(1) << std::endl;

    // test remove method
    std::cout << "Remove 20 from List... " << (list.remove(20) ? "Success" : "Failure") << std::endl;

    // test the getCurrentSize method
    std::cout << "List current size is..." << list.getCurrentSize() << std::endl;

    // test the resetTraverseCount method
    list.resetTraverseCount();

    // test getTraverseCount again after reset
    list.contains(10);

    std::cout << "List traverse count... " << list.getTraverseCount() << std::endl;

    return 0;

}
