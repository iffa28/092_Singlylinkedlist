#include <iostream>
#include <string.h>
using namespace std;

class Node 
{
public: 
	int noMhs;
	char nama[20];
	Node* next;  
};

class List
{
	Node* START;
public:
	List();
	void addNode(); 
	bool Search(int nim, Node** current, Node** previous);
	bool listEmpty();
	bool delNode(int element);
	void tranverse();
};

List::List()
{
	START = NULL;
}

void List::addNode() 
{
	int nim;
	char nm[20];
	cout << "\nMasukkan Nomor Mahasiswa: ";
	cin >> nim;
	cout << "\nMasukkan Nama: ";
	cin >> nm;

	Node* nodeBaru = new Node;
	nodeBaru->noMhs = nim;
	strcpy_s(nodeBaru->nama, nm);

	if (START == NULL || nim <= START->noMhs)
	{
		if ((START != NULL) && (nim == START->noMhs))
		{
			cout << "\nDuplikasi noMhs tidak diijinkan\n";
			return;
		}
	}
}