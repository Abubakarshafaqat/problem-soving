#include <iostream>
using namespace std;
void indaces(int arr[] , int n){
	int target , res[2]; 
	cout<<"Enter the target :";
	cin>>target;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] + arr[j] ==target){
				res[0] = i+1;
				res[1] = j+1;
			}
			continue;
		}
	}
	cout<<"The indices of "<<target<<" is :"<<"["<<res[0]<<" , "<<res[1]<<"]";
}
int main(){
	int n ;
	cout<<"Enter the size of arry ";
	cin>>n;
	cout<<"Enter the entres of arry :";
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	indaces(arr , n);
}