
Node* Rotate(Node* head, int n) {
	if (n == 0) return head;
	Ndoe* curr = head;
	int cnt = 1;
	while (cnt < n && curr->next) {
		curr = curr->next;
		cnt++;
	}
	Node* Nth = curr;

	while (curr->next) {
		curr = curr->next;
	}

	curr->next = head;
	head->prev = curr;
	head = Nth->next;
	head->prev = NULL;
	Nth->next = NULL;


	return head;

}