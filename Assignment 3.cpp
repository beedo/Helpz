/*
int starttime
double amounttimecall
int starttimeminute
char colon
*/
//Made by Hoi Pham
//CS 1336
//Programming Fundamentals
//Section 004
//Assignment 3
//Due by 10/7/2014 11:59PM
//Completed on
//Submitted on 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int hour, minute,length;
	char colon;
	double time, rate;
	cout << setprecision(2) << fixed;
	cout << "What is the time? (Enter in 24-hour format HH:MM)" << endl;
	cin >> hour>>colon>>minute;
	cout << "How many minutes were you on the phone for?\n";
	cin >> length;
	time = hour + (minute*.001);
	cout << "You entered '" << hour << ":" << minute << "' as the time you began the call and '" << length << "' as the amount of minutes you were on the phone for. "<< endl;
	double limit_minute = time - static_cast<int>(time);
	if (limit_minute > .59)
	{
		cout << "Please use a valid minute entry between 00 and 59.\n";
		cout << "You entered: " << time;
		system("pause");
		return 0;
	}
	if (time < 00.00 || time > 23.59)
	{
		cout << " Please enter a time between 00:00 hours and 23:59 hours.\n" << endl;
		system("pause");
		return 0;
	}
	else if (time >= 00.00 && time <= 06.59)
	{
		rate = 0.12;
		cout << "The rate of the starting time of call is $" << rate << "." << endl;
		cout << "The cost of this call is $" << rate*length << endl;
	}
	else if (time >= 07.00 && time <= 19.00)
	{
		rate = 0.55;
		cout << "The rate of the starting time of call is $" << rate << "." << endl;
		cout << "The cost of this call is $" << rate*length << endl;
	}
	else if (time >= 19.01 && time <= 23.59)
	{
		rate = 0.35;
		cout << "The rate of the starting time of call is $" << rate << "." << endl;
		cout << "The cost of this call is $" << rate*length << endl;
	}
	system("pause");
	return 0;
}