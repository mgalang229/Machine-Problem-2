#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
	
	int choice;
	
	cout << "\n MENU \n";
	cout << endl;
	cout << "1. Problem #1 \n";
	cout << "2. Problem #2 \n";
	cout << "3. Problem #3 \n";
	cout << "4. Problem #4 \n";
	cout << "5. Problem #5 \n";
	cout << "6. Problem #6 \n";
	cout << "7. Problem #7 \n";
	cout << "8. Problem #8 \n";
	cout << "9. Problem #9 \n";
	cout << endl;
	
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	if(choice == 1){
		
		int speed, time, distance;
		
		cout << "Distance for the given Speed and Time" << endl;
		cout << "------------------" << endl;
		cout << "Enter the speed (meter/second): ";
		cin >> speed;
		cout << "Enter the time (seconds): ";
		cin >> time;
		
		distance = speed * time;
		cout << "The distance of an object is " << distance << " meter(s)";
	}else if(choice == 2){
		
		double a, b, c, perimeter, area, equation;
		
		cout << "Area of a triangle given the three sides" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter the three sides of a triangle: ";
		cin >> a >> b >> c;
		
		perimeter = (a + b + c)/2;
		equation = (perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
		area = sqrt(equation);
		cout << "The area of the triangle is: " << area << " sq. units";
		
	}else if(choice == 3){
		
		int seconds, hours, minutes, seconds1;
		
		cout << "Time Conversion" << endl;
		cout << "----------------" << endl;
		cout << "Enter the number of seconds: ";
		cin >> seconds;
	
		hours = seconds / 3600;
		cout << "Hours: " << hours << endl;
		
		minutes = (seconds/60)%60;
		cout << "Minutes: " << minutes;
		cout << endl;
		
		seconds1 = seconds % 60;
		cout << "Seconds: " << seconds1;
	}else if(choice == 4){
		
		int days, months, days1;
		
		cout << "Days Conversion (Assuming that every month has 30 days)" << endl;
		cout << "--------------------------------------------------------" << endl;
		cout << "Enter the number of days: ";
		cin >> days;
		
		months = days / 30.417;
		cout << "Months: " << months;
		cout << endl;
		
		days = (days % 365)%7;
		cout << "Days: " << days;
	}else if(choice == 5){
		
		double base, height, area;
		
		cout << "Area of triangle given the base and height" << endl;
		cout << "------------------------------------------" << endl;
		cout << "Enter the base and height of a triangle: ";
		cin >> base >> height;
		
		area = (base*height)/2;
		cout << "The area of the triangle is: " << area << " sq. units";
	}else if(choice == 6){
		
		double pi = 3.141592;
		double radius, area;
		
		cout << "Volume of a Sphere" << endl;
		cout << "------------------" << endl;
		cout << "Enter the radious of a sphere: ";
		cin >> radius;
		
		area = 4*pi*(pow(radius, 3))/3;
		cout << "The area of the sphere is: " << area << " cu. units";
	}else if(choice == 7){
		
		int e, m, g, h, v;
		
		cout << "Total Mechanical Energy of a Particle" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Enter m, g, h, v: ";
		cin >> m >> g >> h >> v;
		
		e = m * g * h + (m*pow(v, 2))/2;
		cout << "The total mechanical energy of a particle is: " << e << " energy units";
		
	}else if(choice == 8){
		
		double amount, interest, amount2, totalAmount;
		
		cout << "Simple Interest and Total Amount" << endl;
		cout << "---------------------------------" << endl;
		cout << "Enter the amount given: ";
		cin >> amount;
		cout << "Enter the percent interest applied (%): ";
		cin >> interest;
		
		amount2 = amount * (interest/100);
		totalAmount = amount - amount2;
		cout << "The total amount is " << totalAmount;
	}else if(choice == 9){
		
		int num, sum, first, last;
		
		cout << "Sum of first and last digit of a four-digit number" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Enter the five(4) digits number: ";
		cin >> num;
		
		last = num % 10;
		first = num;
		
		while(num >= 10){
			num = num / 10;
		}
		first = num;
		
		sum = first + last;
		cout << "The sum digits is " << sum;
	}
	
	return 0;
	
}
