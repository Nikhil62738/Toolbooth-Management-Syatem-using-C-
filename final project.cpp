#include<iostream>

#include<string>
using namespace std;
float rs=75; 
float amt=0;
class ToolBooth
{
protected:
int bike,car,bus,truck,choice;
float amt;
public:
ToolBooth()
{
bike=0;
car=0;
bus=0;
truck=0;
amt=0;
}
void pay_entry()
{
do
{
cout<<"\n \n\n\n 1.Two Wheeler (25RS)\n"; 
cout<<"2.Car (60RS)\n ";
cout<<"3.Bus(85RS)\n ";
cout<<"4.truck (140RS + Extra Tax 75 RS";
cout<<"\n 5.Back to First Menu";
cout<<"\n Enter choice";
cin>>choice;
cout<<"\n\n\n";
switch(choice)
{
case 1: bike++;amt+=25;
cout<<"\n Entry Successful";
break;
case 2: car++;amt+=60;
cout<<"\n Entry Successful";
break;
case 3: bus++;amt+=85;
cout<<"\n Entry Successful";
break;
case 4: truck++;amt+=140;::amt=::amt+rs;
cout<<"\n Entry Successful";
break;
default :cout<<"\n\n Please Do Entry For Valid Vehical\n\n\n\n"; break;
}
}
while(choice!=5);
}
};
class govt
{
protected:
int choice,army_vehical=0,state_gov_vehical=0,central_gov_vehical=0,other=0;
public:
void no_pay_entry()
{
do
{
cout<<"\n\n\n\n\n\n 1.Army Vehical \n ";
cout<<"2.State Government Vehical\n";
cout<<"3.Central Government Vehical\n";
cout<<"4.Other gov Department";
cout<<"\n 5.Back to Menu";
cout<<"\n Enter choice";
cin>>choice;
switch(choice)
{
case 1: army_vehical++;
cout<<"\n Entry Successful";
break;
case 2: state_gov_vehical++;
cout<<"\n Entry Successful";
break;
case 3: central_gov_vehical++;
cout<<"\n Entry Successful";
break;
case 4: other++;
cout<<"\n Entry Successful";
break;
default :cout<<"\n\n Please Do Entry Valid Vehical\n\n\n\n";break;
}
}
while(choice!=5);
}
};
class display:public ToolBooth,public govt
{
private:
int i,total;
public:
void non_gov()
{
total=bike+car+bus+truck;
//cout<<"\n--------------------";
cout<<"\n Two Wheeler "<<bike;
cout<<"\n car "<<car;
cout<<"\n Bus "<<bus;
cout<<"\n Truck "<<truck;
//cout<<"\n--------------------\n\n";
//cout<<"\n-------------------------------";
cout<<"\n| Total Paying Vehical |"<<total;
cout<<"\n| Total Money \t|"<<amt<<"+"<<::amt;
cout<<"\n-------------------------------\n\n\n\n\n\n";
}
void gov()
{
total=army_vehical+state_gov_vehical+central_gov_vehical+other;
//cout<<"\n------------------------------";
cout<<"\n Army "<<army_vehical;
cout<<"\n State Gov. Vehical "<<state_gov_vehical;
cout<<"\n Central Gov. Vehical "<<central_gov_vehical;
cout<<"\n Other TollFree Vehical "<<other;
//cout<<"\n------------------------------";
cout<<"\n Total Non Paying Vehical |"<<total<<"|";
//cout<<"\n------------------------------\n\n\n\n";
}
void print()
{
cout<<"\n\n\n\n\n 1.To view Pay Vehical\n";
cout<<" 2.To view Non Pay vehical\n";
cout<<" Enter any no to back";
cin>>i;
cout<<"\n\n\n";
if(i==1)
{
return non_gov();
}
if(i==2)
{
return gov();
}
}

};
int main()
{
display obj;
int choice;
 char contain[10];
 cout<< " |" << " TOOLBOOTH" << " |\n";
cout<<" ADDRESS \n  Near GP nagpur \n  NH-6,Maharashtra";
do
{
cout<<"\n\n 1.For Entry Paying Vehical\n";
cout<<" 2.For Entry Gov Vehical";
cout<<"\n 3.Display"; 
cout<<"\n 4.Exit";
cout<<"\n Enter Your Choice :- ";
cin>>choice;
switch(choice)
{
case 1: obj.pay_entry();break;
case 2: obj.no_pay_entry();break;
case 3: obj.print();break;
case 4: cout<<"\n Thanks You";
default :cout<<"\n\n Please Enter Valid Choice";
}
}
while(choice!=4);
}
