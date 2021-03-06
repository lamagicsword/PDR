//Yujian Li(yl7kd) inlab4.cpp 02/16/16

#include <iostream>
#include <limits>
#include <climits>
#include <stdint.h>

using namespace std;

void outputBinary(unsigned int x){
	int re;
	int i=0;
	int bi[31]={0};
	while(x>0){
		re = x%2;
		x=x/2;
		bi[31-i]=re;
		i++;
	}
	for(int j=0;j<32;j++){
	    cout<<bi[j];
	}
	cout<<endl;
}

union Data {
	unsigned int i;
	float j;
};


int main(){

	
//Maximum Value of Each Type
	cout<<"The maximum value of int type is "<<numeric_limits<int>::max()<<endl;
	cout<<"The maximum value of unsigned int type is "<<numeric_limits<unsigned int>::max()<<endl;
	cout<<"The maximum value of float type is "<<numeric_limits<float>::max()<<endl;
	cout<<"The maximum value of double type is "<<numeric_limits<double>::max()<<endl;
	cout<<"The maximum value of bool type is "<<numeric_limits<bool>::max()<<endl;
	cout<<"The maximum value of char type is "<<CHAR_MAX<<endl;
	cout<<INTPTR_MAX<<endl;
	cout<<sizeof(int*)<<endl;
	Data data;
	data.j = 1.0;
	outputBinary(data.i);
	int a = 1;
	int b = 0;
	double c = 1.0;
   	double d = 0.0;
	float m = 1.0;
	float n = 0.0;
	bool e = true;
	bool f = false;
	char g = '0';
	char h = '1';
	int* i = NULL;
	char* j = NULL;
	double* k = NULL;


//Last section of inlab4

    int IntArray[10] = {1,2,3,4,5,6,7,8,9};
	char CharArray[10] = {'a','b','c','d','e','f','g','h','i','j'} ;
	int IntArray2D[6][5] ={
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25},
		{26,27,28,29,30}
	};
	char CharArray2D[6][5] = {
		{'1','2','3','4','5'},
		{'6','7','8','9','10'},
		{'11','12','13','14','15'},
		{'16','17','18','19','20'},
		{'21','22','23','24','25'},
		{'26','27','28','29','30'}
	};
	
	
	return 0;
}

