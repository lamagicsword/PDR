//Yujian Li (yl7kd) 04/12/16 Section 102

#include <iostream>

using namespace std;

class a{
public:
	virtual void ret() const {cout<<"I am a"<<endl;}
	virtual void ret1() const {cout<<"I am 1"<<endl;}
	virtual ~a(){}
};

class b:public a{
public:
	virtual void ret() const{cout<<"I am b"<<endl;}
	virtual void ret1() const {cout<<"I am 2"<<endl;}
};

int main(){
	a *a1 = new a;
	a *a2 = new b;

	a1->ret();
	a1->ret1();
	a2->ret();
	a2->ret1();
	return 0;
}
