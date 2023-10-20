/*
Number to word converter program using C++
Programmed by: Gebrehiwet Tadesse 14/08/08 E.C
Bsc. Information Technology Engineering(Mekelle Institute Of Technology-MIT)
*/
#include<iostream>
using namespace std;
//int fun1(int);
//int fun2(int);
int i,j;
int fun1(int x)
 {
  i=x;
  switch(i)
  {
  case 1:
  cout<<"one ";
  break;
  case 2:
  cout<<"two ";
  break;
  case 3:
  cout<<"three";
  break;
  case 4:
  cout<<"four ";
  break;
  case 5:
  cout<<"five ";
  break;
  case 6:
  cout<<"six ";
  break;
  case 7:
  cout<<"seven ";
  break;
  case 8:
  cout<<"eight ";
  break;
  case 9:
  cout<<"nine ";
  break;
  case 10:
  cout<<"ten ";
  break;
  case 11:
  cout<<"eleven ";
  break;
  case 12:
  cout<<"twelve ";
  break;
  case 13:
  cout<<"thirteen ";
  break;
  case 14:
  cout<<"fourteen ";
  break;
  case 15:
  cout<<"fifteen ";
  break;
  case 16:
  cout<<"sixteen ";
  break;
  case 17:
  cout<<"seventeen ";
  break;
  case 18:
  cout<<"eighteen ";
  break;
  case 19:
  cout<<"nighteen ";
  break;
  case 20:
  cout<<"twenty ";
  break;
  }
 }
 int fun2(int x)
 {
 j=x;
  switch(j)
  {
 case 30:
  cout<<"thirty ";
  break;
  case 40:
  cout<<"fourty ";
  break;
  case 50:
  cout<<"fifty ";
  break;
  case 60:
  cout<<"sixty ";
  break;
  case 70:
  cout<<"seventy ";
  break;
  case 80:
  cout<<"eighty ";
  break;
  case 90:
  cout<<"nintey ";
  break;
 }
}
int main()
{
  int num;
  char ch='y';
  //cout<<" Enter the integer to be converted to word"<<endl;
   while(ch!='n')
  {
  	cout<<" Enter the integer to be converted to word"<<endl;
  cin>>num;
  if(num>=1&&num<=20)
   fun1(num);
   else if(num>=21 && num<=99)
   {
   fun2(num-num%10);
    if(num%10!=0)
     {
    int m=num%10;
	 fun1(m);
	 }
   }
	 else if(num>=100 && num<=999)
	 {
	  int  m=num/100;
	  fun1(m);
	  cout<<" Hundred ";
	 int  k=num%100;
	  if(k>=1 && k<=20)
	   {
	   	fun1(k);
	   }
	   	else if(k>=21 && k<=99)
	   	 {
	   	 	fun2(k-k%10);
	   	 	fun1(k%10);
		 }
	   }
	   else if(num>=1000 && num<=9999)
	    {
	     int m=num/1000;
	     fun1(m);
	     cout<<" thousand ";
	     int k=num%1000;
	     if(k>=100&& k<=999)
	     {
	     	fun1(k/100);
	     	cout<<" Hundred ";
	     	int  h=num%100;
	  if(h>=1 && h<=20)
	   {
	   	fun1(h);
	   }
	   	else if(h>=21 && h<=99)
	   	 {
	   	 	fun2(h-h%10);
	   	 	fun1(h%10);
		 }
		 }
		 else if(k>=21&&k<=99)
		 {
		 fun2(k-k%10);
       if(num%10!=0)
      {
       int m=k%10;
	   fun1(m);
	  }	
		}
		else if(k>=1&&k<=20);
		 {
		 	fun1(k);
		 }
		}
		else if(num>=10000&&num<=99999)
		{
			int b=num/1000;
			if(b>=1&&b<=20)
			{
			 fun1(b);
			 cout<<" Thousand ";
			}
			else if(b>=21&&b<=99)
			{
			 fun2(b-b%10);
			 if(b%10!=0)
             {
             int f=b%10;
	          fun1(f);
	          cout<<"Thousand ";
	           }
	           else
	           {
	           cout<<"Thousand ";
	            }
			}
			 int d=num%1000;
			 if(d>=1 && d<=20)
	        {
	   	      fun1(d);
	        }
	   	   else if(d>=21 && d<=99)
	   	   {
	   	 	fun2(d-d%10);
	   	 	fun1(d%10);
		   }
		   else if(d>=100&&d<=999)
		    {
		     int y=d/100;
		     fun1(y);
		     cout<<" Hundred ";
		     int q=d%100;
		     if(q>=1&&q<=20)
		      {
		      	fun1(q);
		      	}
		      	else if(q>=21&&q<=99)
		      	{
		      		fun2(q-q%10);
		      		if(q%10!=0)
                      {
                     int m=num%10;
	                 fun1(m);
	                   }
				  }
			}
			
		  cout<<endl<<endl<<endl;
		}
		cout<<"\n Enter n to quit and press any letter to continue"<<endl;
		cin>>ch;
	 }

}

