/*
filename: helloworld.cpp
author: Aubree Kellar
Date:1/12/23
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double price;
		cout << "Enter the home price, in dollars: "; 	
		cin>> price;
	double down; 
		cout <<"Enter the down payment, in dollars: ";
		cin>> down;
	double n; 
		cout <<"Enter the length of loan, in months: "; 
		cin>> n;
	double interest; 
		cout <<"Enter the Monthly Interest Rate, in percentage: "; 
		cin >> interest ; 
	double tax; 
		cout <<"Enter the property tax rate, in percentage: "; 
		cin >> tax;
	double insurance; 
		cout <<"Enter the insurance rate, in percentage: ";
		cin >> insurance; 
	double p = price - down; 
	double T = (tax * price) / 1200 ;
	double i = interest / 100;
	double r = (insurance * price) / 1200 ;
	double m = ((p * ( i * (pow((1+i),n))))/((pow((1+i),n)-1) + T + r) );
	std:: cout <<"Your estimated monthly payment is; " << m  << std ::endl ;
	std:: cout <<"Total paid; " << m*n  << std ::endl ;
	std:: cout <<"Principal paid; " << p  << std ::endl ;
	std:: cout <<"Additional paid;" <<(m*n)-p  << std ::endl ;

	return 0;
}
