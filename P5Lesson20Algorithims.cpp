
#include <iostream>
#include <cmath>
using namespace std;

// Homework1
void AdditionOf2Number()
{
	float FirstNumber, SecondNumber;

	cout << "Please enter first number ?\n";
	cin >> FirstNumber;

	cout << "Please second second number ?\n";
	cin >> SecondNumber;

	cout << "A + B = " << FirstNumber + SecondNumber << endl;
	cout << "A - B = " << FirstNumber - SecondNumber << endl;
	cout << "A * B = " << FirstNumber * SecondNumber << endl;
	cout << "A / B = " << FirstNumber / SecondNumber << endl;
	cout << "A % B = " << int(FirstNumber) % int(SecondNumber) << endl << endl;

}

// #1
bool HierADriver(bool HasADriverLicence, bool LegalAge21)
{
	
	if (HasADriverLicence == 1 && LegalAge21 == 1)
		return 1;
	else
	{
		return 0;
	}

}

// #2
bool HierADriverCase2(bool HasARecommindation, bool HasAdriverLicence, bool LegalAge21)
{
	if (HasARecommindation == 1)
		return 1;
	else if (HasAdriverLicence == 1 && LegalAge21 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// #14
void Swap2Numbers( char &Number1 , char &Number2 )
{
	char Temp;

	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;

	cout << "After swap in the function " << " Number1 " << "= " << Number1 << " Number2 " << "= " << Number2 << "\n";
}

// #15
float RectangleArea(float Width, float Hieght)
{
	float Area;

	Area = Width * Hieght;

	return Area;

}

// #16
float RectangleAreaByDiagonal(float RectangleSide , float RectangleDiagonal)
{
	float Area;

	Area = RectangleSide * sqrt(pow(RectangleDiagonal, 2) - pow(RectangleSide, 2));

	return Area;
}

// #18
float CircleAreaByRadius(float Radius)
{
	float Area;
	const float Pi = 3.14;

	Area = ceil(Pi * pow(Radius, 2));

	return Area;
}

// #19
float CircleAreaByDiameter(float Diameter)
{
	float Area;
	const float Pi = 3.14;

	Area = ceil((Pi * pow(Diameter, 2)) / 4);

	return Area;

}

// #20
float CircleAreaBySquare(float Square)
{
	float Area;
	const float Pi = 3.14;
	Area = ceil((Pi * (pow(Square, 2)) / 4));

	return Area;
}

// #21
float CircleAreaBySircumfrance(float Sircumfrance)
{
	float Area ;

	const float Pi = 3.14;

	Area = floor(((pow(Sircumfrance, 2)) / (4 * Pi)));

	return Area;
}

// #22
float CircleAreaByTriangle(float EqualTriangle_A , float EqualTriangleBase)
{
	float Area;
	const float Pi = 3.14;

	Area = floor((Pi * pow(EqualTriangleBase, 2) / 4) * ((2 * EqualTriangle_A - EqualTriangleBase) / (2 * EqualTriangle_A + EqualTriangleBase)));

	return Area;

}

// #23
float Circle_Area_Around_Arbitary_Triangle(float TriangleSideA,float TriangleSideB, float TriangleleBase)
{
	float Area;
	const float Pi = 3.14;

	float P = (TriangleSideA + TriangleSideB + TriangleleBase) / 2;
	Area = (TriangleSideA * TriangleSideB * TriangleleBase) / (4 * sqrt(P * (P - TriangleSideA) * (P - TriangleSideB) * (P - TriangleleBase)));
	Area = round(Pi * pow(Area, 2));

	return Area;
}

// #26
int ReadNumberCountUp()
{
	int Number;
	cout << "Enter a number to count up\n";
	cin >> Number;
	cout << "\n***************************\n";
	return Number;
}

void CountUpToN(int Number)
{
	int Counter = 1;
	while (Counter <= Number)
	{
		cout << Counter << "\n";
		Counter ++;
	}
}

// #27
int ReadNumberCountDown()
{
	int Number;
	cout << "Enter a number to count down\n";
	cin >> Number;
	cout << "\n******************\n";
	return Number;
}

void CountDownFromN(int Number)
{
	int Counter = Number;

	while (Counter >= 1)
	{
		cout << Counter <<"\n";
		Counter --;
	}
}

// #28
int ReadNumberToCountUpAndSumOdd()
{
	int Number;
	cout << "Enter a number to sum odd\n";
	cin >> Number;
	cout << "\n********************************\n";
	return Number;
}

void CountUpAndSumOdd(int Number)
{
	
	int Sum = 0;
	int Counter = 1;

	while (Counter <= Number)
	{
		if (Counter % 2 != 0)
		{
			Sum = Sum + Counter;
		}
		Counter++;
	}
	cout << Sum;
	
}

// #29
int ReadNumberToCountUpAndSumEven()
{
	int Number;
	cout << "Enter a number to count up and sum even numbers\n";
	cin >> Number;
	cout << "\n******************************************\n";
	return Number;
}

void CountUpAndSumEven(int Number)
{
	int Sum = 0;
	int Counter = 1;

	while (Counter <= Number)
	{
		if (Counter % 2 == 0)
		{
			Sum += Counter;
		}
		Counter++;
	}
	cout << Sum;
}

// #30
int ReadNumberToCountDownAndCalulateFactorial()
{
	int Number;
	cout << "Enter a number to calculate factorial \n";
	cin >> Number;

	while (Number <= 0)
	{
		cout << "The number must be positive \n";
		cin >> Number;
	}
	cout << "\n********************\n";
	return Number;
}

void CalculateFactorial(int Number)
{
	long double Fac = 1;
	long double Counter = Number;

	while (Counter != 1)
	{
		Fac = Fac * Counter;
		Counter--;
	}
	cout << Fac;
}

// #31
void NumberPower4()
{
	float Number, NumberPower2, NumberPower3, NumberPower4;

	cout << "Enter a number ?\n";
	cin >> Number;

	NumberPower2 = pow(Number, 2);
	NumberPower3 = pow(Number, 3);
	NumberPower4 = pow(Number, 4);

	cout << round(NumberPower2) << "\t" << round(NumberPower3) << "\t" << round(NumberPower4);
}

// #32
int ReadNumber()
{
	int Number;
	cout << "Enter a number to power it\n";
	cin >> Number;
	return Number;
}

int ReadPowerValue()
{
	int PowerValue;
	cout << "Enter power value \n";
	cin >> PowerValue;
	cout << "\n***************\n";
	return PowerValue;
}

void PowerTheNumber(int Number, int PowerValue)
{
	int Result = 1;
	while (PowerValue >= 1)
	{
		Result = Result * Number;
		PowerValue--;
	};
	cout << Result;
}

// #37
int ReadNumberToSumUntillUserStops()
{
	int Number = 0;
	cout << "Enter Numbers to sum , when need to stop enter -99 \n";
	cin >> Number;

	return Number;
}

void SumNumbersUntilUserStops(int Number)
{
	int Sum = 0;

	while (Number != -99)
	{
		Sum += Number;
		cout << "Keep going , when need to stop enter -99 \n";
		cin >> Number;
	}

	cout << Sum;
}

// #42
float TotalSeconds(float NumberofDays, float NumberofHours, float NumberofMinutes, float NumberofSeconds)
{
	float TotalSeconds;

	TotalSeconds = (NumberofDays * 24 * 60 * 60) + (NumberofHours * 60 * 60) + (NumberofMinutes * 60) + (NumberofSeconds);

	return round(TotalSeconds);
}

// #43
void Days_Hours_Minutes_Seconds_Per_Seconds()
{
	int TotalSeconds, SecondsPerDays, SecondsPerHours, SecondsPerMinutes, NumberofDays, NumberofHours, NumberofMinutes, NumberofSeconds, Remainder;

	SecondsPerDays = 24 * 60 * 60;
	SecondsPerHours = 60 * 60;
	SecondsPerMinutes = 60;

	cout << "Enter total seconds ?\n";
	cin >> TotalSeconds;

	NumberofDays = floor(TotalSeconds / SecondsPerDays);
	Remainder = TotalSeconds % SecondsPerDays;

	NumberofHours = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;

	NumberofMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;

	NumberofSeconds = Remainder;

	cout << "" << round(NumberofDays) << " : " << round(NumberofHours) << " : " << round(NumberofMinutes) << " : " << round(NumberofSeconds) << "\n";
}

// #46
void PrintCapitalLetters()
{
	short i = 65;

	while (i <= 90)
	{
		cout << char(i) << " ";
		i++;
	}
}

void PrintSmallLetters()
{
	short i = 97;

	while (i <= 122)
	{
		cout << char(i) << " ";
		i++;
	}
}

// #50

string ReadPinNumber()
{
	string Pin;
	cout << "Please enter your Pin you have 3 tries \n";
	cin >> Pin;

	cout << "\n--------------------------------\n";
	return Pin;
}

void ValidateUserPinAndLuckCard(string Pin)
{
	short Tries = 3;
	string RightPin = "1234";
	int Blalance = 7500;

		while (Tries > 1 && Pin != RightPin)
		{
			cout << "Please enter the rigth Pin \n";
			Tries --;

			cout << "You still have " << Tries << " Tries\n";
			cin >> Pin;
		}

		if (Pin != RightPin)
		{
			cout << "Your card has beem blocked please go to your bank and renew it \n";
		}
		else
		{
			cout << "Your balance is :" << Blalance << "\n";
		}
	
}

int main()
{

	//Homework1
	/*AdditionOf2Number();*/

	// #1
	/*bool HasADriverLicence, LegalAge21;
	cout << "Do you have a driver licence?\n";
	cin >> HasADriverLicence;

	cout << "Are you older than 21 years old?\n";
	cin >> LegalAge21;

	 HierADriver(HasADriverLicence, LegalAge21);

	 if (HierADriver(HasADriverLicence, LegalAge21) == 0)
		 cout << "Rejected\n";
	 else
	 {
		 cout << "Hierd";
	 }*/

	//#2
	/*bool HasARecommindation, HasAdriverLicence, LegalAge21;

	cout << "Do you have a recommindation ?\n";
		cin >> HasARecommindation;

	cout << "Do you have a driver licence ?\n";
		cin >> HasAdriverLicence;

	cout << "Are you older than 21 years old ?\n";
		cin >> LegalAge21;

	HierADriverCase2(HasARecommindation, HasAdriverLicence, LegalAge21);

	if (HierADriverCase2(HasARecommindation, HasAdriverLicence, LegalAge21) == 1)
	{
		cout << "Hierd";
	}
	else
	{
		cout << "Rejected";
	}*/

	// #4
	/*short Age;
	bool HasADriverLicense;

	cout << "Enter Age :\n";
	cin >> Age;

	cout << "Do you have a driver license? :\n";
	cin >> HasADriverLicense;

	if (Age > 21 && HasADriverLicense == 1)
	{
		cout << "Hierd\n";
	}

	else
	{
		cout << "Rejected\n";
	}*/

	// #7
	/*int Number , HalfNum ;
	 
	cout << "Enter a number to get it's half ?\n";
	cin >> Number;

	HalfNum = Number / 2 ;

	cout << "Half of " << Number << " is " << HalfNum <<"\n ";*/

	// #8
	/*float Mark;

	cout << " Enter Mark :\n";
	cin >> Mark;

	if (Mark <= 50)
	{
		cout << "Failed\n";
	}
	else
	{
		cout << "Passed\n";
	}*/
	
	// #9
	/*int Num1, Num2;
	
	cout << "Enter first number ?" << endl;
	cin >> Num1;

	cout << "Enter second number ?" << endl;
	cin >> Num2;

	cout << "A + B = " << Num1 + Num2 << endl << endl;*/

	// #10
	/*short Mark1, Mark2, Mark3 , AVG;
	cout << "Enter first mark ?\n" ;
	cin >> Mark1;

	cout << "Enter second mark ?\n";
	cin >> Mark2;

	cout << "Enter third mark ?\n";
	cin >> Mark3;

	AVG = (Mark1 + Mark2 + Mark3) / 3;

	cout << " The avrage of three marks is " << AVG <<" \n";*/
	
	// #11
	/*float Mark1, Mark2, Mark3;

	cout << "Enter mark 1 :\n";
	cin >> Mark1;

	cout << "Enter mark 1 :\n";
	cin >> Mark2;

	cout << "Enter mark 1 :\n";
	cin >> Mark3;

	float Avg = (Mark1 + Mark2 + Mark3) / 3;

	cout << "\nAvrage is :" << Avg << "\n";

	if (Avg <= 50)
	{
		cout << "Avrage smaller than 50 'Falid'\n";
	}
	else
	{
		cout << "Avrage grater than 50 'Passed'\n";
	}*/
	
	// #14
	/*char Number1, Number2, Temp;

	cout << "Enter first Number ?\n";
	cin >> Number1;

	cout << "Enter second Number ?\n";
	cin >> Number2;

	cout << "Before swap " << " Number1 " << "= "<< Number1 << " Number2 " << "= " << Number2 << "\n";

	Swap2Numbers(Number1 , Number2 );

	cout << "After swap in the main "  << "Number1 " << "= " << Number1 << " Number2 "  << "= " << Number2 << "\n";*/

	// #15
	/*float Width , Hieght ;

	cout << "Enter Width ?\n" ;
	cin >> Width;

	cout << "Enter Hieght ?\n";
	cin >> Hieght;

	cout << "The Area of the rectangle is "<< RectangleArea(Width, Hieght) <<"\n";*/

	// #16
	/*float RectangleSide, RectangleDiagonal ;

	cout << "Enter rectangle side :" << endl;
	cin >> RectangleSide;

	cout << "Enter rectangle diagonal :" << endl;
	cin >> RectangleDiagonal;

	cout << "The area of rectangle is :" << RectangleAreaByDiagonal(RectangleSide , RectangleDiagonal);*/

	// #17
	/*float Base , Hieght , Area;

	cout << "Enter Base ?\n";
	cin >> Base;

	cout << "Enter Hieght ?\n";
	cin >> Hieght;

    Area = (Base / 2) * Hieght;

	cout << "The area of the triangle is " << Area << "\n"; */
	
	// #18
	/*float Radius ;
	cout << "Enter circle Radius? " << endl;

	cin >> Radius;
	
	cout << "Circle area is :" << CircleArea(Radius) << endl;*/

	// #19
	/*float Diameter;
	cout << "Enter Diameter ?\n";
	cin >> Diameter;

	cout << "The area of the Circle is " << CircleAreaByDiameter(Diameter) << "\n";*/
	
	// #20
	/*float Square;

	cout << "Enter square ?\n";
	cin >> Square;

	cout << "The area of the Circle is " << CircleAreaBySquare(Square) << "\n"; */

	//21
	/*float Sircumfrance ;
	cout << "Sircumfrance ?\n";
	cin >> Sircumfrance;

	cout << "The area of the Circle is " << CircleAreaBySircumfrance(Sircumfrance) << "\n";*/

	// #22
	/*float EqualTriangle_A , EqualTriangleBase ;

	cout << "Equal Triangle A ?\n";
	cin >> EqualTriangle_A;

	cout << "Equal Triangle Base ?\n";
	cin >> EqualTriangleBase ;

	cout << "The area of the Circle is " << CircleAreaByTriangle(EqualTriangle_A , EqualTriangleBase) << "\n" ;*/

	// #23
	/*float TriangleSideA, TriangleSideB, TriangleleBase;
	
	cout << "Enter triangle side A :" << endl;
	cin >> TriangleSideA;
	cout << "Enter triangle side B :" << endl;
	cin >> TriangleSideB;
	cout << "Enter triangle base :" << endl;
	cin >> TriangleleBase;

	cout << "The area of the circle is : " << Circle_Area_Around_Arbitary_Triangle(TriangleSideA , TriangleSideB , TriangleleBase) << endl;*/

	// #24
	/*short Age;

	cout << "Enter your age :\n";
	cin >> Age;

	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid age\n";
	}
	else
	{
		cout << "Invalid age\n";
	}*/

	// #26
	//CountUpToN(ReadNumberCountUp());

	// #27
	//CountDownFromN(ReadNumberCountDown());
	
	// #28
	//CountUpAndSumOdd(ReadNumberToCountUpAndSumOdd());
	
	// #29
	//CountUpAndSumEven(ReadNumberToCountUpAndSumEven());

	// #30
	//CalculateFactorial(ReadNumberToCountDownAndCalulateFactorial());

	// #31
	/*NumberPower4();
	*/

	// #32
	//PowerTheNumber(ReadNumber() , ReadPowerValue());
	
	// #33
	/*short Grade;

	cout << "Enter the grade :\n";
	cin >> Grade;

	if (Grade >= 90)
	{
		cout << "A\n";
	}
	else if (Grade >= 80)
	{
		cout << "B\n";
	}
	else if (Grade >= 70)
	{
		cout << "C\n";
	}
	else if (Grade >= 60)
	{
		cout << "D\n";
	}
	else if (Grade >= 50)
	{
		cout << "E\n";
	}
	else
	{
		cout << "F\n";
	}*/

	// #35
	
	// #34
	/*float TotalSales, percantage, TotalCommision;

	cout << "Enter total sales :\n";
	cin >> TotalSales;

	if (TotalSales >= 1000000)
	{
		percantage = 0.01;
	}
	else if (TotalSales >= 500000)
	{
		percantage = 0.02;
	}
	else if (TotalSales >= 100000)
	{
		percantage = 0.03;
	}

	else if (TotalSales >= 50000)
	{
		percantage = 0.05;
	}
	else
	{
		percantage = 0;
	}

	TotalCommision = percantage * TotalSales;

	cout << "Total commition is :" << TotalCommision << "\n";*/

	// #35
	/*float Pennies, Nickels, Dimes, Quarters, Dollars , TotalPennies , TotalDollars;

	cout << "Enter total pennies ?\n" ;
	cin >> Pennies ;

	cout << "Enter total Nickels ?\n";
	cin >> Nickels;

	cout << "Enter total Dimes ?\n";
	cin >> Dimes;

	cout << "Enter total Quarters ?\n";
	cin >> Quarters;

	cout << "Enter total Dollars ?\n";
	cin >> Dollars;

	TotalPennies = Pennies * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
	TotalDollars = TotalPennies / 100;

	cout << "Total Pennies is " << TotalPennies << " and total dollars is "<< TotalDollars <<"\n";*/

	// #36
	/*float Number1, Number2;
	char OperationType;

	cout << "Enter number 1 :\n";
	cin >> Number1;

	cout << "Enter operation type :\n";
	cin >> OperationType;

	cout << "Enter number 2 :\n";
	cin >> Number2;

	switch (OperationType)
	{
	case '+':
		cout << Number1 << " + " << Number2 << " = " << (Number1 + Number2) << "\n";
		break;

	case '-':
		cout << Number1 << " - " << Number2 << " = " << (Number1 - Number2) << "\n";
		break;

	case '*':
		cout << Number1 << " * " << Number2 << " = " << (Number1 * Number2) << "\n";
		break;

	case '/':
		cout << Number1 << " / " << Number2 << " = " << (Number1 / Number2) << "\n";
		break;

	default:
		cout << "Wrong operation\n";
	}*/

	// #37
	//SumNumbersUntilUserStops(ReadNumberToSumUntillUserStops());

	//#39
	/*float BaidCash, Price , Remainder;

	cout << "Enter BaidCash  ?\n";
	cin >> BaidCash;

	cout << "Enter Price  ?\n";
	cin >> Price;

	Remainder = BaidCash - Price;

	cout << "Remainder = "<< Remainder <<"\n";*/

	// #40
	/*float BillValue , TotalBill;

	cout << "Enter bill value ?\n" ;
	cin >> BillValue;

	TotalBill = BillValue * 1.1;
	TotalBill = TotalBill * 1.16;

	cout << "Total Bill is :"<< TotalBill << "\n";*/

	// #42
	/*float NumberofDays , NumberofHours , NumberofMinutes , NumberofSeconds ;
	
	cout << "Enter number of days ?\n";
	cin >> NumberofDays;

	cout << "Enter number of hours ?\n";
	cin >> NumberofHours;

	cout << "Enter number of minutes ?\n";
	cin >> NumberofMinutes;

	cout << "Enter number of seconds ?\n";
	cin >> NumberofSeconds;

	cout << "Total seconds is :"<< TotalSeconds(NumberofDays, NumberofHours, NumberofMinutes, NumberofSeconds) <<"\n";*/

	// #43
	/*Days_Hours_Minutes_Seconds_Per_Seconds();
	*/

	// #44
	/*short DayOfWeekNumber;

	cout << "Enter day of week number :\n";
	cin >> DayOfWeekNumber;

	switch (DayOfWeekNumber)
	{
	case 1:
		cout << "It's Sunday\n";
		break;

	case 2:
		cout << "It's Monday\n";
		break;

	case 3:
		cout << "It's tuseday\n";
		break;

	case 4:
		cout << "Wednesday\n";
		break;

	case 5:
		cout << "Thursday\n";
		break;

	case 6:
		cout << "Friday\n";
		break;

	case 7:
		cout << "Saturday\n";
		break;

	default:
		cout << "Not a number of a week day\n";
	}*/
	
	// #45
	/*short MonthNumber;

	cout << "Enter number of month :\n";
	cin >> MonthNumber;

	switch (MonthNumber)
	{
	case 1:
		cout << "January\n";
		break;

	case 2:
		cout << "February\n";
		break;

	case 3:
		cout << "March\n";
		break;
		
	case 4:
		cout << "April\n";
		break;

		case 5:
			cout << "May\n";
			break;

		case 6:
			cout << "June\n";
			break;

		case 7:
			cout << "July\n";
			break;

		case 8:
			cout << "August\n";
			break;

		case 9:
			cout << "Septemper\n";
			break;

		case 10:
			cout << "October\n";
			break;

		case 11:
			cout << "November\n";
			break;

		case 12:
			cout << "December\n";
			break;

	default:
		cout << "Wrong  month number\n";
	}*/

	// #46
	/*PrintCapitalLetters();
	cout << "\n";
	PrintSmallLetters();*/

	// #47
	/*float LoanAmount, MonthlyInstallment , TotalMonths;

	cout << "Enter loan amount ?\n";
	cin >> LoanAmount;

	cout << "Enter Monthly installment ?\n";
	cin >> MonthlyInstallment;

	TotalMonths = LoanAmount / MonthlyInstallment;

	cout << "Total months is : "<< TotalMonths<<"\n";*/

	// #48
	/*float LoanAmount , HowManyMonth , MonthlyInstallment;

	cout << "Enter loan Loan amount ?\n";
	cin >> LoanAmount;

	cout << "Enter How many month ?\n";
	cin >> HowManyMonth;

	MonthlyInstallment = LoanAmount / HowManyMonth;

	cout << "Monthly installment is : "<< MonthlyInstallment <<"\n";*/

	// #49
	/*string UserInput;
	string Pin = "1234";
	short Balance = 7500;

	cout << "Enter your password :\n";
	cin >> UserInput;

	if (UserInput != Pin)
	{
		cout << "Wrong password!";
	}

	else
	{
		cout << "Your balance is :" << Balance << "\n";
	}*/
	
	// #50
	//ValidateUserPinAndLuckCard(ReadPinNumber());




	


	
	

	




	



	



	






	return 0;
}