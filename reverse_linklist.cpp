#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

//-------------------reverse funtion with iterative method---------------

ListNode* reverseList(ListNode* head) {
        ListNode *head1=NULL, *temp=head, *ptr=NULL;
        while(temp!=NULL)
        {
            ptr=temp;
            temp=temp->next;
            ptr->next=head1;
            head1=ptr;
        }
        return head1;
    }

//-----------------input handles here-------------------------------------

int main()
{
    ListNode *head = new ListNode;
    ListNode *ptr = head; // for traversing
    head->val = 1;
    head->next = NULL;

    for (int i = 2; i <= 10; i++)
    {
        ListNode *temp = new ListNode();
        temp->val = i;
        temp->next = NULL;
        ptr->next = temp;
        ptr = temp;
    }
    
    head = reverseList(head);
    return 0;
}