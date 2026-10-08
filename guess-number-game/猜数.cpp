#include <iostream>
#include <random>
#include <ctime>
#define int long long
using namespace std;
int maxn=10;
mt19937 rnd(time(nullptr));
signed main()
{
	cout<<"Please guess a number from 0 to "<<maxn<<"\n";
	int sum=0,b,a=rnd()%(maxn+1);
	while(1){
		sum++;
		cin>>b;
		if(a==b){
			cout<<"Correct!"<<"\n"<<"You used "<<sum<<" times";
			break;
		}
		else if(b>a) cout<<"Too big!!";
		else cout<<"Too small!!"; 
		cout<<"\n";
	}
	return 0;
}
