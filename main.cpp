#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
void call1(int n) 
	{
	sleep(n/4);
    cout << n << endl;
	}
void call2(int n)
	{
	sleep(n/3);
	cout << n << endl;	
	}
int main() 
	{
	thread xs[8];
	for(int i=0;i<8;++i)
	{
		if(i%2)	xs[i] = thread(call1, i+1);
		else xs[i] = thread(call2, i+1);
	}
    for(int i=9;i>=0;--i)
	{
		xs[i].join();
	}
	cout<< "THE END"
    return 0;
	}
