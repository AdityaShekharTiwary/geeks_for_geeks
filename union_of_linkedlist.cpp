struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    map<int, int> hash;
    Node* temp = head1;
    while (temp) {
        hash[temp->data]++;
        temp = temp->next;
    }
    temp = head2;
    while (temp) {
        hash[temp->data]++;
        temp = temp->next;
    }
    // for(auto it:hash) cout<<it.first<<" "<<it.second<<endl;

    Node* head;
    Node* prev;
    for (auto i = hash.begin(); i != hash.end(); i++) {
        if (i == hash.begin()) {
            head = new Node(i->first);
            prev = head;
        }
        else {
            Node* newnode = new Node(i->first);
            prev->next = newnode;
            prev = newnode;
        }

    }
    return head;
}
