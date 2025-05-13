#include<bits/stdc++.h>
using namespace std;

void inset_at_any_index(Node *&head, int index, int val)
{
    Node * tmp = head;
    Node *newNode = new Node(val);
    while((index-1)--)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

}



int main()
{
    Node *head = NULL;
    insert_at_any_index(head, index, val);
}