#include<iostream>

using namespace std;

class x{
	
	public:
		int a;
		int b;
		int c;
		int sum;
		int cube1;
		int cube2;
		int cube3;
		
};

class y : public x{
	
	public:
		void setdata(){
			cout<<"Enter a number : ";
			cin>>a;
		
			cube1 = a * a * a;
		
			cout<<"Enter a number : ";
			cin>>b;
		
			cube2 = b * b * b;
		
			cout<<"Enter a number : ";
			cin>>c;
		
			cube3 = c * c * c;
		
			sum = cube1 + cube2 + cube3;
	}
	
	void getdata(){
		cout<<a<<" : "<<cube1<<endl;
		cout<<b<<" : "<<cube2<<endl;
		cout<<c<<" : "<<cube3<<endl<<endl;
		
		cout<<"Sum : "<<sum;
	}
};

int main()
{
	
	y obj;
	
	obj.setdata();
	obj.getdata();
	
	return 0;
}
