#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

	//local definitions
	vector< vector<int> > a(6,vector<int>(6));
	int sum, maxsum;

	// statements
	sum = 0;

	// read input
	for(int arr_i = 0;arr_i < 6;arr_i++){
		for(int arr_j = 0;arr_j < 6;arr_j++){
			cin >> a[arr_i][arr_j];
		}
	}

	// handle
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			sum = a[i][j] 		+ a[i][j + 1] 		+ a[i][j + 2]
				+ a[i + 1][j + 1]
				+ a[i + 2][j] 	+ a[i + 2][j + 1]	+ a[i + 2][j + 2];
			if(i == 0 && j == 0)
				maxsum = sum;
			else if(sum > maxsum)
				maxsum = sum;
			sum = 0;
		}
	}

	cout << maxsum << endl;
	return 0;
}

