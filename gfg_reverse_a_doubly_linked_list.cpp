Node* reverseDLL(Node * head)
{
    Node* curr = head;
    if (!curr || !curr->next) return head;
    while (curr->next) {
        curr = curr->next;
    }
    head = curr;
    curr->next = curr->prev;
    curr->prev = NULL;
    curr = curr->next;
    while (curr->prev) {
        Node* temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        curr = curr->next;
    }
    curr->prev = curr->next;
    curr->next = NULL;

    return head;
}
