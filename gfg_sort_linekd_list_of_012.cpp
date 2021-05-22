class Solution
{
public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {

        int count[3] = {0, 0, 0};
        Node* curr = head;
        while (curr) {
            count[curr->data]++;
            curr = curr->next;
        }
        curr = head;
        int i = 0;
        while (curr) {
            if (count[i] == 0) {
                i++;
            }
            else {
                curr->data = i;
                count[i]--;
                curr = curr->next;
            }
        }
        return head;
    }
};