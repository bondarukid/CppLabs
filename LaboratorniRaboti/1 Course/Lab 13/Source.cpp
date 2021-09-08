#include <iostream>

using namespace std;

struct Node
{
	int Num;
	Node *Next, *Prev;

	Node* Create(Node* head, int x);
	void Add(Node* head, Node* tail, Node* ptrLast);
	void Search(Node* head);
	void RemoveHead(Node* head, Node* tail, Node* ptrLast);
	void RemoveH(Node* head, Node* tail, Node* ptrLast);
	void Count(Node* head);
};

Node* Create(Node* head, int x)
{
	Node* element;
	element = (struct Node*)malloc(
		sizeof(struct Node));
	element->Next = head;
	element->Num = x;
	return element;
}

void Add(Node* head, Node* tail, Node* ptrLast)
{
	int num = 0;
	cout << "Enter a number - ";
	cin >> num;
	Node* ptr = new Node;
	ptr->Num = num;
	ptr->Next = NULL;
	tail = ptr;

	if (head == NULL)
	{
		head = ptr;
		ptr->Prev = NULL;
	}
	ptr->Prev = ptrLast;
	ptrLast->Next = ptr;
	ptrLast = ptr;
}

void Search(Node* head)
{
	Node* ptr = NULL;
	int key = 1;

	if (head == NULL)
	{
		cout << "Structure empty!" << endl;
	}

	cout << "Enter number for search - ";
	cin >> key;
	ptr = head;

	while (1)
	{
		if (key == ptr->Num)
		{
			cout << "Element found!" << endl;
			break;
		}
		if (ptr->Next == NULL)
		{
			cout << "Element not found!" << endl;
			break;
		}
		ptr = ptr->Next;
	}
}

void Count(Node* head)
{
	Node* ptr = NULL;
	int z = 1;
	if (head == NULL)
	{
		cout << "\t!!! ÑÏÈÑÎÊ ÏÓÑÒ !!!\n\n";
		system("PAUSE");
		system("CLS");
	}
	ptr = head;
	while (1)
	{
		if (ptr->Next == 0)
			break;
		ptr = ptr->Next;
		z++;
	}
	cout << "\t!!! Â ñïèñêå - " << z << " ýëåìåíòîâ!!!\n\n";
}

void RemoveHead(Node* head, Node* tail, Node* ptrLast)
{
	Node* ptrDelete = NULL;

	if (head == NULL)
	{
		cout << "Structure empty!" << endl;
	}

	if (head->Next == NULL)
	{
		head = NULL;
		tail = NULL;
		delete head;
	}

	ptrDelete = head;
	head = ptrDelete->Next;
	head->Prev = NULL;

	delete ptrDelete;
}

void RemoveH(Node* head, Node* tail, Node* ptrLast)
{
	Node* ptrDelete = NULL;

	if (tail == NULL)
	{
		cout << "Structure empty!" << endl;
	}

	if (tail->Prev == NULL)
	{
		head = NULL;
		tail = NULL;
		delete tail;
	}

	ptrDelete = tail;
	tail = ptrDelete->Prev;
	tail->Next = NULL;
	ptrLast = tail;

	delete ptrDelete;
}

void list(struct Node* p);

void list(struct Node* p) {
	while (p != NULL) {
		printf("%d-->", p->Num);
		p = p->Next;
	}
	printf("\n");
}

int main()
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* ptrLast = NULL;

	int i, n;

	scanf_s("%d", &n);
	for (i = 0; i <= n; i += 5) {
		head->Create(head,i);
		cout << head->Num;
	}
	printf("\n");
	list(head);

	system("pause");
	return 0;
}