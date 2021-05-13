int getNthFromLast(Node *head, int n)
{
	Node* slow = head;
	Node* fast = head;

	for (int i = 1; i <= n - 1; i++) {
		fast = fast->next;
		if (!fast) return -1;
	}

	while (fast->next) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;
}