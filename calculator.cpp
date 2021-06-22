#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	main:
	int choice;
	char c;
	char op;
	char op2;
	float n;
	float n1;
	float n2;
	cout<<endl;
	cout<<endl;
	cout<<"============================================================================================"<<endl;
	cout<<"|                                             CALCULATOR                                   |"<<endl;
    cout<<"============================================================================================"<<endl;
    cout<<endl;
	cout<<"WHICH TYPE OF CALCULATION WOULD YOU LIKE TO PERFORM?(BINARY/UNARY)"<<endl;
	cout<<"Press 1 for binary.(+,-,*,/,^)"<<endl;
	cout<<"Press 2 for unary.(exp,sqrt,log,sin,cos,tan,%)"<<endl;
	cout<<"Enter choice : ";
	cin>>choice;
	cout<<"==============================================================================================="<<endl;
	cout<<endl;
	if(choice==1)
	{
	cout<<"Operand + is for addition."<<endl;
	cout<<"Operand - is for subtraction."<<endl;
	cout<<"Operand * is for multiplication."<<endl;
	cout<<"Operand / is for division."<<endl;
	cout<<"Operand ^ is for exponential power function."<<endl;
	cout<<endl;
	cout<<"Enter first number:"<<endl;
	cin>>n1;
	cout<<endl;
	cout<<"Enter second number:"<<endl;
	cin>>n2;
	cout<<endl;
	cout<<"Enter operand:(+,-,*,/,^): "<<endl;
	cin>>op;
	cout<<endl;
	cout<<"________________________________________________________________________________________________"<<endl;
	cout<<endl;
	switch(op)
	{
	    case '+': 
	      cout<<"The result is: "<<n1+n2<<endl<<endl;
	      cout<<"Press b to go back : "<<endl;
		  cin>>c;
		  system("cls");
		  if(c=='b')
		  {
			goto main;
		  }
	      break;
	    
	    case '-':
	    	cout<<"The result is: "<<n1-n2<<endl<<endl;
	    	cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
	        {
		   	goto main;
		    }
	    	break;
	    
	    case '*':
	    	cout<<"The result is: "<<n1*n2<<endl<<endl;
	    	cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
		    {
			goto main;
		    }
			break;
			
		case '/':
		    cout<<"The result is: "<<n1/n2<<endl<<endl;
		    if(n2==0)
		    {
		    	cout<<"Not defined or infinity"<<endl<<endl;
			}
			cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
		    {
			goto main;
		    }
			break;
			
		case '^':
			cout<<"The result is: "<<pow(n1,n2)<<endl<<endl;
			cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
		    {
			goto main;
		    }
			break;
			
	    default:
	    	cout<<"invalid operator."<<endl<<endl;
	    	cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
		    {
			goto main;
		    }
	        break;
	}
    }   
	else if(choice==2)
	{
		cout<<"Enter number: ";
		cin>>n;
		cout<<endl;
		cout<<"For square root press s."<<endl;
		cout<<"For exponential press e."<<endl;
		cout<<"For tan/sin/cos press t."<<endl;
		cout<<"For logarithm press l."<<endl;
		cout<<"For percentage press %"<<endl;
		cout<<endl;
		cout<<"Enter symbol given above: "<<endl;
		cin>>op2;
		cout<<"________________________________________________________________________________________________"<<endl;
		cout<<endl;
		switch(op2)
		{
			case 's' :
				cout<<"The result is: "<<sqrt(n)<<endl<<endl;
				cout<<"Press b to go back : "<<endl;
		        cin>>c;
		        system("cls");
		        if(c=='b')
		        {
			    goto main;
		        }
				break;
				
			case 'l':
				cout<<"The result is: "<<log(n)<<endl<<endl;
				cout<<"Press b to go back : "<<endl;
		        cin>>c;
		        system("cls");
		        if(c=='b')
		        {
			    goto main;
		        }
				break;
				
			case 'e':
				cout<<"The result is: "<<exp(n)<<endl<<endl;
				cout<<"Press b to go back : "<<endl;
		        cin>>c;
		        system("cls");
		        if(c=='b')
		        {
			    goto main;
		        }
				break;
				
			case '%':
				cout<<"The result is: "<<n/100.00<<endl<<endl;
				cout<<"Press b to go back : "<<endl;
		        cin>>c;
		        system("cls");
		        if(c=='b')
		        {
			    goto main;
		        }
				break;
				
			case 't':
				cout<<"The sin of given number is: "<<sin(n)<<endl;
				cout<<"The cos of given number is: "<<cos(n)<<endl;
				cout<<"The tan of given number is: "<<tan(n)<<endl<<endl;
				cout<<"Press b to go back : "<<endl;
		        cin>>c;
	        	system("cls");
		        if(c=='b')
	        	{
		    	goto main;
		        }
				break;
				
			default:
	    	cout<<"invalid operator."<<endl<<endl;
	    	cout<<"Press b to go back : "<<endl;
		    cin>>c;
		    system("cls");
		    if(c=='b')
	     	{
			goto main;
		    }
	        break;
					
		}
	}
	else
	{
		cout<<"Invalid choice"<<endl<<endl;
		cout<<"Press b to go back : "<<endl;
		cin>>c;
		system("cls");
		if(c=='b')
		{
			goto main;
		}
	}

    return 0;
}

