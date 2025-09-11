
#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main() {

	// linkedlist<int> mylist;
	// myListe.append(5);
	//		...
	//		...			example of what main supposed to do
	// what if we try to deleted a empty one,etc, do diferent test.
	//		...
	// myList.clear();

    LinkedList<int> myList;

    cout << "Test append:" << endl;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    cout << myList << endl;  

    cout << "Test getElement:" << endl;
    cout << "1 = " << myList.getElement(0) << endl << endl;

    cout << "Test replace:" << endl;
    myList.replace(0, 50);
    cout << myList << endl;  

    cout << "Test clear:" << endl;
    myList.clear();
    cout << myList << endl;  





	return 0;
}
