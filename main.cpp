#include <iostream>
using namespace std;
const int n=5;
main(){
	int a[10];
	int min,i,max;
	float s,average;
	s=0.0;
	for(i=0; i<10; i++){
		cin>>a[i];
	}
	min=a[0];
	for(i=0; i<10; i++){
	
	if(a[i] <min){
		min=a[i];
		
	}
}
cout<<"minimum of entered number is"<<min;
     max=a[0];
     for(i-0; i<10; i++){
     	if(a[i] > max){
     		     max=a[i];
     		     
		 }
	 }

cout<<"\nmaximum of entered number is"<<max;
       s=max+min;
       average=s/2;
       
       cout<<"\nresult of average:"
       <<average;
       
   }