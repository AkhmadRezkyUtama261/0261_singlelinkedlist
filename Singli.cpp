#include <iostream>
#include <string.h>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
};

class SingleLinkedList
{
    Node *START;

    public:
    SingleLinkedList ()
    {
        START = NULL;
    }

    void addnode()
    {
int nim;
cout << "\nMasukkan Nomor Mahasiswa: ";
cin >> nim;

Node *nodeBaru = new Node;
nodeBaru->noMhs = nim;

    }
};