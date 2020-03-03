#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);

void showVector(vector<int>);

int dotProduct(vector<int>,vector<int>);

int main(){
	int N;
	srand(time(0));
	cout<<"Input N:";
	cin>>N;
	vector<int> x = randomVector(N);
	vector<int> y = randomVector(N);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int a)
{
	vector<int> w(a) ;
	for(int i=0;i<a;i++){
		w[i]=rand()%10;
	}
	return w;
}
void showVector(vector<int> g)
{ cout<<"[";
	for(int i=0;i<g.size();i++){
		cout<<g[i]<<" ";
	}
	cout<<"]";
}
int dotProduct(vector<int> l,vector<int> m)
{ int sum=0;
	for(int i=0;i<m.size();i++){
		sum+=l[i]*m[i];
	}
	return sum;
}
