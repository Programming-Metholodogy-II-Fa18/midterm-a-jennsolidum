//============================================================================
// Name        : Question_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
int ProblemThree(int a[],int value);
int main() {
	int a[]={1,5,8,10,12,14,18,20,33,41};
	cout <<  ProblemThree(a,8);
	cout<<ProblemThree(a,33);
	return 0;
}
int ProblemThree(int a[],int value){
	int i=0;
	while(a[i]<value){
		i++;
	}
	if(a[i]==value){
		return ++i;
	}
	return -1;
}
