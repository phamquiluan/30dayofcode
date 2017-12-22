#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	// local definition
	int 	n;
	string 	key;
   	long	value;
	map <string, long> 			myDictionary;

	// statements
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		cin >> key >> value;
		myDictionary[key] 	= value;
	}

	while(cin >> key){ // learning today, thank varUndefined for best comment
		if (myDictionary.find(key) != myDictionary.end())
			cout << key << "=" << myDictionary.find(key)->second << endl;
		else
			cout << "Not found\n";
	}
	return 0;
}

