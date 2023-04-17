#include<iostream>

using namespace std;

class p{
	
	public:
		float temperature;
		void t(){
			
			cout<<"Enter temperature : ";
			cin>>temperature;
		}
};

class q : public p{
	
	public:
		float fehrenheit;
		void f(){
			
			fehrenheit = temperature * 9 / 5 + 32;
			cout<<"fehrenheit : "<<fehrenheit<<endl;
		}
		
		
};

class r : public q{
	
	public:
		float kelvin;
		void k(){
			kelvin = (fehrenheit - 32) * (5 / 9) + 273.15;
			cout<<"kelvin : "<<kelvin<<endl;
		}	
};

int main()
{
	r obj;
	
	obj.t();
	obj.f();
	obj.k();
	
	
	
	return 0;
}
