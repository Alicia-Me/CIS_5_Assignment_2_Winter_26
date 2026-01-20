#include <iostream>
#include <iomanip>
using std::endl;
using std::cout;
using std::string;
using std::cin;

int main()
{
	//Variables Data: Name, Age, Height, Weight

	string name = "";
	int age = 0;
	double height = 0.0;
	double weight = 0.0;
	int testscores = 0;
	//--------------------------------------------------------------
	//grabs user data
	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your height in meters: ";
	cin >> height;

	cout << "Enter your weight in kilograms: ";
	cin >> weight;

	cout << "Enter your test scores: ";
	cin >> testscores;

	//-----------------------------------------------------------------------
		//Calculates BMI and tells the user their weight category.
	//weight and height are already initalized above
	double BMI = weight / (height * height);

	string bmiClass = "";

	if (BMI < 18.5) {
		cout << " (Underweight)" << endl;
		bmiClass = " (Underweight)";
	
	} else {
		if (BMI >= 18.5 || BMI <= 24.9) {
			cout << " (Normal weight)" << endl;
			bmiClass = " (Normal weight)";

		} else {
			if (BMI >= 25 || BMI <= 29.9) {
				cout << " (Overweight)" << endl;
				bmiClass = " (Overweight)";

			} else {
				if (BMI >= 30) {
					cout << " (Obese)" << endl;
						bmiClass = " (Obese)";
				}
			}
		}

	}
	//-----------------------------------------------------------------------------
	//Grade calculation---> Convert the numeric score to a letter grade:
	string grade = " ";

	if (testscores >= 90) {
		cout << "Score: A" << endl;
		grade = "A";
	} else {
		if (testscores >= 80 || testscores <= 89) {
			cout << "Score: B" << endl;
			grade = "B";
		} else {
			if (testscores >= 70 || testscores <= 79) {
				cout << "Score: C" << endl;
				grade = "C";
			} else {
				if (testscores >= 60 || testscores <= 69) {
					cout << "Score: D" << endl;
					grade = "D";
				} else {
					if (testscores <= 60) {
						cout << "Score: F" << endl;
						grade = "F";
					}
				}
			}
		}
	}



	//display data---------------------------------------------------------------

	//example outline: "Hey Alex, you're 20 years old with a BMI of 22.45 (Normal weight) and you got a grade A! Keep it up! ??"

	cout << "Hey " << name << "," << " you're " << age << " years old with a BMI of " << BMI << bmiClass << " and you got a grade " << grade << "! Keep it up! ??";

	return 0;
}