#include<iostream>		//for using cin-cout, left, right
#include<iomanip>		//for using format setw()
#include<cstring>		//for using string: array of char
#include<fstream>    	//for extranal file
#include<windows.h>		//for EXIT_FAILURE
#include<cmath>	  

using namespace std;

struct supermarket  {
	string name;
	int id,instock, cost, price;
};

//for write to sellingList.txt
struct sale {
	string name;
	int id, qty, cost, price;
	int date[3];
};	

//for read from sellingList.txt
struct saleItem {
	string name;
	int id, qty, price, t_price;
	int date[3];
};	

//copy items for sort to show 10 Best Seller and plot Graph"
struct listBestSeller {
	int id;
	string name;
	int qty;
};

//******************************************************************
//******************************************************************

void tableHeader(int type){
	
	switch(type){
		case 1:		//for show all
		cout<<"====================================================================================="<<endl;
			cout<<left<<setw(5)<<"Id";  
			cout<<setw(20)<<"Name";    
			cout<<right<<setw(7)<<"Instock";
			cout<<setw(7)<<"cost"; 
			cout<<setw(12)<<"sell_price"; 
			cout<<setw(12)<<"Total_cost"; 
			cout<<setw(12)<<"Total_price"; 
			cout<<setw(10)<<"Profit"<<endl; 
			cout<<"====================================================================================="<<endl;
			break;
		case 2:		//for buy
			cout<<"============================================================================="<<endl;
			cout<<left<<setw(5)<<"id";  
			cout<<setw(20)<<"name";    
			cout<<right<<setw(7)<<"instock";
			cout<<setw(7)<<"cost"<<endl;
			cout<<"============================================================================="<<endl; 
			break;
		case 3:		//for list for sale
			cout<<"==================================================================="<<endl;
			cout<<left<<setw(5)<<"id";  
			cout<<setw(20)<<"name";    
			cout<<right<<setw(7)<<"instock";
			cout<<setw(7)<<"price";
			cout<<" || ";
			cout<<left<<setw(5)<<"id";  
			cout<<setw(12)<<"name";    
			cout<<right<<setw(7)<<"instock";
			cout<<setw(7)<<"price"<<endl;
			cout<<"==================================================================="<<endl; 
			break;
		case 4:		//for item sale
			cout<<"============================================================================="<<endl;
			cout<<left;
			cout<<setw(12)<<"date";
			cout<<setw(5)<<"id";  
			cout<<setw(20)<<"name";    
			cout<<right<<setw(7)<<"qty";
			cout<<setw(7)<<"price"; 
			cout<<setw(10)<<"t_price"<<endl; 
			cout<<"============================================================================="<<endl;
			break;
		case 5:		//for show sale all
			cout<<"============================================================================="<<endl;
			cout<<left<<setw(5)<<"id";
			cout<<setw(20)<<"name";    
			cout<<right<<setw(7)<<"instock";
			cout<<setw(7)<<"cost"; 
			cout<<setw(7)<<"price"; 
			cout<<setw(10)<<"t_cost"; 
			cout<<setw(10)<<"t_price"; 
			cout<<setw(10)<<"profit"<<endl;
			cout<<setw(12)<<"date"<<endl;
			cout<<"============================================================================="<<endl;
			break;
	}  
}


