//*******************************************************************
// Author: Jamie Anne Banjola
// Section: 1E
// Date: March 10, 2025
// Title: A simple personal bank transaction for our midterm.
//*******************************************************************
#include <iostream>
#include <vector>
using namespace std;

main(){
	double initial, depo, with;
	int choice;
	vector<int>total;
	vector<double>history;
	
	
	std::cout<<R"( 
     _      _      __  __     ____       _      _   _   _  __
    | |    / \    |  \/  |   | __ )     / \    | \ | | | |/ /
 _  | |   / _ \   | |\/| |   |  _ \    / _ \   |  \| | | ' / 
| |_| |  / ___ \  | |  | |   | |_) |  / ___ \  | |\  | | . \ 
 \___/  /_/   \_\ |_|  |_|   |____/  /_/   \_\ |_| \_| |_|\_\

	)"<<std::endl;
	cout<<" "<<endl;
	cout<<"Enter initial deposit number: ";
	cin>>initial;
	if(initial <= 0 ){
	cout<<"Invalid!";
	}else{
	total.push_back(initial);
	cout<<"Bank succesffully created with balance: "<<initial<<endl;

	}
	back:
	cout<<" "<<endl;
	cout<<"____BANK MENU____________________________"<<endl;
	cout<<"|                                       |"<<endl;
	cout<<"|   [1] Deposit                         |"<<endl;                  
	cout<<"|   [2] Withdraw                        |"<<endl;
	cout<<"|   [3] View Balance                    |"<<endl;
	cout<<"|   [4] View Transaction History        |"<<endl;
	cout<<"|   [5] Exit                            |"<<endl;
	cout<<"|_______________________________________|"<<endl;
	cout<<"Choice: ";
	cin>>choice;
	cout<<" "<<endl;
	
	
	if(choice == 1){
		cout<<"____DEPOSIT____________________________"<<endl;
		depo:
		cout<<"Enter deposit amount: ";
		cin>>depo;
		history.push_back(depo);
	if(depo <= 0 ){
		cout<<"Invalid!";
		goto depo;
	}else{
		int i = 0;
		while( i < total.size()){
		total[i]  += depo;
		total.push_back(depo);
		cout<<"Deposit succesfful! New balance: "<<total[i]<<endl;
		goto back;
	}	
	}
	}
	
	
	if(choice==2){
		cout<<"____WITHDRAW____________________________"<<endl;	
		with:
		cout<<"Enter withdrawal amount: ";
		cin>>with;
		history.push_back(with);
		if(with <= 0 ){
		cout<<"Invalid!";
		goto with;
	}else{
		int i = 0;
		while(i<total.size()){
		total[i] -= with;
		total.push_back(with);
		cout<<"Withdrawal Successful! New balance: "<<total[i]<<endl;
		goto back;
	}
	}
	}
	
	
	if(choice == 3){
		cout<<"____VIEW BALANCE____________________________"<<endl;
		int i = 0;
		while(i<total.size()){
		cout<<"Balance: "<<total[i]<<endl;
		break;
	}	
		goto back;
	}
	
	if(choice == 4){
		cout<<"____VIEW TRANSACTION HISTORY____________________________"<<endl;
		int i=0;
		while(i < history.size()){
		if(history[i] == depo){
		cout<<"+";
	} else{
		cout<<"-";
	}
		cout<<history[i]<<endl;
		i++;
	}
		goto back;
	}
	
	
	if(choice == 5){
		return 0;
	}
		
	
}





