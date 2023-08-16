#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
	int item,option,sell_num;
	char yes_or_no;
	float amount,cost;
	
	int quantity [10]=
	{3,12,22,5,14,7,19,29,27,1};
	float price [10]={6.50,5.0,4.0,250.0,4.0,9.0,50.0,10.0,7.00,4.00};
	int pro_date[10]={1973,2016,2027,1993,1957,1970,1995,2000,2010,2040};
	int exp_date[10]={1999,2022,2030,2000,1971,1973,2005,2010,2015,2055};
	string product[10]={"Azampana","Beejay","Joint","Forest View","Davies","Coke","Bigoo","Kaizer","Angel","Tampico"};
struct stock {
	string name;
	int quantity;
	double price;
};


start :
	cout<<	"\n\n====WELCOME TO MY STOCK MANAGEMENT SYSTEM====\n\n";
	cout<<"Select an option"
	"\n\n 1. Show Products"
	"\n\n 2. Sell Product"
	"\n\n 3. Exit select :"; 
	cin>> option;
	choose:
		switch (option){
			case 1: 
			cout<<"Avalable Product \n\n";
			for (int i=0; i <10; i++){
				cout<<"\n++" <<product [i];
				};
				cout<<"\n Do You Want To Sell Some Out? [y/n]:";
				cin>>yes_or_no;
				if(yes_or_no=='y'||yes_or_no=='Y'){
					option=3;
					goto choose;
				}else {
					goto start;
				}
				
				
				
				break;
				case 2:
					for (int i=0; i <10; i++)
					{if(pro_date[i]==exp_date[i])
					{cout<<"\n\n Expired Item"<<i;
					cout<<"\n Name :"<<product [i];
					cout<<"\n Price : GHc"<<price [i];
					cout<<"\n Validity :"<<pro_date[i]<<"to"<<exp_date[i];
					cout<<"\n Packs Left :"<<quantity[i];
					cout<<"\n\n";
					amount=quantity[i]*price[i];
					cost+=amount;
					cout<<"The Expired goods cost:GHc"<<cost ;
					}
					else{
						continue;
					}
						}
		            goto start ;
		
		break;
		
		            case 3:
		            cout<<"My Products";
		            for(int i=0; i<10; i++){
		            	cout<<"Item Code"<<i; 
		            	cout<<"\n Name GHc:"<<product[i];
		            	cout<<"\n Price :"<<price [i];
		            	cout<<"\n Validity :"<<pro_date[i]<<"to"<<exp_date[i];
		            	cout<<"\n Packs Left :"<<quantity[i];
		            	cout <<"\n\n";
					}
		
		choose_item:
			cout<<"Choose items to sell[ item code]\n\n";
			cin>>item;
			if (option<=15){
				cout<<"How much are oyu selling:";
				cin>>sell_num;
				if(sell_num >quantity [item]){
					cout<<"\n Not enough item";
					goto choose_item;
				}
				else{
					amount =sell_num*price[item];
					cout<<sell_num<<"of"<<product[item]<<"would cost GHc"<<amount;
					cost+=amount;
				cout<<"\n Is the customer done?[y/n]:";
				
				// check if the customer is done
				cin>>yes_or_no;
				if(yes_or_no=='n'|| yes_or_no=='N'){
					goto choose_item;
				}
		
	
				else {cout<<"\n The total cost is :GHc"<<cost<<"\n\n";
				goto start;
				}
				
		 }
			}
				else {
					cout<<"Item not found";
					goto choose_item;
					}
					
					break;
					
					case 4:
						cout <<"Have a great day\n\n\n\n";
						return 0;
						
						break ;
						
						cout<<"\n\n Select a valid  option \n\n";
						goto start;
						break ;
				}
				
	
				
		return 0;
			}
