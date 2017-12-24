// without any optimization, stupid code, because I have exam tomorrow.
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
#include <unordered_map>

using namespace std;


int main(){
	
	// local definitions
	int n, consecutive, max;

	// statements
	max 		= 0;
	consecutive = 0;

	cin >> n;

	while(n >= 0){
		if(n % 2 == 1)
			consecutive++;
		else{
			if(consecutive > max)
				max = consecutive;
			consecutive = 0;
		}
		if(n == 0)
			break;
		n /= 2;
	}
   	
	cout << max << endl;

	return 0;
}

