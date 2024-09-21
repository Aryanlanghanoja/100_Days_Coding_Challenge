/*
Node is defined as:
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
      this->data = data;
      this->next = nullptr;
  }
}
*/
int solve(Node* head){
    int ans = 0 ;
    Node* prev = head;
    Node* curr = prev->next;
    Node* next = curr->next;
    
    while(next != nullptr) {
        bool iscritical = ((curr->data < prev->data) & (curr->data < next->data)) | ((curr->data > prev->data) & (curr->data > next->data)) ;
        
        ans += iscritical ;
        
        prev = prev->next;
        curr = curr->next;
        next = next->next;
    }
    
    return ans;
}
