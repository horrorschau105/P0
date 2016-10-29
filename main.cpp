#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
//This function will be called from a thread
void call1(int tid) 
	{
	sleep(tid/4);
    cout << tid << endl;
	}
void call2(int tid)
	{
	sleep(tid);
	cout << tid << endl;	
	}
int main() 
	{
	thread xs[10];
	for(int i=0;i<10;++i)
	{
		if(i%2)	xs[i] = thread(call1, i+1);
		else xs[i] = thread(call2, i+1);
	}
    for(int i=9;i>=0;--i)
	{
		xs[i].join();
	}
    return 0;
	}
