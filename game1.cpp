#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	char h;
	Node *p,*d,*f,*prev,*forwd,*n;
	d = (Node*)malloc(sizeof(Node));
	f = d;
	n = d;
while(h != 'n')
	{
		cout << "y or n" << endl;
		cin >> h;
		if (h == 'y')
		{
			cout << "enter the data" << endl;
			cin >> d->data;
			p = (Node*)malloc(sizeof(Node));
		d->next = p;
		d = d->next;
		}
		else
		{
			cout << h;
						d->next = NULL;

		
		}
		

	}
while(f->next != NULL)
{
	if (f->data == 5)
	{
		//cout << prev->data << endl;
		forwd = f->next;
		prev->next = forwd;
	}
	//cout << f->data << endl;
		prev = f;

	f = f->next;


}
while(n->next != NULL)
{
	cout << n->data << endl;

		n = n->next;

}


}