/*This code is solve the poblum to finthe length of last word of as string.
Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
*/
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void l_word(string str){
	string s_str;
	int counter = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i]==32){
			counter = i+1;
		}
}
for(int i=counter; i<str.length(); i++){
s_str =s_str + str[i];	
}
cout<<"The length of "<<s_str<<" is "<<s_str.length()<<endl;
cout<<"Press any key to enter string ";
}
int main(){
	system("cls");
	string a;
	cout<<"Enter the string :";
	getline(cin,a);
	l_word(a);
	getch();
    main();
}