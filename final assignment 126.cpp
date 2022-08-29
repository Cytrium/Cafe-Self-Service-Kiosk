
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

//****************************************************************
//    	Function Declaration
//****************************************************************
void menu(char, int& ,int& ,int& ,int& ,int& ,int& ,int& ,int& , int&, int *);
float menuCount (int *);
void endPage();

//function untuk frontpage untuk ucapan selamat datang
void frontPage() 
{
	//cout << setw (25);
	//front page untuk display saje
	//kene customize lagi nak bagi lawa
	
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t  Hello, customer!!!"<<endl;
	cout<<"\t\t\t\t\t       Welcome to Fontaine Cafe"<<endl;
	cout<<"\n\n\t\t\t\t        A successful day starts from the morning."<<endl;
	cout<<"\t\t\t\t\t      Let's give it our all today."<<endl;
	cout<<"\t\t\t            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t      Press Enter to continue...";
	
	cin.get();
	system("cls"); //tukar page tanpa stack
}

//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************
int main()
{
	system("Color E9");
	int menuSelect[10];
	for (int i=0; i<10;i++)
		menuSelect[i]=0;
		
	int menu1=0, menu2=0, menu3=0, menu4=0, menu5=0, menu6=0, menu7=0, menu8=0, menu9=0;
	char select, option;
	float totalPrice;
	
		frontPage(); // first page sebelum proceed anything

				cout<<endl;
				cout<<endl;
				cout<<"\t\t\t\t\t      Where will you be eating today?"<<endl;
				cout<<"\t\t\t\t _________________________________________________________ "<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|      (Q) Dine in          |        (E) Takeaway         |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|___________________________|_____________________________|"<<endl;
				cout<<"\n\t\t\t\t\t   <<Press Q or E to proceed to menu>>";
				option = getch();			
		
		menu(select, menu1, menu2, menu3, menu4, menu5, menu6, menu7, menu8, menu9, menuSelect);
	
		system("cls");
		cout <<endl;
		cout<<endl;
		cout <<"\t\t\t\t\t\t Thank you for your purchase!!! :D"<<endl;
		cout <<"\t\t\t\t___________________________________________________________________"<<endl;
		cout <<endl;
		switch (option)
		{
			case 'Q':
			case 'q':
				cout<<"\t\t\t\tServing type :\t Dine in"<<endl;
			break;
				
			case 'E':
			case 'e':
				cout<<"\t\t\t\tServing type :\t Takeaway"<<endl;
			break;
		}
		Sleep(100);
		cout<<fixed<<showpoint;
		cout <<"\t\t\t\t___________________________________________________________________"<<endl;
		cout <<endl;
		Sleep(100);
		cout <<"\t\t\t\t                     Quantity            Price          Total   "<<endl;
		Sleep(100);
		cout <<"\t\t\t\t___________________________________________________________________"<<endl;
		Sleep(100);
		totalPrice = menuCount (menuSelect);
		Sleep(100);
		cout <<"\t\t\t\t___________________________________________________________________"<<endl;
		Sleep(100);
		cout <<"\t\t\t\tTotal                   "<<menu1 + menu2 + menu3 + menu4 + menu5 + menu6 + menu7 + menu8 + menu9<<"\t\t               RM"<<setprecision(2)<<totalPrice<<endl;
		Sleep(100);
		cout <<"\t\t\t\t==================================================================="<<endl;
		cout <<endl;
		Sleep(100);
		cout <<"\t\t\t\tPress Enter to continue...";
		getch();
		
		endPage();
		
	return 0;
}

//function untuk endPage macam ucapan terima kasih
void endPage()
{
	system("cls");
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t    Thank you for choosing our service :D"<<endl<<endl;
		cout<<"\t\t\t\t\t      'There's so Matcha you can do,"<<endl;
		cout<<"\t\t\t\t\t       if you start brewing today'"<<endl;
		cout<<"\t\t\t            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
}

