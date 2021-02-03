/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function should rotate list counter-clockwise
// by k and return new head (if changed)

Node* rotate(Node* head, int k)
{
    Node* temp=head;
    while(temp->next) temp=temp->next;
    temp->next=head;
    Node* end;
    while(k--){
        end=head;
        head=head->next;
    }
    end->next=NULL;
    return head;
}
