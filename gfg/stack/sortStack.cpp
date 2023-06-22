//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insertElement(stack<int>& s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    
    if(s.top()<element){
        s.push(element);
        return;
    }
    
    int temp=s.top();
    s.pop();
    insertElement(s,element);
    s.push(temp);
}
void sortStack(	stack<int>& s){
     if(s.empty()){
       return;
   }
   int element=s.top();
   s.pop();
   
   sortStack(s);
   insertElement(s,element);
}
void SortedStack :: sort()
{
   if(s.empty()){
       return;
   }
   
   if(s.size()==1){
       return;
   }
   
   sortStack(s);
}