//============================================================================
// Name        : question.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Data{
public:
	Data(){
		size=-1;
	}
	void add(int a){
		q[++size]=a;
	}
	int remove(){
		int r=q[0];
		for(int i=0;i<size;i++){
			q[i]=q[i+1];
		}
		size--;
		return r;
	}
	int getValue (int i){
		if(i>size){
			return -1;
		}
		return q[i];
	}

private:
	int size;
	int q[1000];

};
int main() {
	Data q;
	q.add(1);
	q.add(9);
	q.add(4);
	q.add(5);
	q.add(10);
	q.add(0);
	cout<<q.getValue(0)<<endl;
	cout<<q.getValue(3)<<endl;
	return 0;
}

