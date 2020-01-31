// A C++ program to demonstrate STL sort() using 
// our own comparator 
#include<bits/stdc++.h> 
using namespace std; 
// An interval has a start time and end time 
struct Interval 
{ 
	int start, end; 
}; 

// Compares two intervals according to staring times. 
bool compareInterval(Interval i1, Interval i2) 
{ 
	return (i1.end < i2.end); 
} 

int main() 
{ 
	Interval arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i].start;
        cin>>arr[i].end;

    } 
	int n = sizeof(arr)/sizeof(arr[0]); 

	// sort the intervals in increasing order of 
	// start time 
	sort(arr, arr+n, compareInterval); 

	cout << "Intervals sorted by start time : \n"; 
	for (int i=0; i<n; i++) 
	cout << "[" << arr[i].start << "," << arr[i].end 
			<< "] "; 

	return 0; 
} 
