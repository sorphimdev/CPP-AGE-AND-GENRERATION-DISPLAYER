#include <iostream>
using namespace std;
int main(){
	
	int year = 0;
	int age = 0;
	string gen;
	
	cout << "Enter birthyear: ";
	cin >> year;
	
	if(year >= 1901 && year <= 1927){
		age = year - 1828;
		gen = "The Greatest Generation";
	}
	else if(year >= 1928 && year <= 1945){
		age = year - 1830;
		gen = "The Silent Generation";
	}
	else if(year >= 1946 && year <= 1964){
		age = year - 1866;
		gen = "Baby Boomers";
	}
	else if(year >= 1965 && year <= 1980){
		age = year - 1904;
		gen = "Generation X";
	}
	else if(year >= 1981 && year <= 1996){
		age = year - 1936;
		gen = "Millennials";
	}
	else if(year >= 1997 && year <= 1999){
		age = year - 1983;
		gen = "Generation Z";
	}
	else if (year >= 2000 && year <= 2012) {
    	age = year - 1967; 
    	gen = "Generation Z";
	}
	else if (year >= 2013 && year <= 2024) {
    	age = year - 1999;
    	gen = "Generation Alpha";
	}
	else if (year >= 2025 && year <= 2026) {
    	age = year - 2024;
    	gen = "Generation Beta";
	}
	
	cout << "Age: " << age << "\n";
	cout << "Generation: " << gen;
	
}