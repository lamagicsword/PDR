//Yujian Li(yl7kd) 03/29/16 Section 102

#include <iostream>
#include <vector>
using namespace std;

class a {
	public:
	int i;
	char c;
	int* ptr;
	float f;
	int getj();
private:
	int j=1;
};

int a::getj (){
	return this->j;
}
void test(a aaa){
	cout<<aaa.i<<aaa.c<<aaa.ptr<<aaa.f<<aaa.getj()<<endl;
}

int main(){
	a a1;
	a1.i=1;
	a1.c='a';
	a1.f=1.1;
	test(a1);
    a1.getj();
	return 0;
}

