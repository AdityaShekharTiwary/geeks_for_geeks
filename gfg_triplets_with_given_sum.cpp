int CountPairs(Node* first, Node* second, int val) {
	int cnt = 0;

	while (first && second && first != second && second->next != first) {

		if (first->data + second->data == val) {
			cnt++;
			first = first->next;
			last = last->prev;
		}
		else if (first->data + second->data > val) last = last->prev;
		else first = first->next;
	}
	return cnt;
}



int CountTriplets(Node* head, int target) {
	int count = 0;
	Node* curr = head;
	Node* first = curr->next;
	Node* last = head;

	while (last->next) last = last->next;

	for (curr = head; curr != NULL; curr = curr->next) {
		first = curr->next;
		count += CountPairs(first, last, target - curr->data);
	}
	return count;
}