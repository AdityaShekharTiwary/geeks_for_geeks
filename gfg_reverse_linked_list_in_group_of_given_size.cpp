class Solution
{
public:
    struct node *reverse (struct node *head, int k)
    {
        node* curr = head;
        node* prev = NULL;
        node* next = NULL;

        int cnt = 0;
        while (curr && cnt < k) {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            cnt++;
        }

        if (next) head->next = reverse(next, k);

        return prev;
    }
};