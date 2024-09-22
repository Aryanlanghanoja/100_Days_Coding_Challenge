/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head){
    Node* temp = head;
    int len = 0 ;
    
    while(temp != nullptr) {
        len++;
        temp = temp->next;
    }
    
    int node = len / 2;
    
    
    temp = head;
    int i = 0 ;
    
    while(i < node) {
        temp = temp->next;
        i++;
    }
    
    return temp->val;
}

