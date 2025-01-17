#include "transposelist.h"

bool TransposeList::contains(int anEntry) {
    DListNode* current = header->next;

    while (current != header) {
        if (current->item == anEntry) {
            // Every time an element is accessed, it is swapped with the previous node
            // assuming the current element is not the head or the first node
            if (current->prev != header) {
                DListNode* prevNode = current->prev;  // The node before current (2)

                current->prev = prevNode->prev; // 3 <-- 1
                prevNode->next = current->next; //  1 --> 2

                current->next->prev = prevNode; // dummy header prev is prevNode
                prevNode->prev = current; // prevNode prev

                current->next = prevNode; // 1 <-- 2 // current next
                current->prev->next = current; // 3 --> 1 // node before scurrent prev



                /*
                // Step 1: Update current's previous node to be prevNode's previous node
                current->prev = prevNode->prev;

                // Step 2: Update prevNode's previous node to point to current (if it's not the header)
                if (prevNode->prev != nullptr && prevNode->prev != header) {
                    prevNode->prev->next = current;
                }

                // Step 3: Update prevNode's next to be current's next node
                prevNode->next = current->next;

                // Step 4: Update current's next node's previous pointer to prevNode (if it's not the header)
                if (current->next != header && current->next != nullptr) {
                    current->next->prev = prevNode;
                }

                // Step 5: Set current's next pointer to prevNode
                current->next = prevNode;

                // Step 6: Update the header to point to the new first node if necessary
                if (header->next == prevNode) {
                    header->next = current;
                }
                 */
            }
            return true;  // Found the element, swap was done
        }
        traverseCount++;
        current = current->next;
    }

    return false;  // Element not found
}

