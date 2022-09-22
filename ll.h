#include<iostream>
using namespace std;
#define item int
class linkedlist;
class Node
{
    int data;
    Node* next;
    public:
      Node();
      Node(item value);
      friend linkedlist;
};
class linkedlist
{
    Node* head;
    public:
      linkedlist();
      void append(item value);
      void display();
      friend Node;
};