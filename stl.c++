
// unordered set   and  set

// all funtion of unordered set and set are same

// set - duplicates not allowed , ordered
// unordered_set - duplicates not allowed , un-ordered
// unordered_multiset - duplicates allowed , un-ordered
// multiset - duplicates  allowed , ordered

#include<bits/stdc++.h>
using namespace std;


int main() {
  unordered_set < int > s;        // for set we use syntax
                                  // set<int> s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}


// vector
// Syntax:
//        vector_name.insert(position, size, val)

#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;
  vector<int> v(5,0);                               // vector of size 5 with all value 0
  vector<vector<int>> v(5,vector<int>(5,0));        // 2d vector of 5 rows and 5 col all is 0
        // sort(v.begin(),v.end(),greater<int>());
        // reverse(v.begin(),v.end());
        // v.insert(v.begin(),11);
        // v.erase(v.begin(),v.end()); 
        // v.clear();
        // v.empty();

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();



}


// string 
#include <bits/stdc++.h>

using namespace std;

string fun(){
    string a="satyam321 dubey";
    reverse(a.begin(),a.end());             // reverse a string
    string b=""; int x;
    int arr[]={3,2,1};
    sort(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // cout<<a.compare("satyam dubey")<<endl;
    a.size();                               // give size of string 
    a.erase(0,7);                           // erase some part of string
    a.insert(0,"satyam ");                  // insert string into string in any position
    cout<<a.substr(0,6)<<endl;              // substring of string
    string temp="213";
    int i=stoi(temp);                       // string to int
    cout<<i<<endl;
    cout<<to_string(i)+'s'<<endl;           // int to string
    sort(a.begin(),a.end());              //sort
    a.clear();                                      // clear the string
    tolower(a[0]); toupper(a[0];)          // lowercase to upper and vice versa
    return a;                       
    //  isalpha(a[0]) 
    //  isalphanum(a[0])
    // isdigit(a[0])

    // (char)((int)a[i]-32)               [ lowwer to upper iterative way ]
}

int main()
{
    cout<<"Hello World"<<endl;
    cout<<fun();
    return 0;
}

// map

// map - key value in order.
// unordered_map - key value in any order.
// unordered_multimap - key value in any order and duplicates allowed.
// multimap -   key value in order and duplicates allowed.


#include<bits/stdc++.h>

using namespace std;

int main() {
  map < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the map after clearing all the elements: " << mp.size();
}


// Stack

#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}

// Queue

#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1)
{
    queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}
int main()
{
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);
    
    cout<<"The elements of the queue are:"<<endl;
    printqueue(q);
    
    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    cout<<"Pop the front element: "<<endl;
    q.pop();
    printqueue(q);
}

// Deque 
// In deque element can add from front or back both side. 
// and can delete from front or back both side.
// we can also trverse the deque using itterator.

#include<bits/stdc++.h>
using namespace std;
void printdeque(deque<int> dq)
{
    deque<int>::iterator it;
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    printdeque(dq);
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;
    dq.pop_front();
    printdeque(dq);
    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    dq.pop_back();
    printdeque(dq);
    
}


// Priority queue 
// this is for max or min heap.

// code for max heap
#include<bits/stdc++.h>
using namespace std;
void printpriorityqueue(priority_queue<int> pq)
{
    priority_queue<int> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int main()
{
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue are:"<<endl;
    printpriorityqueue(pq);
    
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    printpriorityqueue(pq);
}
Output:

The elements of the priority queue are:
5
4
3
2
1
The size of the priority queue: 5
The top element of the priority queue: 5
Pop the top element:
4
3
2
1

// Code for min-heap:

#include<bits/stdc++.h>
using namespace std;
void printpriorityqueue(priority_queue<int,vector<int>,greater<int>> pq)
{
    priority_queue<int,vector<int>,greater<int>> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);
    
    cout<<"The elements of the priority queue are:"<<endl;
    printpriorityqueue(pq);
    
    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    pq.pop();
    printpriorityqueue(pq);
}
Output:

The elements of the priority queue are:
1
2
3
4
5
The size of the priority queue: 5
The top element of the priority queue: 1
Pop the top element:
2
3
4

//  To find next permutation

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}

Output:

2 1 3

// count the number of set bit in binary representation of an integer 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int n = 7;
    
    cout<<__builtin_popcount(n);   // if input in lon long then use  __builtin_popcountll(n);
    
    return 0;
}

// min element for vector or given range
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*min_element(v.begin(),v.end());
}


// max element for vector or given range
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*max_element(v.begin(),v.end());
}