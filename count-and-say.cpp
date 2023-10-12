/*This is the solution
of count-and-say sequence is a sequence of digit strings defined by the recursive formula:
Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211
*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void count(string a){
	string b = a;
	for(int i=0; i<a.length(); i++){ 
		for(int j=i+1; j<a.length(); j++){
			if(a[i]==a[j]){
	    	a.erase(j,1);
	    	j--;
			}
		}
	}
	int counter;
	for(int i=0; i<a.length(); i++){
		 counter = 0;
		for(int j=0; j<b.length(); j++){
			if(a[i]==b[j]){
				counter++;
			}
		}
			cout<<a[i]<<" is "<<counter <<"times"<<endl;
	}	
}
int main(){
		system("cls");
	string a;
	cout<<"Enter the string :";
	cin>>a;
	count(a);
	getch();
	main();
}