void print(supermarket a[], int size){
	int t_cost, t_price, profit;
	int gt_cost, gt_price, gt_profit;
	
	gt_cost = gt_price = gt_profit = 0;
	
	for(int i=0; i<size; i++){
		cout<<left;
		cout<<setw(5)<<a[i].id;
		cout<<setw(20)<<a[i].name;
		cout<<right;
		cout<<setw(7)<<a[i].instock;
		cout<<setw(7)<<a[i].cost;
		cout<<setw(7)<<a[i].price; 
		
		t_cost = a[i].instock * a[i].cost;
		t_price = a[i].instock * a[i].price;
		profit = t_price - t_cost;
		gt_cost += t_cost;
		gt_price += t_price;
		gt_profit += profit;
		
		cout<<setw(12)<<t_cost; 
		cout<<setw(12)<<t_price; 
		cout<<setw(12)<<profit<<endl; 
	} 	
	cout<<"==================================================================================="<<endl;
	cout<<left;
	cout<<setw(5)<<"";
	cout<<setw(20)<<"TOTAL";
	cout<<right;
	cout<<setw(7)<<"";
	cout<<setw(7)<<"";
	cout<<setw(7)<<""; 
	cout<<setw(12)<<gt_cost; 
	cout<<setw(12)<<gt_price; 
	cout<<setw(12)<<gt_profit<<endl; 
	cout<<"==================================================================================="<<endl;	
}
//----------------------
void print(saleItem s[], int size){
	
	for(int i=0; i<size; i++){
		cout<<left;
		cout<<setw(5)<<s[i].id;
		cout<<setw(20)<<s[i].name;
		cout<<right;
		cout<<setw(7)<<s[i].qty;
		cout<<setw(7)<<s[i].price;
		cout<<setw(7)<<s[i].t_price; 
		cout<<setw(10)<<s[i].date[0]<<"/"; 
		cout<<s[i].date[1]<<"/"; 
		cout<<s[i].date[2]<<endl; 
	}  	
	
}
//----------------------
//******************************************************************
//******************************************************************
int load_data(ifstream& ids, supermarket a[], int& size){
    string name; 
	int id,instock,price,cost,t_price,t_cost,profit;
	int i=0;
    ids.open("data/goods.txt");		//i = input = open for read txt.
    if(ids.fail())    {
       	cerr<<"Can't open goods.txt"<<endl;
       	system("pause");
       	return EXIT_FAILURE;           
   	}

    ids>>id;
    a[size].id = id;
    while(!ids.eof()){
        ids>>name>>instock>>cost>>price;
        a[size].name = name;
        a[size].instock = instock;
        a[size].cost = cost;
        a[size].price = price;
        
		size++;
        ids>>id;
		a[size].id = id;       
    }  
	ids.close(); 
	return 0;
}
//----------------------
int load_sellDataList(ifstream& ids, saleItem s[], int& size){
    string name; 
	int id,qty,price,t_price,dd,mm,yyyy;
	int ssize;
    ids.open("data/sellingList.txt");		//i = input = open for read txt.
    if(ids.fail())    {
       	cerr<<"Can't open sellingList.txt"<<endl;
       	system("pause");
       	return EXIT_FAILURE;           
   	}else{
		cerr<<"sellingList.txt"<<endl;
	}

    ids>>id;
    s[size].id = id;
    while(!ids.eof()){
        ids>>name>>qty>>price>>t_price>>dd>>mm>>yyyy;
        s[size].name = name;
        s[size].qty = qty;
        s[size].price = price;
        s[size].t_price = t_price;
		s[size].date[0] = dd;
		s[size].date[1] = mm;
		s[size].date[2] = yyyy;
        
		size++;
        ids>>id;
		s[size].id = id;       
    }  
	ids.close(); 

	// ssize = size;
	// print(s,ssize);

	return 0;

}
//----------------------
void stockAll(supermarket a[], int size, int type){
	system("cls");
	cout<<"STOCK ALL"<<endl;
	tableHeader(type);
	print(a, size);
}
//----------------------
int searchIndex(supermarket a[],int size,int id){
	int index=0;
	while(a[index].id != id && index<size){
		index++;
	}
	return index;
}
//----------------------
int dump_data(ofstream& ods,supermarket a[], int size){
	
	ods.open("data/goods.txt");	//o = output = open for write txt.
   	if(ods.fail()){
     	cerr<<"Can't open goods.txt"<<endl;
       	system("pause");
       	return EXIT_FAILURE;           
   	}
   	
    for(int i=0; i<size; i++){
    	ods<<left;
        ods<<setw(5)<<a[i].id;
		ods<<setw(12)<<a[i].name;
		ods<<right;
		ods<<setw(7)<<a[i].instock;
		ods<<setw(7)<<a[i].cost;
		ods<<setw(7)<<a[i].price<<endl;                      
    } 
    ods.close();

	return 0;
}
//----------------------
int insert_data(ofstream& ods, sale ss[], int size){
	
	ods.open("data/sellingList.txt", ios_base::app);	//o = output = open for write append txt.
   	if(ods.fail()){
     	cerr<<"Can't open reorder.txt"<<endl;
       	system("pause");
       	return EXIT_FAILURE;           
   	}	
   	for(int i=0; i<size; i++){
		ods<<left;
		ods<<setw(5)<<ss[i].id;
		ods<<setw(12)<<ss[i].name;
		ods<<right;
		ods<<setw(7)<<ss[i].qty;
		ods<<setw(7)<<ss[i].price;
		ods<<setw(10)<<ss[i].qty*ss[i].price;
		ods<<setw(5)<<ss[i].date[0];  
		ods<<setw(5)<<ss[i].date[1]; 
		ods<<setw(7)<<ss[i].date[2]<<endl; 	
	}
	ods.close();
	return 0;
}
//----------------------
void addNewItem(ofstream& ods,supermarket a[], int& size){
	int id, cost, price, qty;
	string name;
	cout<<"\nLast Id : "<<a[size-1].id<<endl;
	cout<<"Insert New Id : ";	cin>>id;
	cout<<"Insert Name   : ";	cin>>name;
	cout<<"Insert QTY.   : ";	cin>>qty;
	cout<<"Insert Cost   : ";	cin>>cost;
	cout<<"Insert Price  : ";	cin>>price;
	a[size].id = id;
	a[size].name = name;
	a[size].instock = qty;
	a[size].cost = cost;
	a[size].price = price;
	size++;
	dump_data(ods,a,size);
}
//----------------------
void reorderList(ofstream& ods, supermarket a[], int& size){
	int min, id, qty, index, type;
	char check;
	system("cls");
	cout<<"Reorder----------: "<<endl;
	cout<<"Search min stock : ";		cin>>min;
	
	do{
		system("cls");
		cout<<"Reorder----------: "<<endl;
		cout<<"Search min stock : "<<min<<endl;
		tableHeader(2);
		for(int i=0; i<size; i++){
			if(a[i].instock < min){
				cout<<left<<setw(5)<<a[i].id;  
				cout<<setw(12)<<a[i].name;    
				cout<<right<<setw(7)<<a[i].instock;
				cout<<setw(7)<<a[i].cost<<endl; 
			}
		}
		
		cout<<"\nDo you want to buy item into stock? (Y or N) : ";	cin>>check;
		
		if(toupper(check)=='Y'){
			cout<<"--------------"<<endl;
			cout<<"Buying : "<<endl;	
			cout<<"  1. Old Item"<<endl;
			cout<<"  2. New Item"<<endl;
			cout<<"--------------"<<endl;
			cout<<"Select Type : ";		cin>>type;
			
			switch(type){
				case 1: cout<<"\t input id : ";	cin>>id;
						cout<<"\t input qty: ";	cin>>qty;
						index = searchIndex(a,size,id);
						if(index<size){
							a[index].instock += qty;
						}
						dump_data(ods,a,size);
						break;
				case 2: addNewItem(ods,a,size);
						break;
			}
			
		}
			
	} while(toupper(check)=='Y'); 
		
}
//----------------------

