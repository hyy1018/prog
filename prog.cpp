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
	cout << setfill('*') << setw(30) << endl;
	cout << "---------Welcome to CSG Gadget Shop--------\n";
	cout << setfill('*') << setw(30) << endl;
	cout << setw(8) << "-Welcome to CSG Menu-" << setw(8) << endl;

	string A1 = "A ORDER ENTRY";
	string B1 = "B REPORTING";
	string C1 = "C EXIT";
	string P1,P2,C1,C2;
	char A, a, B, b, C, c, P, C, U, H, I, S, N, D, O;

	cout << left << A1 << endl << left << B1 << endl << left << C1 << endl << left << D1 << endl;
	if (A1 == "A ORDER ENTRY")
	{
		cout << "Mobile Accessories press a\n" << "Computer Accessories press b\n" << "Enter your selection :";
		if (a == 'A' || a == 'a')
		{
			cout << "Category of sales :\n" << "Power & Charging press 'P'\n" << "Cables & Connectivity press 'C'\n"
				<< "Audio press 'A'\n" << "Protection & Holders press 'H'";
			if (P == 'P' || P == 'p')
				cout << "List of sales :" << "Phone Charger press 'P1'\n" << "Power Bank press P2\n";
			else if (C == 'c' || C == 'C')
				cout << "List of sales :" << "Type-C USB Cable press 'C1'\n" << "Lightning Cable (for iPhone) press C2\n";
			else if (U == 'U' || U == 'u')
				cout << "List of sales :" << "TWS Earbuds press 'U1'\n" << "Bluetooth Speaker press U2\n";
			else if (H == 'H' || H == 'h')
				cout << "List of sales :" << "Phone Case press 'H1'\n" << "Screen Protector press H2\n";
			else
				cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
		}
		else if (b == 'B' || b == 'b')
		{
			cout << "Category of sales :\n" << "Input & Audio press 'I'\n" << "Storage press 'S'\n"
				<< "Connectivity & Power press 'N'\n" << "Visual & Display press 'D'" << "Office & Productivity 'O'" << endl;
			if (I == 'I' || I == 'i')
				cout << "List of sales :" << "Wireless Mouse press 'I1'\n" << "Headset with Microphone press I2\n";
			else if (S == 'S' || S == 's')
				cout << "List of sales :" << "USB Flash Drive press 'S1'\n" << "External Hard Drive (Hard Disc) press S2\n";
			else if (N == 'N' || N == 'n')
				cout << "List of sales :" << "Laptop Charger press 'N1'\n" << "USB Hub press N2\n";
			else if (D == 'D' || D == 'd')
				cout << "List of sales :" << "Monitor screen press 'D1'\n" << "HDMI Cable press D2\n";
			else if (O == 'o' || O == 'O')
				cout << "List of sales :" << "Printer press 'O1'\n" << "Stylus Pen (for iPad or touchscreen laptop) press O2\n";
			else
				cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
		}
		else
			cout << "Invalid code !!!\n" << "Please return to homepage." << endl;
	}
	else if (B1 == "B REPORTING") // report于此地
	{
		cout << "咋办" << endl;

	}
	else if (C1 == "C EXIT")
		cout << "Thank you for using this system.\n" << "See your next time!!!" << endl;

	return 0;

}
