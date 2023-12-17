// Hari

// Hare and Tortoise (Fast and slow Ptr approach for finding mid)

void reorderList(ListNode* head) {
        // fast
        ios_base::sync_with_stdio(false);

        /**
        We want to traverse from both left and right sides of list so that we can reorder list. 
        1. Which means that we need to divide list into left and right sides. Use Fast & Slow Ptr
        to find midpoint -> reverse links on right side
        2. Traverse from left and right sides - keep changing links till Ptrs meet in middle
        3. Set middle element's next to NULL 
        */
        if (!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head->next;

        // Find middle
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow->next will contain right side of list 
        // Reverse right side
        ListNode* rightNode = slow->next;
        slow->next = nullptr; // Break the link between left and right sides

        ListNode* nextNode = nullptr;
        while(rightNode) {
            nextNode = rightNode->next;
            rightNode->next = slow;
            slow = rightNode;
            rightNode = nextNode;
        }

        // slow will be at last node on right
        // Merge 2 halves
        ListNode* left = head;
        ListNode* right = slow;

        ListNode* nextLeft = nullptr;
        ListNode* nextRight = nullptr;

        while (left && right) {
            if (left) {
                nextLeft = left->next;
                left->next = right;
                left = nextLeft;
            }

            if (right) {
                nextRight = right->next;
                right->next = left;
                right = nextRight;
            }
        }
    }
