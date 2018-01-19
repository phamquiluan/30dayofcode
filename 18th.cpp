#include <iostream>

using namespace std;

class Solution {
public:
	char stack[300];
	char queue[300];
	
	int sizeStack, sizeQueue;

	Solution(){ sizeStack = 0; sizeQueue = 0; }
	
	void pushCharacter(char ch){
		stack[sizeStack] = ch;
		sizeStack++;
	}
	void enqueueCharacter(char ch){
		queue[sizeQueue] = ch;
		sizeQueue++;
	}
	char popCharacter(){
		sizeStack--;
		return stack[sizeStack];
	}
	char dequeueCharacter(){
		char res = queue[0];
		for(int i = 0; i < sizeQueue; i++){ queue[i] = queue[i + 1]; }
		sizeQueue--;
		return res;
	}

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
