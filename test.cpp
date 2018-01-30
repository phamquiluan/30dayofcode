#include <iostream>
#include <set>
using namespace std;

int main(){
	
	multiset<int> myList;

	myList.insert(2);
	myList.insert(1);
	myList.insert(3);
	myList.insert(5);

	for(auto& it : myList){
		cout << it << " ";
	}	

	cout << endl;
	return 0;
}
