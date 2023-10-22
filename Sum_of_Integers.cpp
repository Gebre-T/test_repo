#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
 int i,sum=0,num;
 cout<<" Enter postive integers"<<endl;
 cin>>num;
   while(num)
   {
   	 if(num==0)
   	 {
		break;
	}
	if(num<0)
	{
	cout<<" please enter again"<<endl;
	cin>>num;
	continue;
	}
   sum=num+sum;
   cin>>num;
  
}
 cout<<" the sum ="<<sum<<endl;
return 0;
}
