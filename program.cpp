//Recursion Level 1
//Written by- Vishal chauhan
#include<iostream>
using namespace std;
int recurpower( int b, int p)
{
	if(p!=0)
	return (b * recurpower(b,(p-1)));
	else 
	return 1;
}
int power( int b, int p)
{int ans=1;
	for(int i=1;i<=p;i++)
	{
		ans=ans*b;
	}
	return ans;
}
int recurfibo(int n)
{
	if(n<=1)
	 return n;
	return recurfibo(n-1)+recurfibo(n-2); 

}
void fibo(int n)
{int t1=0, t2=1, nextterm=0;
cout<<"Fibonacci series: ";
for(int i=1; i<=n; ++i)
  {  if(i==1)
    {cout<<t1<<"  ";
      continue;
	} 
	else if(i==2)
	 {cout<<t2<<"  ";
	  continue;
    	}
     else
     {
      nextterm=t1+t2;
	   t1=t2;
	   t2=nextterm;
	   cout<<nextterm<<"  ";
	 }
   }
	 return;
   }  
int recurfindgcd(int a,int b)
   {
    if(b==0)
    
        return a;

    else
    
     return recurfindgcd(b ,a%b);	
	
}
int findgcd( int a,int b )
{
	while(b!=0)
	{
		int temp= a;
		a=b;
		b=temp%b;
	}
	return a;
}
int recurfacto(int n)
{   if (n>=1)
     return n*recurfacto(n-1);
     else
     return 1;
	
}
int facto(int n)
{   int factorial=1;
	for(int i=n;i>=1;i--)
	{factorial=factorial*i;
	}
	cout<<"Factorial of "<<n<<"= "<<factorial;
	return 0;
	}
	
int main()
{int ch;
	cout<<"What you want to do?"<<endl;
	cout<<"1: Factorial(alterative)"<<endl;
	cout<<"2: Factorial(recursion)"<<endl;
	cout<<"3: GCD (alterative)"<<endl;
	cout<<"4: GCD (recursion)"<<endl;
	cout<<"5: Fibonacci series (alterative)"<<endl;
	cout<<"6:Fibonacci series (recursion)"<<endl;
	cout<<"7:Power (alterative)"<<endl;
	cout<<"8:Power (recursion)"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:{ 
		         int n ;
	            cout<<"Enter the number of which you want to print factorial. ";
	            cin>>n;
             	facto(n);
             	break;
	        	}
	        	
	    case 2: {
	    	     int n ;
            	cout<<"Enter the number of which you want to print factorial. ";
	            cin>>n;
	            recurfacto(n);
            	cout<<"Factorial of number"<<n<<" = "<<recurfacto (n);
	
			break;
		}
		case 3:{
		     	int x,y,a,b;
	            cout<<"Enter first number: ";
	            cin>>a;
	            cout<<"Enter second number: ";
	            cin>>b;

	            x=a;
	             y=b;
	
            	cout<<"GCD of "<<x<<" and "<<y<<" is "<< findgcd( a,b);
			    break;
		}  
		case 4:{
				int x,y,a,b;
            	cout<<"Enter first number: ";
	            cin>>a;
	            cout<<"Enter second number: ";
	            cin>>b;
             	x=a;
            	y=b;
                  cout<<"GCD of "<<x<<" and "<<y<<" is "<<recurfindgcd(a,b);
		    	break;
		} 	
		case 5:{
			   int n;
			   cout<<"Enter the number of terms you want to print:- ";
               cin>>n;

               fibo(n);
  
		     	break;
		}
		case 6:{
		    	int n;
                cout<<"Enter the number of terms you want to print:- ";
                cin>>n;
                cout<<"Fibonacci series: ";
                for(int i=0;i<=n;i++)
                    {cout<<recurfibo(i)<<" ";
                      }

		          	break;
		}
		case 7:{
	     		int Power,base;
                cout<<"Enter Power = ";
                cin>>Power;
                cout<<"Enter base = ";
                cin>>base;
                 cout<<"Calculated answer = "<<power(base, Power);
	
			break;
		}
		case 8:{
		    	int Power,base;
                 cout<<"Enter Power = ";
                  cin>>Power;
                cout<<"Enter base = ";
                cin>>base;
                int r=recurpower(base, Power);
                 cout<<"Calculated answer = "<<r;
	 
		       	break;
		}
			
		
		
		
	}
return 0;

}
