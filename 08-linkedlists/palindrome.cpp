// array approach

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

#include <bits/stdc++.h>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int>arr;
        Node* curr= head;
        while(curr!=NULL){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        
        int i=0;
        int j=arr.size()-1;
        
        while(i<=j){
            if (arr[i]!=arr[j]) return 0;
            
            i++;
            j--;
        }
        
        return 1;
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends


//              OPTIMIZED APPROACH  


class Solution{

  public:

  

    Node* GetMid(Node* head){

        Node* slow=head;

        Node* fast=head->next;

        

        while(fast!=NULL && fast->next!=NULL){

            fast=fast->next->next;

            slow=slow->next;

        }

        return slow;

    }

    

    Node* ReverseList(Node* head){

        Node* prev=NULL;

        Node* curr=head;

        Node* next=NULL;

        

        while(curr!=NULL){

            next=curr->next;

            curr->next=prev;

            prev=curr;

            curr=next;

        }

        return prev;

    }

    //Function to check whether the list is palindrome.

    bool isPalindrome(Node *head)

    {

     

        Node* mid=GetMid(head);

        

        Node* reverse=ReverseList(mid->next);

 

          while(reverse!=NULL ){

           if(reverse->data!=head->data){

                return 0;

            }

            

            head=head->next;

            reverse=reverse->next;

            

        }

        

        return 1;        

    }

};
