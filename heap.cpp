#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

class MinHeap
{
	int *harr;
	int capacity;
	int heap_size;
public:
	MinHeap(int capacity);
	void MinHeapify(int);
	int parent(int i)
	{
		return (i-1)/2;
	}
	int left(int i)
	{
		return (i*2+1);
	}
	int  right(int i)
	{
		return (i*2+2);
	}
	int extractMin();
	void decreaseKEy(int i,int new_val);
	int getMin()
	{
		return harr[0];
	}
	void deleteKey(int i);
	void insertKey(int k);
};
MinHeap::MinHeap(int cap)
{
	heap_size=0;
	capacity=cap;
	harr=new int[cap];
}
void MinHeap::insertKey(int k)
{
	if(heap_size==capacity)
	{
		cout<<"heap is full could not insertKey"<<endl;
	return;
	}
	heap_size++;
	int i=heap_size-1;
	harr[i]=k;
while(i!=0&&harr[parent(i)]>harr[i])
{
	swap(harr[i],harr[parent(i)]);
	i=parent(i);
}

}
int main() 
{ 
	MinHeap h(11); 
	h.insertKey(3); 
	h.insertKey(2); 
	cout<<h.left(0);
}
