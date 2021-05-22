Node *copyList(Node *head) {

    Node* curr = head, *temp;


    while (curr) {
        temp = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;
    while (curr) {
        curr->next->arb = curr->arb ? curr->arb->next : curr->arb;
        curr = curr->next->next;
    }

    Node* original = head;
    Node* newhead = head->next;
    Node* copy = newhead;

    while (original && copy) {
        original->next = original->next->next;
        copy->next = copy->next ? copy->next->next : copy->next;
        original = original->next;
        copy = copy->next;
    }

    return newhead;

}