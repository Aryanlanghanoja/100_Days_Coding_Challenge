/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // your code here

        Node* curr = head;

        while(curr->next != nullptr) {

            if(curr->data == curr->next->data) {
                curr->next = curr->next->next;
            }

            else {
                curr = curr->next;
            }
        }

        return head;
    }
};
