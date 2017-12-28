#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;
  
public:
  	int maximumDifference;
	
	// constructor
	Difference(vector<int> a){
		elements = a;
	}
	
	// compute maximum difference method
	void computeDifference(){
		maximumDifference = 0;

		for(vector<int>::iterator p = elements.begin(); p != elements.end(); p++)
			for(vector<int>::iterator q = p; q != elements.end(); q++)
				if(abs(*p - *q) > maximumDifference)
					maximumDifference = abs(*p - *q);
	}	

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
