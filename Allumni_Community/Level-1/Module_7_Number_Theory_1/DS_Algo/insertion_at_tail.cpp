#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    
    Node(int val)
    {
        this->val = val;
        this->next = next;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node* newNode = new Node(val);

    if(head== NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;

    while (tmp->next !=NULL)
    {
        tmp =  tmp->next;
    }
    tmp->next = newNode;
    
}

void print(Node *head)
{
    Node *tmp = head;

    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    int n;  cin>>n;
    for(int i=0; i<n;i++)
    {
        int x; cin>>x;
        insert_at_tail(head, x);
    }

    print(head);
}