#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << setw(29) << "CSG Gadget Shop" << endl;
	cout << setw(33) << "LOT 1851-A, Jalan KPB 6," << endl;
	cout << setw(36) << "KAWASAN PERINDUSTRIAN BELAKONG" << endl;
	cout << setw(36) << "43300 SERI KEMBANGAN, SELANGOR" << endl;
	cout << setw(33) << "(MID VALLEY SHOPPING MALL)" << endl;
	cout << setw(25) << "-INCOICE-" << endl;
	cout << "+                                         +\n";
	cout << setfill('*') << setw(30) << "" << endl;
	cout << "---------Welcome to CSG Gadget Shop--------\n";
	cout << setfill('*') << setw(30) << endl;
	cout << setw(8) << "-Welcome to CSG Menu-" << setw(8) << endl;

	char A ;
	char B ;
	char C ;
	string P1,P2,T1,T2;
	cout << left << "A ORDER ENTRY" << endl << left << "B REPORTING" << endl << left << "C EXIT" << endl;
	cout << "Enter your selection :";


	char fst_option;
	cin >> fst_option;
	if (fst_option == 'A' || fst_option == 'a')
	{
		char secOpt;
		cout << "Mobile Accessories press a\n" << "Computer Accessories press b\n" << "Enter your selection :";
		cin >> secOpt;

		if (secOpt == 'a' || secOpt == 'A')
		{
			char thdOpt;
			cout << "Category of sales :\n" 
				<< "Power & Charging press      'P'\n" 
				<< "Cables & Connectivity press 'T'\n"
				<< "Audio press                 'A'\n" 
				<< "Protection & Holders press  'H'\n"
				<< "Enter your option :";
			cin >> thdOpt;
			if (thdOpt == 'P' || thdOpt == 'p')
			{
				char fthOpt;
				cout << "List of sales :" << "Phone Charger press    'P1'\n" << "Power Bank press        P2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 't' || thdOpt == 'T')
			{
				char fthOpt;
				cout << "List of sales :" << "Type-C USB Cable press 'T1'\n" << "Lightning Cable press   T2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'U' || thdOpt == 'u')
			{
				char fthOpt;
				cout << "List of sales :" << "TWS Earbuds press      'U1'\n" << "Bluetooth Speaker press U2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'H' || thdOpt == 'h')
			{
				char fthOpt;
				cout << "List of sales :" << "Phone Case press       'H1'\n" << "Screen Protector press  H2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else
				cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
		}
		else if (secOpt == 'B' || secOpt == 'b')
		{
			char thdOpt;
			cout << "Category of sales :\n" 
				<< "Input & Audio press        'I'\n" 
				<< "Storage press              'S'\n"
				<< "Connectivity & Power press 'N'\n" 
				<< "Visual & Display press     'D'\n" 
				<< "Office & Productivity      'O'\n" 
				<< "Enter your option :" ;
			cin >> thdOpt;
			if (thdOpt == 'I' || thdOpt == 'i')
			{
				char fthOpt;
				cout << "List of sales :" << "Wireless Mouse press  'I1'\n" << "Headset with Microphone press I2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'S' || thdOpt == 's')
			{
				char fthOpt;
				cout << "List of sales :" << "USB Flash Drive press 'S1'\n" << "External Hard Drive press     S2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'N' || thdOpt == 'n')
			{
				char fthOpt;
				cout << "List of sales :" << "Laptop Charger press  'N1'\n" << "USB Hub press                 N2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'D' || thdOpt == 'd')
			{
				char fthOpt;
				cout << "List of sales :" << "Monitor screen press  'D1'\n" << "HDMI Cable press              D2\n"
					<< "Enter your option :";
				cin >> fthOpt;
				if (fthOpt == 'P1')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else if (fthOpt == 'P2')
				{
					double prz, total = 0;
					int qtyPro;
					cout << "Quantity of product";
					cin >> qtyPro;
				}
				else
			}
			else if (thdOpt == 'o' || thdOpt == 'O')
				cout << "List of sales :" << "Printer press         'O1'\n" << "Stylus Pen(touchscreen) press O2\n";
			else
				cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
		}
		else
			cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
	}
	else if (fst_option == 'B' || fst_option == 'b') // report于此地
	{
		cout << "咋办" << endl;
	}
	else if (fst_option == 'C' || fst_option == 'c')
		cout << "Thank you for using this system.\n" << "See your next time!!!" << endl;

	return 0;

}
