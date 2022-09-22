#include"ll.h"
Node::Node()
{
    this->data=0;
    this->next=NULL;
}
Node::Node(item value)
{
    this->data=value;
    this->next=NULL;
}
linkedlist::linkedlist()
{
    this->head=NULL;
}
void linkedlist::append(item value)
{
    Node* temp= new Node(value);
    if(this->head == NULL)
    {
        head=temp;
        return;
    }
    Node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next=temp;
}
void linkedlist::display()
{
    Node* current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}