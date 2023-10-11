#include <iostream>
#include <conio.h>
using namespace std;
void sort(int arry[] , int n){
	for(int i=0; i<n; i++){
	for(int j=i+1; j<n; j++){
	if(arry[j]<arry[i]){	
		int temp; 
		temp = arry[i];
		arry[i] = arry[j];
		arry[j] = temp;
	}
	}
		}
	for(int i=0; i<n; i++){
			cout<<arry[i]<<" ";
	}
}
int main(){
	back:
		system("cls");
	int n;
	cout<<"Enter the size of arry :";
	cin>>n;
	int arr[n];
	cout<<"enter the element in arry :"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr , n);
	getch();
goto back;
}