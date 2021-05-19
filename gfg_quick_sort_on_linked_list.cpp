void swap(node* i, node* j) {
    if (i == j)
        return;
    int t   = i->data;
    i->data = j->data;
    j->data = t;
}
node* partition(node* l, node* h, node** previ) {
    node* i = NULL;
    node* j = l;
    while (j != h) {
        if (j->data <= h->data) {
            *previ = i;
            i = (i == NULL) ? l : i->next;
            swap(i, j);
        }
        j = j->next;
    }
    *previ = i;
    i = (i == NULL) ? l : i->next;
    swap(i, h);
    return i;
}
node* Last(node* head) {
    if (head == NULL)
        return head;
    while (head->next != NULL)
        head = head->next;
    return head;

}
void quickSortUtil(node* l, node* h) {
    //note::  h->next != l
    if (l != h && l != NULL && h != NULL && h->next != l) {

        node* previ = NULL;
        node*    pi = partition(l, h, &previ);

        quickSortUtil(l, previ);
        quickSortUtil(pi->next, h);
    }
}
void quickSort(struct node **headRef) {

    node* h = Last(*headRef);
    quickSortUtil(*headRef, h);
}