class Solution
{
public:
    //Function to add two numbers represented by linked list.

    Node* reverseList(Node* head)
    {
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while (current != NULL)
        {
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    /* Adds contents of two linked lists and
    return the head node of resultant list */


    Node* addTwoLists(Node* first, Node* second)
    {
        first = reverseList(first);
        second = reverseList(second);

        int carry = 0, sum = 0;
        Node* start = NULL;
        Node* end = NULL;

        while (first != NULL || second != NULL)
        {
            int a = (first != NULL) ? first -> data : 0;
            int b = (second != NULL) ? second -> data : 0;

            sum = carry + (a + b);
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;

            if (start == NULL)
            {
                start = new Node(sum);
                end = start;
            }
            else
            {
                end -> next = new Node(sum);
                end = end -> next;
            }

            if (first != NULL)
                first = first -> next;
            if (second != NULL)
                second = second -> next;
        }
        if (carry > 0)
            end -> next = new Node(carry);

        start = reverseList(start);

        return start;
    }
};