//******************************************************************
//******************************************************************
void copyProduct(supermarket copy[],supermarket original[],int size){
	for(int i=0; i<size; i++){
		copy[i].id = original[i].id;
		copy[i].name = original[i].name;
		copy[i].instock = original[i].instock;
		copy[i].cost = original[i].cost;
		copy[i].price = original[i].price;	
	}
}
//----------------------
void showMenuSale(supermarket pp[],int size){
	system("cls");
	cout<<"Selling--------: "<<endl;
	tableHeader(3);
	for(int i=0; i<size; i++){
		if(pp[i].instock>0){
			cout<<left;
			cout<<setw(5)<<pp[i].id;
			cout<<setw(12)<<pp[i].name;
			cout<<right;
			cout<<setw(7)<<pp[i].instock;
			cout<<setw(7)<<pp[i].price;	
		} else {
			cout<<left;
			cout<<setw(5)<<pp[i].id;
			cout<<setw(12)<<pp[i].name;
			cout<<right;
			cout<<setw(7)<<"-";
			cout<<setw(7)<<"-";	
		}
		if((i+1)%2 != 0){
			cout<<" || ";	
		} else {
			cout<<endl;
		}
		
	}
	cout<<"\n==================================================================="<<endl;
}
//----------------------
void saleList(ofstream& ods, supermarket a[], int size){
	sale ss[1000];
	supermarket pp[1000];
	char check;
	int s_size, id, qty, price, t_price, dd,mm,yyyy;
	int flag=0;
	string name,date;
	
	copyProduct(pp,a,size);
	
	showMenuSale(pp,size);
	s_size=0;
	t_price = 0;
	
	cout<<"\nWant to buy items? (Y or N) : ";	cin>>check;	
	while(toupper(check)=='Y'){
		showMenuSale(pp,size);
		if(flag<1){
			cout<<"insert Date"<<endl;
			cout<<"       dd : ";		cin>>dd;
			cout<<"       mm : ";		cin>>mm;
			cout<<"     yyyy : ";		cin>>yyyy;
			flag++;
		}
		int index=0;	
		do{
			//showMenuSale(pp,size);
			cout<<"ID  : ";	cin>>id;
			index = searchIndex(pp,size,id);
			cout<<"QTY : ";	cin>>qty;
			if(pp[index].instock-qty < 0){
				cout<<"try again because of not enough items!!!"<<endl;
			} 
		}while(pp[index].instock-qty < 0);
		
		pp[index].instock = pp[index].instock-qty;
				
		ss[s_size].id = pp[index].id;
		ss[s_size].name = pp[index].name;
		ss[s_size].qty = qty;
		ss[s_size].cost = pp[index].cost;
		ss[s_size].price = pp[index].price;
		ss[s_size].date[0] = dd;
		ss[s_size].date[1] = mm;
		ss[s_size].date[2] = yyyy;
		s_size++;
		
		cout<<"Want to buy items? (Y or N) : ";	cin>>check;	
	}while(toupper(check)=='Y');
	
	if(flag>=1){
		tableHeader(4);
		for(int i=0; i<s_size; i++){
			cout<<left;
			printf("%02d/%02d/%d", ss[i].date[0], ss[i].date[1], ss[i].date[2]);
			cout<<"  ";
			cout<<setw(5)<<ss[i].id;
			cout<<setw(12)<<ss[i].name;
			cout<<right;
			cout<<setw(7)<<ss[i].qty;
			cout<<setw(7)<<ss[i].price;
			cout<<setw(10)<<ss[i].qty*ss[i].price<<endl;
			t_price += ss[i].qty*ss[i].price;
		}
		cout<<"==================================================================="<<endl;
		cout<<left;
		cout<<setw(12)<<"";
		cout<<setw(5)<<"";
		cout<<setw(12)<<"";
		cout<<right;
		cout<<setw(7)<<"";
		cout<<setw(7)<<"";
		cout<<setw(10)<<t_price<<endl;
		cout<<"==================================================================="<<endl;
		cout<<left;
		cout<<setw(12)<<"";
		cout<<setw(5)<<"";
		cout<<setw(12)<<"";
		cout<<right;
		cout<<setw(7)<<"";
		cout<<setw(7)<<"Vat 7%:";
		cout<<setw(10)<<t_price*0.07<<endl;
		cout<<"==================================================================="<<endl;
	}
	
	insert_data(ods,ss,s_size);
	dump_data(ods,pp,size);
   	
}
//----------------------

