#include<iostream>
#include<string>
using namespace std;

void myString(char *&,int);

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout <<p;	
	delete [] p;
	return 0;
}

void myString(char *(&a),int b){
	a=new char[b];
	
	for(int i=0;i<b;i++){
		*(a+i)='A'+i;
	}
	*(a+b)='\0';
}
