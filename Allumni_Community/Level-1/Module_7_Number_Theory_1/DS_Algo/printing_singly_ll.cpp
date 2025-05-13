#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node * next;

        Node(int val)
        {
            this->val = val;
            this->next = next;
        }
};

int main()
{
    Node *head = new Node(55);
    Node * a = new Node(66);
    Node* b = new Node(77);
    Node* c = new Node(77);
    
    head->next = a;
    a->next = b;
    b->next = c;


    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }

    return 0;
    
}