void menu(char select,int& menu1, int& menu2, int& menu3, int& menu4,int& menu5,int& menu6,int& menu7,int& menu8,int& menu9, int *menuSelect)
{
	do 
	{
		system("cls");
		switch (select)
		{
			case 0 :
			case '0' :
				cout<<"\n\t\t\t\t                        MENU"<<endl;
				cout<<"\t\t\t\t _________________________________________________________ "<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|      (Q) Drinks           |        (E) Desserts         |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|                           |                             |"<<endl;
				cout<<"\t\t\t\t|___________________________|_____________________________|"<<endl;
				cout<<"\n\t\t\t\t<<Press (X) to proceed payment>>";
				select = getch();
				break;
			
			case 'q' :
			case 'Q' :	
				cout<<"\t\t\t\t\t__________________________________________"<<endl;
        	    cout<< endl;
            	cout<<"\t\t\t\t\t                 DRINKS                   "<<endl;
	            cout<<"\t\t\t\t\t__________________________________________"<<endl;
	            cout << endl;
	            cout<<"\t\t\t\t\t1)Asian Dolce Latte...............RM 10.90"<<endl;
	            cout<<"\t\t\t\t\t2)Americano........................RM 9.50"<<endl;
	            cout<<"\t\t\t\t\t3)Osmanthus Root Beer..............RM 8.60"<<endl;
	            cout<<"\t\t\t\t\t4)Espresso.........................RM 5.00"<<endl;
	            cout<<"\t\t\t\t\t5)Salted Caramel Frappe...........RM 11.99"<<endl;
	            cout<<"\t\t\t\t\t=========================================="<<endl;
	            cout<<"\t\t\t\t\t                   (1)                    "<<endl;
	            cout<<"\t\t\t\t\t=========================================="<<endl;
	            cout<<"\n\t\t\t\t\t<-- Press (0) to back to main menu";
	            select = getch();
	        	break;
	        
	        case 'e' :
	        case 'E' :
				cout<<"\t\t\t\t\t__________________________________________"<<endl;
	            cout<< endl;
	            cout<<"\t\t\t\t\t                 DESSERT                  "<<endl;
	            cout<<"\t\t\t\t\t__________________________________________"<<endl;
	            cout<< endl;
	            cout<<"\t\t\t\t\t6)Ice Cream.......................RM 10.00"<<endl;
	            cout<<"\t\t\t\t\t7)Tiramisu Cake...................RM 10.00"<<endl;
	            cout<<"\t\t\t\t\t8)Sandwich........................RM 10.00"<<endl;
	            cout<<"\t\t\t\t\t9)Puff pie........................RM 10.00"<<endl;
	            cout<<"\t\t\t\t\t=========================================="<<endl;
	            cout<<"\t\t\t\t\t                   (2)                    "<<endl;
	            cout<<"\t\t\t\t\t=========================================="<<endl;
	            cout<<"\n\t\t\t\t\t<-- Press (0) to back to main menu";
	            select = getch();
	            break;
	        case '1' :
	        	menu1++;
	        	menuSelect[0]++;
                select = '0';
	        	break;
	        case '2' :
	        	menu2++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
	        case '3' :
	        	menu3++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
			case '4' :
	        	menu4++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
			case '5' :
	        	menu5++;
                menuSelect[select - '1']++;
                select = '0';
				break;		
			case '6' :
	        	menu6++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
	        case '7' :
	        	menu7++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
			case '8' :
	        	menu8++;
                menuSelect[select - '1']++;
                select = '0';
	        	break;
			case '9' :
	        	menu9++;
                menuSelect[select - '1']++;
                select = '0';
				break;			
		}
	} while (toupper(select) != 'X');
}

//Untuk display nama menu yg dipilih, quantity, total * quantity, dan total price menggunakan array
float menuCount (int *menu)
{
	float total = 0;
	
	string menuName[10] = {"Asian Dolce Latte     ",
                           "Americano             ",
                           "Osmanthus Root Beer   ",
                           "Espresso              ",
                           "Salted Caramel Frappe ",
                           "Ice Cream             ",
                           "Tiramisu Cake         ",
                           "Sandwich              ",
                           "Puff pie              "};
	float menuPrice[10] = {10.9,9.50,8.6,5.0,11.99,10,10,10,10};

		for(int i=0; i < 9; i++)
		{
			if(menu[i] == 0)
			{
				continue;
			}
			else
			Sleep(100);
			cout <<"\t\t\t\t"<<menuName[i] << "\t" << menu[i] <<setprecision(2)<<"\t\t "<<menuPrice[i] * menu[i]<<endl;
			
			total += menuPrice[i] * menu[i];
		}
		
		
	return total;
}
