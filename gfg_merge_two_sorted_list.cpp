Node* sortedMerge(Node* head1, Node* head2)
{
    Node *head;
    if (head1->data > head2->data) {
        head = head2;
        head2 = head2->next;
    }
    else {
        head = head1;
        head1 = head1->next;
    }

    Node* temp = head;

    while (head1 && head2) {
        if (head1->data > head2->data) {
            temp->next = head2;
            head2 = head2->next;
        }
        else {
            temp->next = head1;
            head1 = head1->next;
        }
        temp = temp->next;
    }

    if (head1) temp->next = head1;
    else temp->next = head2;



    return head;


}