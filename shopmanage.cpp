// PROGRAM FOR SHOP MANAGEMENT.
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class shopmanage
{
public:
int d=0;
void veggies()
{
    int veg[3]={30,40,50};
    char choice;
    system("Color 0B");
    cout<<"==============="<<endl;
    cout<<"| a. Tomatoes |"<<endl;
    cout<<"| b. Potatoes |"<<endl;
    cout<<"| c .Onions   |"<<endl;
    cout<<"==============="<<endl;
    cout<<"CHOOSE YOUR PRODUCT:- "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 'a':
        cout<<"Tomatoes -> Rs. "<<veg[0]<<endl;
        d +=veg[0];       
        break;
        case 'b':
        cout<<"Potatoes -> Rs. "<<veg[1]<<endl;
        d +=veg[1];      
        break;
        case 'c':
        cout<<"Onions -> Rs. "<<veg[2]<<endl;
        d +=veg[2];
        break;
        default:
        cout<<"INVALID CHOICE!!"<<endl;
        exit(0);
        break;
    }
}
void grains()
{
    int gar[3]={50,30,45};
    char choice;
    system("Color 0B");
    cout<<"==============="<<endl;
    cout<<"| a. Wheat    |"<<endl;
    cout<<"| b. Rice     |"<<endl;
    cout<<"| c. Pulses   |"<<endl;
    cout<<"==============="<<endl;
    cout<<"CHOOSE YOUR PRODUCT"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 'a':
        cout<<"Wheat -> Rs. "<<gar[0]<<endl;
        d +=gar[0];
        break;
        case 'b':
        cout<<"Rice -> Rs. "<<gar[1]<<endl;
        d +=gar[1];
        break;
        case 'c':
        cout<<"Pulses -> Rs. "<<gar[2]<<endl;
        d +=gar[2];
        break;
        default:
        cout<<"INVALID CHOICE!!"<<endl;
        exit(0);
        break;
    }
}
void snacks()
{
    int sna[3]={10,25,30};
    char choice;
    system("Color 0B");
    cout<<"==============="<<endl;
    cout<<"| a.Biscuit   |"<<endl;
    cout<<"| b.Namkeen   |"<<endl;
    cout<<"| c.Chips     |"<<endl;
    cout<<"==============="<<endl;
    cout<<"CHOOSE YOUR PRODUCT"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 'a':
        cout<<"Biscuit -> Rs. "<<sna[0]<<endl;
        d +=sna[0];
        break;
        case 'b':
        cout<<"Namkeen -> Rs. "<<sna[1]<<endl;
        d +=sna[1];
        break;
        case 'c':
        cout<<"Chips-> Rs. "<<sna[2]<<endl;
        d +=sna[2];
        break;
        default:
        cout<<"INVALID CHOICE!!"<<endl;
        exit(0);
        break;
    }
}
};
int main()
{
    system("Color 0B");
    cout<<"*****WELCOME TO THE SHOP*****"<<endl;
    cout<<"============================="<<endl<<endl;
    int choice;
    shopmanage o;
    cout<<"***************"<<endl;
    cout<<"|1. Veggies   |"<<endl;
    cout<<"|2. Grains    |"<<endl;
    cout<<"|3. Snacks    |"<<endl;
    cout<<"***************"<<endl;
    while(1)
    {
    cout<<"Enter Your Choice:- "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        o.veggies();
        break;
        case 2:
        o.grains();
        break;
        case 3:
        o.snacks();
        break;
        case 4:
        cout<<"Total Bill :- \n"<<o.d<<endl;
        break;
        default:
        cout<<"\nINVALID CHOICE!!"<<endl;
        exit(0);
        break;
    }
    system("Color 0B");
    cout<<"***************"<<endl;
    cout<<"| 1. Veggies  |"<<endl;
    cout<<"| 2. Grains   |"<<endl;
    cout<<"| 3. Snacks   |"<<endl;
    cout<<"| 4. Bill     |"<<endl;
    cout<<"***************"<<endl;    
}
getch();
return 0;
}