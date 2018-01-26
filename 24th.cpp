#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
	public:
		int data;
		Node *next;
		Node(int d){
			data=d;
			next=NULL;
		}
};
class Solution{
	public:        

		Node* removeDuplicates(Node *head){
			//Write your code here
			
			Node* newHead = NULL, *lastItem;
			Node* walker = head;
			bool flag = false;
			
			while(walker){
				// check if walker already appear in NewHead list => flag = true, break
				Node* tempWalker = newHead;
				while(tempWalker){
					if(tempWalker->data == walker->data){
						flag = true;
						break;
					}
					tempWalker = tempWalker->next;
				}

				// check if flag = false, insert,
				if(!flag){
					if(!newHead){
						Node* newNode = new Node(walker->data);
						newHead = newNode;
					}
					else{
						lastItem = newHead;
						while(lastItem->next)
							lastItem = lastItem->next;
						Node* newNode = new Node(walker->data);
						lastItem->next = newNode;
					}	
				}
				// else, re-assign flag = false, and not insert
				else{
					flag = false;
				}
				
				walker = walker->next;
			}
				
			return newHead;
		}
		Node* insert(Node *head,int data)
		{
			Node* p=new Node(data);
			if(head==NULL){
				head=p;  

			}
			else if(head->next==NULL){
				head->next=p;

			}
			else{
				Node *start=head;
				while(start->next!=NULL){
					start=start->next;
				}
				start->next=p;   

			}
			return head;


		}
		void display(Node *head)
		{
			Node *start=head;
			while(start)
			{
				cout<<start->data<<" ";
				start=start->next;
			}
		}
};

int main()
{
	Node* head=NULL;
	Solution mylist;
	int T,data;
	cin>>T;
	while(T-->0){
		cin>>data;
		head=mylist.insert(head,data);
	}	
	head=mylist.removeDuplicates(head);

	mylist.display(head);

}
