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