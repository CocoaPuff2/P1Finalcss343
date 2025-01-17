
#include "CDLinkedList.h"
//#include "mtflist.h"
//#include "transposelist.h"
#include <iostream>
using namespace std;



int main() {
    //MtfList testList;  // uncomment to test Mtflist
    //TransposeList testList; // uncomment to test transposelist
     CDLinkedList testList; // uncomment to test CDLinkedList

    // Reset all traverse count first
    testList.resetTraverseCount();
    cout<<"Reset traverse count: traverseCount="<<testList.getTraverseCount()<<endl;
    std::cout << "Making a list..." << std::endl;


    // traverseCount (tc) = 0
    testList.add(1); // add() --> contains() tc = 0 because current == header, only one node n
    testList.add(7); // add() --> contains() tc = 1 because we traverse one node, 7 (list is now 7, 1)
    testList.add(8); // add() --> contains() tc = 3 because we traverse two node, 7 and 1 (list is now 8, 7, 1)
    testList.add(5); // add() --> contains() tc = 6 because we traverse three nodes, 8, 7 and 1 (list is now 5, 8, 7, 1)
    testList.add(1); // add() --> contains() tc = 10 because we traverse four nodes, 5, 8, 7 and 1 (list is now 5, 8, 7, 1)



    cout<<"Traverse count after adding elements to list: traverseCount="<<testList.getTraverseCount()<<endl;

    cout << "#members 1->7->8->5->1: size=" << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
    cout<<"traverse count="<<testList.getTraverseCount()<<endl;
    for (int i = 1; i < testList.getCurrentSize()+1; i++)
        cout << testList.retrieve(i) << endl;


    cout << endl;
    testList.remove(8);

    cout << "#After remove 8, : size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
    cout<<"traverse count="<<testList.getTraverseCount()<<endl;
    for (int i = 1; i < testList.getCurrentSize()+1; i++)
        cout << testList.retrieve(i) << endl;

    cout << endl;
    cout<<"testList.contains(8)="<<testList.contains(8)<<endl;

    cout << "# members, after access 8: size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
    for (int i = 1; i < testList.getCurrentSize()+1; i++)
        cout << testList.retrieve(i) << endl;

    cout<<"testList.contains(7)="<<testList.contains(7)<<endl;

    cout << "# members, after access 7: size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;
    for (int i = 1; i < testList.getCurrentSize()+1; i++)
        cout << testList.retrieve(i) << endl;


    return 0;

    /*

    MtfList list;  // uncomment to test Mtflist
    // TransposeList list; // uncomment to test transposelist
    //CDLinkedList list; // uncomment to test CDLinkedList

    // Test isEmpty() method
    std::cout << "Is list initially empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    // Test add() method and getCurrentSize()
    std::cout << "Adding elements to the list..." << std::endl;
    list.add(10);
    list.add(20);
    list.add(30);
    std::cout << "List size after adding 10, 20, 30: " << list.getCurrentSize() << std::endl;

    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;


    // test contains() method
    std::cout << "Does list contains 20? " << (list.contains(20) ? "Yes" : "No") << std::endl;
    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    std::cout << "Does list contains 40? " << (list.contains(40) ? "Yes" : "No") << std::endl;

    // test retrieve() method
    try {
        std::cout << "List element at index 0 is: " << list.retrieve(1) << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    try {
        std::cout << "List element at index 1 is: " << list.retrieve(2) << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    // test remove() method
    std::cout << "Removing 20 from list... " << (list.remove(20) ? "Success" : "Failure") << std::endl;
    std::cout << "List size after removing 20: " << list.getCurrentSize() << std::endl;

    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    // test getCurrentSize() method
    std::cout << "List current size is: " << list.getCurrentSize() << std::endl;

    // test resetTraverseCount() and getTraverseCount() methods
    list.resetTraverseCount();
    std::cout << "Traverse count after reset: " << list.getTraverseCount() << std::endl;

    // test getTraverseCount()
    list.contains(10);
    std::cout << "Traverse count after accessing 10: " << list.getTraverseCount() << std::endl;
    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    list.remove(30);
    std::cout << "Traverse count after removing 30: " << list.getTraverseCount() << std::endl;
    for (int i = 0; i < list.getCurrentSize(); i++)
        cout << list.retrieve(i) << endl;

    // tset clear() method
    list.clear();
    std::cout << "List cleared. Is the list empty now? " << (list.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "List size after clear: " << list.getCurrentSize() << std::endl;

    return 0;
    */

 }




/*


  //MtfList testList;  // uncomment to test Mtflist
  // TransposeList testList; // uncomment to test transposelist
  CDLinkedList testList; // uncomment to test CDLinkedList

  // Reset all traverse count first
  testList.resetTraverseCount();
  cout<<"Reset traverse count: traverseCount="<<testList.getTraverseCount()<<endl;
  std::cout << "Making a list..." << std::endl;


  // traverseCount (tc) = 0
  testList.add(1); // add() --> contains() tc = 0 because current == header, only one node n
  testList.add(7); // add() --> contains() tc = 1 because we traverse one node, 7 (list is now 7, 1)
  testList.add(8); // add() --> contains() tc = 3 because we traverse two node, 7 and 1 (list is now 8, 7, 1)
  testList.add(5); // add() --> contains() tc = 6 because we traverse three nodes, 8, 7 and 1 (list is now 5, 8, 7, 1)
  testList.add(1); // add() --> contains() tc = 10 because we traverse four nodes, 5, 8, 7 and 1 (list is now 5, 8, 7, 1)



  cout<<"Traverse count after adding elements to list: traverseCount="<<testList.getTraverseCount()<<endl;

  cout << "#members 1->7->8->5->1: size=" << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
  cout<<"traverse count="<<testList.getTraverseCount()<<endl;
  for (int i = 0; i < testList.getCurrentSize(); i++)
      cout << testList.retrieve(i) << endl;


  cout << endl;
  testList.remove(8);

  cout << "#After remove 8, : size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
  cout<<"traverse count="<<testList.getTraverseCount()<<endl;
  for (int i = 0; i < testList.getCurrentSize(); i++)
      cout << testList.retrieve(i) << endl;

  cout << endl;
  cout<<"testList.contains(8)="<<testList.contains(8)<<endl;

  cout << "# members, after access 8: size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;;
  for (int i = 0; i < testList.getCurrentSize(); i++)
      cout << testList.retrieve(i) << endl;

  cout<<"testList.contains(7)="<<testList.contains(7)<<endl;

  cout << "# members, after access 7: size= " << testList.getCurrentSize() << ", traverseCount="<<testList.getTraverseCount()<<endl;
  for (int i = 0; i < testList.getCurrentSize(); i++)
      cout << testList.retrieve(i) << endl;


  return 0;
   */



