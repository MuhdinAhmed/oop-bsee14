#include <iostream>
#include<string>
using namespace std;

class Zoo
{
	private:
		int revenue;
		char * Feedback;
		public:
			Mammals M;
			Reptiles R;
			Birds B;
};

class Mammals
{
	public:
		string name;
		Mammals(string a)
		{
			name=a;
		}
};

class Reptiles
{
	public:
		string name;
        Reptiles(string a)
        {
        	name=a;
		}
};

class Birds
{
	public:
		string name;
		Birds(string a)
		{
			name=a;
		}
};

int main()
{
	Mammals M("Dolphin");
	Reptiles R("Python");
	Birds B("Eagle");
	cout<<m.name<<endl<<r.name<<endl<<b.name;
}


