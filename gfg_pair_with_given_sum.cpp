vector<vector<int>> pairsum(Node* head, int target) {
	vector<vector<int>> res;
	vector<int> temp;

	Node* left = head;
	Node* right = head;

	while (right->next) right = right->next;

	while (first != second && second->next != first) {
		if (left->data + right->data == target) {
			temp.push_back(left->data);
			temp.push_back(right->data);
			res.push_back(temp);
			temp.clear();
			left = left->next;
			right = right->next;
		}
		else if (left->data + right->data > target) {
			right = right->next;
		}
		else left = left->next;
	}
}