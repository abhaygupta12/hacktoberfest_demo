#include<iostream>
using namespace std;

class person
{
	private:
		int weight;
	public:
      person(int w =0)    
        {
           weight=w;
        }
        friend bool operator>(person x,person y);
        friend bool operator<(person x,person y);
};
bool operator<(person x,person y) //overload less than
 {
 	return x.weight<y.weight;
 }
bool operator>(person x,person y)  // overload greater than
 {
 	return x.weight>y.weight;
 }

int main()
{
	int w1,w2;
	cout<<"Enter weight of jon"<<endl;
	cin>>w1;
	cout<<"Enter weight of soe"<<endl;
	cin>>w2;
	 person jon(w1);
     person soe(w2);
	if(jon>soe)
	{
		cout<<"jon is heavy"<<endl;
		
	}
	else if(jon<soe)
	{
		cout<<"soe is heavy"<<endl;
		
	}
	
}