void easySort(listBestSeller a[], int size){
	int p;
	listBestSeller temp;
	//sort max to min
	for(int i =0; i<size-1; i++){
		p = i;
		for(int j=i+1; j<size; j++){
			if(a[j].qty > a[p].qty){
				p = j;
			}
		}
		//swap(a[i],a[p]);
		temp = a[i];
		a[i] = a[p];
		a[p] = temp;
	}
}
//----------------------
void bestSeller(supermarket a[], int size, saleItem s[], int ssize){
	listBestSeller sale[1000];
	int sum;
	int index, id, qty, mm;
	string name;
	//กำหนดค่าเริ่มต้นให้ sale เพราะเดี๋ยวจะเอา sale ไปนับจำนวนการขาย
	for(int i=0; i<1000; i++) { 
		sale[i].id = a[i].id;
		sale[i].name = a[i].name;
		sale[i].qty = 0; 
	}

	//search month
	cout<<endl;
	cout<<"input number of month";
	cout<<"   ex. 1,2,3, ... ,12"<<endl;
	cout<<"press 0 for ALL MONTH!!! : ";		cin>>mm;

	system("cls");
	cout<<endl<<"10 Best Seller for ";

	switch(mm){
		case 0 :	cout<<"Year"<<endl;	break;
		case 1 :	cout<<"January"<<endl;	break;
		case 2 :	cout<<"Frbruary"<<endl;	break;
		case 3 :	cout<<"March"<<endl;	break;
		case 4 :	cout<<"April"<<endl;	break;
		case 5 :	cout<<"May"<<endl;	break;
		case 6 :	cout<<"June"<<endl;	break;
		case 7 :	cout<<"July"<<endl;	break;
		case 8 :	cout<<"August"<<endl;	break;
		case 9 :	cout<<"Sebtember"<<endl;	break;
		case 10 :	cout<<"October"<<endl;	break;
		case 11 :	cout<<"November"<<endl;	break;
		case 12 :	cout<<"December"<<endl;	break;
		default :	cout<<endl<<"INPUT WRONG MONTH!!!!"<<endl;
	}

	//วนอ่านค่าในตัวแปร s
	sum = 0;
	for(int i=0; i<ssize; i++){
		if(s[i].date[1]==mm){
			id = s[i].id;
			qty = s[i].qty;
			index = searchIndex(a,size,id);
			sale[index].qty += qty;
			sum += qty;
		} else if(mm==0){
			id = s[i].id;
			qty = s[i].qty;
			index = searchIndex(a,size,id);
			sale[index].qty += qty;
			sum += qty;
		}	
	}

	easySort(sale,size);
	cout<<"---------------------------------------"<<endl;
	cout<<setw(7)<<"ID";
	cout<<setw(15)<<"NAME";
	cout<<setw(10)<<"QTY"<<endl;
	cout<<"---------------------------------------"<<endl;
	for(int i=0; i<10; i++){
		cout<<setw(7)<<sale[i].id;
		cout<<setw(15)<<sale[i].name;
		cout<<setw(10)<<sale[i].qty<<endl;
	}
	cout<<"---------------------------------------"<<endl;
	// cout<<right;
	// cout<<setw(7)<<"";
	// cout<<setw(15)<<"Sum:";
	// cout<<setw(10)<<sum<<endl;
	// cout<<"======================================="<<endl;
}
//----------------------
void graphSelling(supermarket a[], int size, saleItem s[], int ssize){
	listBestSeller sale[1000];
	int sum;
	int index, id, qty, mm;
	string name;
	//กำหนดค่าเริ่มต้นให้ sale เพราะเดี๋ยวจะเอา sale ไปนับจำนวนการขาย
	for(int i=0; i<1000; i++) { 
		sale[i].id = a[i].id;
		sale[i].name = a[i].name;
		sale[i].qty = 0; 
	}

	//search month
	cout<<endl;
	cout<<"input number of month";
	cout<<"   ex. 1,2,3, ... ,12"<<endl;
	cout<<"press 0 for ALL MONTH!!! : ";		cin>>mm;

	system("cls");
	cout<<endl<<"Graph Selling : ";

	switch(mm){
		case 0 :	cout<<"Year"<<endl;	break;
		case 1 :	cout<<"January"<<endl;	break;
		case 2 :	cout<<"Frbruary"<<endl;	break;
		case 3 :	cout<<"March"<<endl;	break;
		case 4 :	cout<<"April"<<endl;	break;
		case 5 :	cout<<"May"<<endl;	break;
		case 6 :	cout<<"June"<<endl;	break;
		case 7 :	cout<<"July"<<endl;	break;
		case 8 :	cout<<"August"<<endl;	break;
		case 9 :	cout<<"Sebtember"<<endl;	break;
		case 10 :	cout<<"October"<<endl;	break;
		case 11 :	cout<<"November"<<endl;	break;
		case 12 :	cout<<"December"<<endl;	break;
		default :	cout<<endl<<"INPUT WRONG MONTH!!!!"<<endl;
	}

	//วนอ่านค่าในตัวแปร s
	sum = 0;
	for(int i=0; i<ssize; i++){
		if(s[i].date[1]==mm){
			id = s[i].id;
			qty = s[i].qty;
			index = searchIndex(a,size,id);
			sale[index].qty += qty;
			sum += qty;
		} else if(mm==0){
			id = s[i].id;
			qty = s[i].qty;
			index = searchIndex(a,size,id);
			sale[index].qty += qty;
			sum += qty;
		}	
	}

	float x;
    float section = 100;
    float ans;

	cout<<"-----------------------------------------------------------------------------------"<<endl;
	cout<<setw(7)<<"ID";
	cout<<setw(15)<<"NAME";
	cout<<setw(10)<<"QTY";
	cout<<setw(10)<<"%";
	cout<<setw(15)<<"   Graph ( * == 1% )"<<endl;
	cout<<"-----------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<size; i++){
		x = sale[i].qty;
		ans = (x*section)/sum;
		cout<<setw(7)<<sale[i].id;
		cout<<setw(15)<<sale[i].name;
		cout<<setw(10)<<sale[i].qty;
		cout<<fixed;     //fixed สั่งให้คงรูปแบบตามด้านล่าง
		cout<<setw(10)<<setprecision(2)<<ans;  //setprecision(2) ให้โชว์ทศนิยม 2 ตำแหน่ง
		cout<<" | ";
		for(int i=0; i<round(ans); i++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"==================================================================================="<<endl;
    cout<<setw(7)<<"";
	cout<<setw(15)<<"TOTAL";
	cout<<setw(10)<<sum;
	cout<<setw(10)<<"";
	cout<<setw(15)<<""<<endl;
	cout<<"==================================================================================="<<endl;
    
}

//******************************************************************
//******************************************************************
void menuSelect(int& select){
	cout<<"============================"<<endl;
    cout<<"=========== menu ==========="<<endl;
	cout<<"============================"<<endl;
	cout<<"   1. REPORT ALL"<<endl;
    cout<<"   2. ADD NEW GOODS"<<endl;
    cout<<"   3. REORDER (BUY TO STORE)"<<endl;
    cout<<"   4. SELLING"<<endl;
    cout<<"   9. END"<<endl;
    cout<<"Select : ";				cin>>select;
}

void menuReport(supermarket a[], int size, saleItem s[], int ssize){
	int select;
	char check;
	ifstream ids;  
	ofstream ods;

	load_sellDataList(ids,s,ssize);
    
	do{
		system("cls");
		cout<<"===================================="<<endl;
		cout<<"========== Report Options =========="<<endl;
		cout<<"===================================="<<endl;
		cout<<"   1. Stock All"<<endl;
		cout<<"   2. Top 10 Best Seller"<<endl;
		cout<<"   3. Graph Selling"<<endl;
		cout<<"   4. Main Menu"<<endl;
		
		cout<<endl<<"Select : ";				cin>>select;
		switch(select){
			case 1	:	stockAll(a,size,1);				break;
			case 2	:	bestSeller(a,size,s,ssize);		break;
			case 3 	:	graphSelling(a,size,s,ssize); 	break;
		}
		if(select==4){
			check = 'N';
		} else {
			cout<<"View report continue? Y or N : ";	cin>>check;
		}
	}while(toupper(check)=='Y');

}	

int main(){
	
	supermarket a[1000]; //all product
	saleItem s[1000];
	int psize=0, ssize=0;
	int menu,report;
	
	ifstream ids; // input document stream  
	ofstream ods; 
	
	load_data(ids,a,psize);

	do
    {
		system("cls");
      	menuSelect(menu);
		switch(menu){
			case 1	:	menuReport(a,psize,s,ssize);		break;
			case 2	: 	addNewItem(ods,a,psize);            break;
         	case 3	: 	reorderList(ods,a,psize);           break;  
         	case 4	: 	saleList(ods,a,psize);  	        break;
         	case 9  : 	cout<<endl<<"Bye Buy!!!"<<endl<<endl;
			 		  	break;
		}
      	system("pause");
    }while(menu!=9);
	
	return 0;
}