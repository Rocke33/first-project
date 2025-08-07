#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,rem,i,sqrofi,sum=0,flag=0;
	cout<<"enter number"<<endl;
	cin>>a;
	int original=a;
	while(a!=0){
		rem=a%10;
		sum=sum+pow(rem,3);
		a=a/10;
	}
	if(sum==original){
		cout<<"amstrong";
	}
	else
	cout<<"not";
return 0;
}