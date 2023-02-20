/*
program: assignment1.cpp
author: Aubree Kellar
Date:1/22/23
description: takes values from the user and calculates monthly morgage rates and other calculations 
input: price, down, length, interest, tax, insurance
output: monthly payment, total paid, principal paid, additional paid
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	bool playing = true; 
	double money; 
	string item1; 
	string item2; 
	double item1cost; 
	double item2cost; 
	int item2amount;
	int item1amount;
	int userinput; 
	bool inserting = true; 
	char usermoney;
	while (playing == true) 
		{		
		cout << "Welcome to the Binary Vending Machine! " <<  endl; 

//item 1 name, cost, and amount		
		cout << "Enter the name of the first item "  <<  endl;
		cin >> item1; 
			cout << "Enter the cost of the first item "  <<  endl;
		cin >> item1cost; 
		for (double test = fmod (item1cost, 0.25); test != 0;)
			{
			cout << "Invalid input! " << endl; 
			cout << "enter price of the first item" << endl;
			cin >> item1cost;
			}
		cout << "Enter the amount of the first item" << endl; 
		cin >> item1amount; 
		for (int test2 = item1amount; item1amount < 0;) 
		    {
		    cout << "Invalid input! " << endl; 
            cout << "Enter the amount of the first item" << endl; 
            cin >> item1amount; 
		    }

//item 2 cost
	cout << "Enter the name of the second item "  <<  endl;
		cin >> item2; 
		cout << "Enter the cost of the second item "  <<  endl;
		cin >> item2cost; 
		for (double test = fmod (item2cost, 0.25); test != 0;)
			{
			cout << "Invalid input! " << endl; 
			cout << "enter price of the second item" << endl;
			cin >> item2cost;
			}
			cout << "Enter the amount of the first item" << endl; 
		cin >> item2amount; 
		for (int test2 = item2amount; item2amount < 0;) 
		    {
		    cout << "Invalid input! " << endl; 
            cout << "Enter the amount of the second item" << endl; 
            cin >> item2amount; 
		    }
//machine first print
    cout << "Here are the items available in the machine: " <<endl; 
    cout << "1. " <<item1 << " - $" << item1cost << " (" << item1amount << " available)" << endl;
    cout << "2. " <<item2 << " - $" << item2cost << " (" << item2amount << " available)" << endl;
    cout << "Which item would you like to buy? (Enter 1 or 2, or 0 to quit): " <<endl; 
    cin >> userinput 
// if buy item1    
    if (userinput == 1)
        {
        cout << "Cost: $" << item1cost; <<endl;
        inserted << money; <<endl;
        while (inserting)
            {
            cout << " Insert dollars or quarters (Enter d for dollar, q for quarter, or s to stop)" 
            cin >> usermoney; 
            if (usermoney == d)
                {
                money = money + 1; 
                }
            if else (usermoney == q)
                {
                money = money +0.25; 
                }
            if else (usermoney == s)
                {
                inserting = false; 
                }
            }
        }
}

	return 0;
}
