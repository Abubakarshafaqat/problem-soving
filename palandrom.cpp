/*this is solution of palan drom problum
Given an integer x, return true if x is a 
palindrome, and false otherwise.
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
string reverse(string p){
	int i,len,temp;
	len = p.length();
	for(i=0; i<len/2; i++){
		temp = p[i];
        p[i] = p[len - i - 1];
        p[len - i - 1] = temp;
}
   return p;
}
int main(){
	back:
		system("cls");
	string a , b;
	cin>>a;
	b  = reverse(a);
		if(a==b){
		cout<<a<<" is a palindrom statment";
	}else{
		cout<<a<<" is not a palindrom statment";
	}
	getch();
	goto back;
}