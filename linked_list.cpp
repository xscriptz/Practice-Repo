#include <iostream>
using namespace std;
struct Node
{
 int data;
 struct Node *next;
};

int main()
{
 Node *p,*q,*x;
 p = new Node;
 q = new Node;
 x = new Node;
 p->data = 10;
 p->next = q;
 q->data = 20;
 q->next = x;
 x->data = 30;
 x->next = NULL;
 Node *m;
 m = p;
  cout<<m->data<<'\n';

 while(m->next != NULL)
 {
   m = m->next;
   cout<<m->data<<'\n';
 
 }
}
