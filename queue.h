#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
#include <windows.h>

using namespace std;

template<typename T>
class Node {
    public:
	int data;
	Node* Next;
	Node* Prev;
};
template<typename T>
class list1
{
private:
	Node<T> * Head;
	Node<T> * Tail;
	int count;
public:
	list1() : Head(NULL), Tail(NULL), count(0){}
	list1(const list1& copy_list) {
		Head = Tail = NULL;
		count = 0;
		Node<T> * temp = copy_list.Head;
		while (temp != 0){
			PushBack(temp->data);
			temp = temp->Next;
		}
	}

	void PushBack(int param_data) {
		Node<T> * temp = new Node<T> ;
		temp->Next = NULL;
		temp->data = param_data;
		temp->Prev = Tail;

		if (Tail != 0)
			Tail->Next = temp;

		if (count == 0)
			Head = Tail = temp;
		else
			Tail = temp;

		count++;
	}
	void PushFront(int param_data) {
		Node<T> * temp = new Node<T> ;
		temp->Prev = NULL;
		temp->data = param_data;
		temp->Next = Head;

		if (Head != 0)
			Head->Prev = temp;

		if (count == 0)
			Head = Tail = temp;
		else
			Head = temp;

		count++;
	}
	int PopBack()
{
    Node<T> * temp = Tail ;
    Tail=Tail->Prev;
    if(Tail)
    Tail->Next=NULL;
    delete temp;
    count--;
}

	int PopFront() {
	    Node<T> * temp = new Node<T> ;
        temp = Head->Next;
        Head->data = 0;
			Head = temp;
			temp = 0;
			delete temp;
			count--;
	}

    int TopBack()
    {
    return Tail->data;
	}
	int TopFront()
	{
		return Head->data;
	}


	void Clear() {
		while (count != 0) {
			Node<T> * temp = new Node<T> ;
			temp = Head->Next;
			Head->data = NULL;
			Head = temp;
			temp = NULL;
			delete temp;
			count--;
		}
	}

	void Print() {
		if (count != 0) {
			Node<T> * temp = Head;
			cout << "[";
			while (temp->Next != 0) {
				cout << temp->data << ", ";
				temp = temp->Next;
			}
			cout << temp->data << "]\n";
			return;
		} else {
			cout << "List is empty!" << "\n";
		}
		return;
	}

	bool isEmpty() {
		if (count == 0)
			return true;
		return false;
	}

	~list1(){
		while (count != 0) {
			Node<T> * temp = new Node<T> ;
			temp = Head->Next;
			Head->data = NULL;
			Head = temp;
			temp = NULL;
			delete temp;
			count--;
		}
	}
	int Size()
	{
	    return count;
	}
};

#endif // QUEUE_H_INCLUDED
