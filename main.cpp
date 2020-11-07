#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
int num, counter, countdown, resp;
cout <<" What is the number of the countdown? ";
cin >>countdown;
for (counter=countdown;counter>=0;counter--)
{
	cout <<counter<<"\n";
}
}
