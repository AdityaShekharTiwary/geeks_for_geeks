public:

Node* reverse(Node* &head) {
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;

    while (curr) {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

Node* addOne(Node* &head)
{
    reverse(head);

    int carry = 0;
    Node* temp = head;

    if (temp->data == 9) {
        temp->data = 0;
        carry = 1;
    }
    else {
        temp->data = temp->data + 1;
    }
    temp = temp->next;

    while (temp && carry == 1) {
        if (temp->data == 9 && carry == 1) {
            temp->data = 0;
            carry = 1;
        }
        else if (temp->data != 9 && carry == 1) {
            temp->data = temp->data + 1;
            carry = 0;
        }
        temp = temp->next;
    }
    reverse(head);

    if (carry == 1) {
        Node* t = new Node(1);
        t->next = head;
        head = t;
    }
    return head;
}