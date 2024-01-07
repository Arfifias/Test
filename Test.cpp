#include <iostream>
#include <vector>
#include <cmath>

typedef int integer;

int main(){

using namespace std;

string name;
integer age;
double height;
double weight;

cout << "Please enter your name: ";
getline( cin >> ws,name);
cout << "Please enter your age: ";
cin >> age;
cout << "Please enter your height: ";
cin >> height;
cout << "Please enter your weight: ";
cin >> weight;

cout << "Your name:" << name << "\n";
cout << "Your age:" << age << "\n";
cout << "Your height:" << height << "\n";
cout << "Your weight:" << weight << "\n";

//Another program made in C++
//Enjoy!!!


return 0;

}