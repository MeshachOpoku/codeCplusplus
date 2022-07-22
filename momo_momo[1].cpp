#include<iostream>
using namespace std;

int main()
{ string name;
float left,amount,index,option,number,pin=1999; int balance=456;
 cout <<"Welcome to our Momo Services\n";
cout <<"Enter a number select an option\n\n 1.Transfer money \n\n2.Pay school fees\n\n3.Buy Airtime\n\n4.Allow cashout.\n\n5.Check balance \n\n6.Financial service.\n\n";
cin>>option; 
if (option==1)
   {cout <<"Transfer Money\n\n";
cout <<"Enter the number you want to send to\n\n";
cin>>option;

cout <<"Enter the number you to send to\n\n";
cin>>number;
if (number == option&& number>=1000000)
     {cout <<"Enter the amount";
       cin>>option;
      
    
 
        if(option <=balance)
        {      balance =balance-option;
        ;
         cout <<"Transfer Money\n\n an amount of GH¢";cout<<option;
         cout <<"to"<<number ;cout<<"Enter Pin to send";
          cin>>pin;
          if (pin==1999)
           {cout<<"You have transferred an amount of GH¢";cout<<option;
            cout<<"to"<<number;cout<<"Balance is";cout<<balance;}
         else {cout<<"Enter the right choice";}
        }
       else {cout<<"Enter the right choice";}

     }
   }
  
else if (option==2)
{cout<<"Pay School fees in Janet Serwaah School\n\n1.Enter name ";
     cin>>name;
  cout <<"Enter Index Number\n\n";
     cin>>index;
    cout<<"Enter Pin";cin>>pin;
      if (pin==1999)
   { cout <<"Enter amount \n\n";
    cin>>option; amount= balance-option;
    if (option<=balance)
    {cout<<"Index number";cout<<index ; cout<<":has pay a school fees of GH¢";cout<<option;cout <<"\n\nYour balance is";cout <<amount;}}
}
 else if (option==3)
{cout <<"Buy Airtime\n\n";
cout<<"Enter the amount\n ";
cin>>option;
if (option<=balance)
  {cout<<"Enter Pin  to buy an airtime of GH¢";cout<<option;
   cin>>pin;
    if (pin==1999)
     {cout <<"You have buy an airtime of GH¢";cout<<option;
     balance =balance-option;
     cout<<"Your balance";
    cout<<balance;}
  
 }else {cout <<"Enter the right choice";}


 }else if (option==4)
{cout<<"Allow Cashout\n\nEnter your choice\n\n1.Yes\n\n 2.No";
cin>>option;
if (option ==1)
{cout <<"Cashout is allowed";}
else {cout <<"Cashout is not allowed";}
;}

else if (option==5)
{ cout<<"1.Check Balance\n\n2.Allow Cashout"; cin>>option;
 if (option ==1)
   {cout <<"Check Balance\n\n1.Enter pin";cin>>option;
    if(pin==1999)
   cout<<"Your Balance is GH¢"; cout<<balance;
  ; }
  if (option ==2)
  {cout<<"Allow Cashout\n\nEnter your choice\n\n1.Yes\n\n 2.No";
   cin>>option;if (option ==1)
   {cout <<"Cashout is allowed";}else {cout <<"Cashout is not allowed";}
  ;}else {cout<<"Enter right choice";}
}
  
  else if (option==6)
{ cout <<"Welcome to our Financial Service\n\n1.Transfer Money from Momo account to Bank\n\n2.Transfer Money Bank account to Momo account";
 cin>>option;
    if (option==1)
    {cout <<"Transfer Money from Momo account to Bank.\n\nEnter Bank MomoNumber";cin>>option;
     cout<<"Enter your Account Number";cin>>number;
    cout <<"Enter amount ";cin>>amount;
    if (amount<=balance)
    ;}
;}
return 0;}
