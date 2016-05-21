#include<iostream>

using namespace std;

class Band{
	protected:
		string band_name;
		string members[10];
	
	public:
		Band(){};		
		void set(string b_name,string me[],int a=10)
		{
			band_name=b_name;
			for(int i=0;i<a;i++)
			{
				members[i]=me[i];
			}			
		}

		void overall()
		{
			cout<<"Members Before: ";
			cout<<band_name;
			for(int i=0;i<10;i++)
			{
				cout<<members[i];
			}			
		}
		
		void add(string add,int index)
		{
			this->members[index]=add;

		}

		void overall2()
		{
			cout<<"Members after: ";
			cout<<band_name;
			for(int i=0;i<10;i++)
			{
				cout<<members[i];
			}		
		}
};

class marching_band: public Band
{
	public:
		string marching_place,equip;
		int inp()
		{	cout<<"\n";
			cout<<"Name of marching Place: ";
			cin>>marching_place;
			for(int i=0;i<5;i++)
			{
				cout<<"Equipments of marching band: ";
			    cin>>equip;
			}						
		}

		int overall2()
		{
			Band::overall2();
		}
};

class symphony_band: public Band
{
	public:
		string conductor_name,equip;
		
	int inp2()
	{
			cout<<"Name of Conductor: ";
			cin>>conductor_name;
	}	
};

int main()
{
	int choice;
	string b_name,me[10];
	cout<<"Band name: ";
	cin>>b_name;
	for(int i=0;i<10;i++)
	{
			cout<<"Name of " <<i+1<< " band member: ";
			cin>>me[i];
	}
	cout<<"Marching Band = 1\nsymphony Band = 2";
	cout<<"\n";
	marching_band ob;
	cout<<ob.inp();
	cout<<"Marching Band = 1\nsymphony Band = 2";
	cout<<"Enter you choice 1 or 2: ";
	cin>>choice;
	if(choice=1)
	{
		ob.overall2();
	}
}
