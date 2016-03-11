#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};

int main()
{
Node *head,*mid,*tail;
string gem = "abcdda";
int p=0;
cin >> p;
for(int i =0;i<gem.length();i++)
{
head = (Node*)malloc(sizeof(Node));
head->data = gem[i];
if(tail==NULL)
{
tail = head;
mid = head;
}
tail->next=head;
tail = tail->next;
}
while(mid!=NULL)
{
if(mid->data=='a')
{
cout << char(mid->data) <<'\n';
}
mid = mid->next;
}
}
