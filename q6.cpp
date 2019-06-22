#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int i,j,n,count=0,count2=0,start=0;
	cin >> n;
	for(i=1;i<=n;i++){
		start=count+i;
		for(j=1;j<=i;j++){
			count2++;
			if(i%2==0){
			cout << start;
			start--;}
			//count++;
			else{
				cout << count2;
			}	
		}
		count=count+i;
		cout << endl;
	}
	return 0;
}
