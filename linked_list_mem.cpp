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
Node *head,*mid,*tail,*sec;
string d;
string s = "abcsa";

for(int i =0;i<s.length();i++)
{
head = (Node*)malloc(sizeof(Node));
head->data = s[i];
    
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
     sec = mid;
     sec = sec->next;
     while(sec!=NULL)
         {
          if(sec->data == mid->data)
              {
              d = char(sec->data);
              break;
          }
         sec=sec->next;
        } 
                mid = mid->next;
}
cout << "First repeated character: " << d <<'\n';

}
