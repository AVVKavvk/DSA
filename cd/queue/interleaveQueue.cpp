
//*    withod using stack

#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    queue<int>q1;

    int size=q.size();
    int k=size/2;

    while(k>0){
      q1.push(q.front());
      q.pop();
      k--;
    }

    while(!q1.empty()){
      q.push(q1.front());
      q.push(q.front());
      q1.pop();
      q.pop();
    }
}

//*  method   2    using  stack


#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
  int size=q.size();

  int k=size/2;
  stack<int>st1;
  stack<int>st2;
  while(k>0){
    st1.push(q.front());
    q.pop();
    k--;
  }

  while(!q.empty()){
      st2.push(q.front());
      q.pop();

  }

  k=size/2;
  while(k>0){
      q.push(st2.top());
      q.push(st1.top());
      st2.pop();
      st1.pop();
      k--;
  }
stack<int>st;
  while(!q.empty()){
      st.push(q.front());
      q.pop();

  }
   while(!st.empty()){
    q.push(st.top());
    st.pop();

  }
}