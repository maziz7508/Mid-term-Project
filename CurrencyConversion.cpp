#include <iostream>          //input output stream
#include <conio.h>           //for using stod function conio.h is required
#include <cstring>           //fordealing with string
#include <cctype>            //is defined to classfy user defined functions or sort out them on the behalf of their catagory
#include <iomanip>          //  for formatting output

using namespace std;        //for using keywords/reserve word and user defined identifiers

void menue();               //functio prototype for displaying menue                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
double PKR_TO_DOLLAR(double);     //func prototype forconverting  PKR to Dollar'$
double DOLLAR_TO_PKR(double);     ///func prototype forconvertg  PKR to Dollar
double PKR_TO_EURO(double);    ///func prototype fo  r convertg  PKR toEuro'
double EURO_TO_PKR(double);    ///func prototype forconvertgEuro to PKR
double YEN_TO_PKR(double);     ///func prototype forconve rtg  Euro to PK
double PKR_TO_YEN(double);
double common  (void);          //for conversion of string todouble
void exit();                //    for x=7; so the pro   gramm should                                                                                                                                                                                                                                                                                                                                                                                 g
double value_input();           //funct prototype for checking input validation

const double PKR_1dollar = 178.25;               //cnst variables are declared
const double PKR_1euro = 202.74;
const double PKR_1yen = 1.55;

int main()
{

	int choice;

	do                            // do while fro executing the program at least once
	{

		menue();                  //display menue

		cout << "Please enter a number between 1-7 " << endl;      //If choice  is less tha1 or greater than 7,  input again
		cin >> choice;
		cin.clear();                                                //if any char or any otheer key is pressed then programm will input again
		cin.ignore();                                       //   cin.ignore,ignores the key from buffer
		while (choice < 1 || choice > 7)
		{

			cout << "Invalid choice!!! Choose a number between 1-7 " << endl;
			cin >> choice;
			cin.clear();
			cin.ignore();
		}

		switch (choice)
		{
		case 1:                           //If choice entered is 1, then enter string and check if it's validate then convert it to double andconvert pkr to $
		{
			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted into dollar!! " << endl;

			double dbl_value = common();

			cout << "Convert the value from PKR to Dollar !" << endl;
			double in_dollar = PKR_TO_DOLLAR(dbl_value);
			cout << "The value in dollar is : " << in_dollar << " dollars";
			break;
		}

		case 2:
		{
			
			//If choice entered i2,s  then enter string and check if it's validate then convert it to double and convert  $ to pkr
			
			
			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted dollar to PKR!! " << endl;

			double dbl_value = common();

			cout << "Convert the value from Dollar to PKR !" << endl;
			double dollar_to_pkr = DOLLAR_TO_PKR(dbl_value);
			cout << "The value in PKR is : " << dollar_to_pkr << " PKR";
			break;
		}

		case 3:
		{
			
			//If choice entered is 1, then enter string and check if it's validate then convert it to double and convert  PKR to Euro

			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted PKR to Euro!! " << endl;

			double dbl_value = common();
			cout << "Convert the value from PKR to EURO !" << endl;
			double PKR_TO_euro = PKR_TO_EURO(dbl_value);
			cout << "The value in EURO is : " << PKR_TO_euro << " EURO ";

			break;
		}

		case 4:
		{
//If choice entered is  4,, then enter string and check if it's validate then convert it to double andconvert  EURO TO PKR

			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted Euro to PKR!! " << endl;

			double dbl_value = common();
			cout << "Convert the value from EURO to PKR !" << endl;
			double euro_to_pkr = EURO_TO_PKR(dbl_value);
			cout << "The value in PKR is : " << euro_to_pkr << " PKR ";

			break;
		}

		case 5:
		{


//If choice entered is 5, then enter string and check if it's validate then convert it to double andconvert PKR  to yen
			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted PKR to YEN !! " << endl;

			double dbl_value = common();
			cout << "Convert the value from PKR to YEN !" << endl;
			double pkr_to_yen = PKR_TO_YEN(dbl_value);
			cout << "The value in YEN is : " << pkr_to_yen << " YEN ";

			break;
		}

		case 6:
		{

//If choice entered is 6, then enter string and check if it's validate then convert it to double andconvert  yen to pkr 

			if (choice >= 1 && choice <= 7)
				cout << "Enter only a positive value, other than any characters  that can be converted YEN TO PKR!! " << endl;

			double dbl_value = common();

			cout << "Convert the value from YEN to PKR !" << endl;
			double yen_to_pkr = YEN_TO_PKR(dbl_value);
			cout << "The value in PKR is : " << yen_to_pkr << " PKR ";

			break;
		}

		case 7:          // if 7 is pressed the program should exit
		{
			cout << "Programm exited!!! " << endl;
			break;
		}
		}

	}

	while (choice != 7);
}

void menue()         //function definition

{
	cout << "\n----------MENUE------------" << endl;
	cout << "\n1. PKR to Dollar " << endl;
	cout << "2. Dollar to PKR " << endl;
	cout << "3. PKR to Euro " << endl;
	cout << "4. Euro to PKR " << endl;
	cout << "5. PKR to Yen " << endl;
	cout << "6. Yen to PKR " << endl;
	cout << "7. Exit " << endl;
}

double PKR_TO_DOLLAR(double val1)               //function definition
{
	double pkr_to_dollar;
	pkr_to_dollar = val1 / PKR_1dollar;
	return pkr_to_dollar;
}
double DOLLAR_TO_PKR(double val2)             //function definition
{
	double dollar_to_pkr;
	dollar_to_pkr = val2 * PKR_1dollar;
	return dollar_to_pkr;
}

double PKR_TO_EURO(double val3)                  //function definition
{
	double pkr_to_euro;
	pkr_to_euro = val3 / PKR_1euro;
	return pkr_to_euro;
} 
                                                            
double EURO_TO_PKR(double val4)                  //function definition
{
	double euro_to_pkr;
	euro_to_pkr = val4 * PKR_1euro;
	return euro_to_pkr;
}

double PKR_TO_YEN(double val5)                  //function definition
{
	double pkr_to_yen;
	pkr_to_yen = val5 / PKR_1yen;
	return pkr_to_yen;
}

double YEN_TO_PKR(double val6)                     //function definition
{
	double yen_to_pkr;
	yen_to_pkr = val6 * PKR_1dollar;
	return yen_to_pkr;
}

double common(void)                             //function definition
{
    double dbl_value = value_input();
	while (dbl_value < 0)
	{
		cout << "Invalid input!!! " << endl;
		cout << "Input again!! ";
		dbl_value = value_input();
	}
	return dbl_value;
}

double value_input()                               //function definition
{
    string value;
	bool correct;
	int i;
	while (true)
	{
		cin >> value;
		correct = true;
		for (i = 0; i < value.length(); i++)
		{
			if (isalpha(value[i]))                   //is alpha is used to check any character have been entered or not
			{
				correct = false;
				break;
			}
		} 
		if (!correct)                                //if not false then execute this condition
		{
			cout << "Incorrect. Try again!!" << endl;
			continue;
		}
		else
			break;
	}
	cout << "\nValue of the result of stod(): " << fixed << setprecision(7) << stod(value) << endl;
	double dbl_value = stod(value);                       // value is converted to double
	return dbl_value;                                    //double value is being returned
}
