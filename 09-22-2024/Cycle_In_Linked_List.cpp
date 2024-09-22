/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    Node* detectCycle(Node* head)
    {
        if(head == head->next) {
            return head;
        }
        
        unordered_set<Node*> Set;
        
        while(head != NULL) {
            if(Set.find(head) == Set.end()) {
                Set.insert(head);
            }
            
            else {
                return head;
            }
            
            head = head->next;
        }
        
        return NULL;
    }
};


