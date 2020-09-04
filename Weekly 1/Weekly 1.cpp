/*
Task1
Write a program that asks a user to enter their Full Name, initial of their name (use char) (for
example Meisam is ‘M’), age, phone number(use long), date of birth(exp: 01 / 12 / 2020).Define variable
for each inputand print the output on console.
*/
#include <iostream>
#include <string>
#include <conio.h>
char initial = 'J';
std::string Fullname = "";
std::string FrontName = "";
long PhoneNumber;
int DayOfBirth, MonthOfBirth, BirthYear;
int CurrentYear;
int Age;
int AgeB;
int AgeC;
int A = 20;
int B = 40;
int C = 60;
int Drink;
std::string YN = "";

int main()
{
	std::cout << "\n\n\tWeekly 1, Task 1\n\n";
	std::cout << "Enter your full name:\n";
	std::getline(std::cin, Fullname);
	std::cout << "Enter your phone number:\n";
	std::cin >> PhoneNumber;
	std::cout << "Enter the date of month you were born(Eg:17):\n";
	std::cin >> DayOfBirth;
	std::cout << "Enter Your Birth Month(Eg:05):\n";
	std::cin >> MonthOfBirth;
	std::cout << "Enter Your Birth Year(Eg:1814):\n";
	std::cin >> BirthYear;
	std::cout << "Enter The Current Year(Eg:2000):\n";
	std::cin >> CurrentYear;
	Age = CurrentYear - BirthYear;
	std::cout << "\n\n\tYour name is " << Fullname << " the first initial is " << initial << "." << std::endl;
	std::cout << "\n\n\tYou are " << Age << " years old." << std::endl;
	std::cout << "\n\n\tYour phone number is:" << PhoneNumber << "." << std::endl;
	std::cout << "\n\n\tand your birthday is: " << DayOfBirth << "/" << MonthOfBirth << "/" << BirthYear << "." << std::endl;
	std::cout << std::endl;
	system("pause");
	/*
	Task 2
	Write a program that asks the user for:
	name
	age
	"do you drink coffee?" (if yes, then print: it seems you like coffee / if no , then print : Oh you
	don’t like coffee)
	The program shall then write the result to the screen.
	Example:
	Your name is: Jack
	You are 20 years old
	Seems you like coffee
	*/
	std::cout << "\n\n\tWeekly 1 Task 2\n\n";
	std::cout << "What was your front name again?:\n";
	std::cin >> FrontName;
	std::cout << "And your age was?:\n";
	std::cin >> AgeB;
	std::cout << "Do you like Coffee(Eg:Y/N):\n";
	std::cin >> YN;
	std::cout << "\n\n\tYour name is " << FrontName << std::endl;
	std::cout << "\n\n\tYou are " << AgeB << " years old." << std::endl;
	if (YN == "Y") {
		std::cout << "\n\n\tSeems you like cofee." << std::endl;
	}
	else {
		std::cout << "\n\n\tSeems you dont like cofee." << std::endl;
	}
	std::cout << std::endl;
	system("pause");
	/*
	Task 3
	Write a program that ask the users for their age.
	If the result is
	less than 20, write "You are young" to the screen
	20 - 40, write "You are a grown up"
	41 - 59, write "You are old"
	more than 60, write " You ARE really old"
	*/
	std::cout << "\n\n\tWeekly 1 Task 3\n\n";
	std::cout << "Sorry , i forget easily, What was your age again?:\n";
	std::cin >> AgeC;
	std::cout << "\n\n\tYou are " << AgeC << " years old." << std::endl;
	if (AgeC < A) {
		std::cout << "\n\n\tYou are young." << std::endl;
	}
	if (AgeC >= A & AgeC <= B) {
		std::cout << "\n\n\tYou are a grown up." << std::endl;
	}
	if (AgeC > B & AgeC < C) {
		std::cout << "\n\n\tYou are old." << std::endl;
	}
	if (AgeC >= C) {
		std::cout << "\n\n\tYou ARE really old." << std::endl;
	}
	std::cout << std::endl;
	system("pause");
	/*
	Task 4
	 Write a program that asks what the user favorite drink is:
	1. Coffee
	2. Tea
	3. Coca Cola
	Select between 1 to 3:
	Depending on the result the program shall write
	if the user enters 1, print : "Coffee is delicious"
	if the user enters 2, print : "Tea gives peace of mind"
	if the user enters 3, print : "Coke will give you a white smile"
	*/
	std::cout << "\n\n\tWeekly 1 Task 4\n\n";
	std::cout << "What is your favorite drink?:\n";
	std::cout << "\n\n\t1. Coffe." << std::endl;
	std::cout << "\n\n\t2. Tea." << std::endl;
	std::cout << "\n\n\t3. Coca Cola." << std::endl;
	std::cin >> Drink;
	if (Drink == 1) {
		std::cout << "\n\n\tCoffee is delicious." << std::endl;
	}
	if (Drink == 2) {
		std::cout << "\n\n\tTea gives peace of mind." << std::endl;
	}
	if (Drink == 3) {
		std::cout << "\n\n\tCoke will give you a white smile." << std::endl;
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}