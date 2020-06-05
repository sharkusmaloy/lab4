#include "queue.h"
using namespace std;

int main() {

	list1<int> obj;
	cout<<"vvodim v konec ocheredi"<<endl;
	 cout <<"\n"<< endl;

	obj.PushBack(12);
	obj.PushBack(22);
	obj.PushBack(-25);
	obj.PushBack(612);
	obj.Print();


	cout<<"vvodim v nachalo ocheredi"<<endl;
	 cout <<"\n"<< endl;

	obj.PushFront(32);
	obj.PushFront(-75);
	obj.PushFront(812);
	obj.Print();

	cout<<"ydalaem 1 perviy element i 2 poslednix"<<endl;

    obj.PopFront();
    obj.PopBack();
    obj.PopBack();

    cout <<"\n"<< endl;
    cout <<"    vivodim perviy element: "<< obj.TopFront()<< endl;
    cout <<"    vivodim last element: "<< obj.TopBack()<< endl;
    cout <<"\n"<< endl;


    obj.Print();
    cout <<"\n"<< endl;
    cout<<obj.Size()<<" - 4islo elements"<<endl;
    cout <<"\n"<< endl;

	obj.Clear();

	obj.Print();

	return 0;
}
