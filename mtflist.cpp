
#include "mtflist.h"
#include "CDLinkedList.h"

bool MtfList::contains(int anEntry) {
    DListNode* current = header->next;
    while (current != header) {
        traverseCount++;
        if (current->item == anEntry) { // move element to front

            // if it's not already the first node
            if (current->prev != header) {
                // Remove the node from the current pos
                current->prev->next = current->next; // prev node next --> next node (after current)
                current->next->prev = current->prev; // next node prev --> prev node (skip current)

                // now insert the current node!
                current->next = header->next; // current node next --> first actual node
                header->next->prev = current; // first node prev --> current node

                header->next = current; // dummy head next --> current
                current->prev = header; // current's prev --> dummy head
            }

            return true;
        }

        current = current->next;
    }
    return false;
}
