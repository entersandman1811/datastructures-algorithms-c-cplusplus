#include<iostream>

using namespace std;

class Rectangle{
	int a;
	int b;

	public:

	Rectangle(int a, int b);
	int get_a(){return a;}
	int get_b(){return b;}
};

Rectangle:: Rectangle(int a, int b){
	this->a = a;
	this->b = b;
}

int main(){
	
	Rectangle rect(3,2);
	cout<< (int)rect;
	cout<<" The height and width are" << rect.get_a() << " "<< rect.get_b();
}
