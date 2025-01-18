#include "transposelist.h"

bool TransposeList::contains(int anEntry) {
    DListNode* current = header->next;

    while (current != header) {
        traverseCount++;
        if (current->item == anEntry) {
            // Every time an element is accessed, it is swapped with the previous node
            // assuming the current element is not the head or the first node
            if (current->prev != header) {
                DListNode* prevNode = current->prev;  // The node before current (2)

                current->prev = prevNode->prev; // ex: 3 <-- 1
                prevNode->next = current->next; //  ex:1 --> 2

                current->next->prev = prevNode; // dummy header prev is prevNode
                prevNode->prev = current; // prevNode prev

                current->next = prevNode; // ex: 1 <-- 2 // current next
                current->prev->next = current; // ex: 3 --> 1 // node before scurrent prev

            }
            return true;  // found the element, swap was done
        }

        current = current->next;
    }

    return false;
}

