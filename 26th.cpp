#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Date{
	int day;
	int month;
	int year;
};

int main() {
	Date aDate, eDate;	
	cin >> aDate.day >> aDate.month >> aDate.year;
	cin >> eDate.day >> eDate.month >> eDate.year;
	
	int lateDay = aDate.day - 	eDate.day,
		lateMon = aDate.month -	eDate.month,
		lateYea = aDate.year -	eDate.year;

	int fine;
	// case 1: same month, same year
	if((lateMon <= 0 && lateYea <= 0) || lateYea < 0){
		if(lateYea < 0 || lateMon < 0 || lateDay <= 0)
			fine = 0;
		else
			fine = 15 * lateDay;
	}
	// case 2: diff month, same	year
	else if(lateYea <= 0){
		fine = 500 * lateMon;
	}		
	// case 3: diff year	
	else{
		fine = 10000;	
	}

	cout << fine << endl;

    return 0;
}


