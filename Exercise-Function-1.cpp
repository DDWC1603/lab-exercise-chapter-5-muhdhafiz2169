#include <iostream>

using namespace std;

void masuk_tak();

int main()
{
	masuk_tak();
}

void masuk_tak()
{
	char ans;
	int x = 0;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	cin >> ans;

	//ans=' ';
	while(ans!='y' && ans!='y'){
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		cin>>ans;
		
		x++;
		if (x == 3)
			break;
		if(ans!='n' && ans!='n')
			break;
	}

	if(ans =='n')
		cout<<endl<<"the fudge?!";
		//masuk_tak();
	if (ans == 'y')
		cout<<endl<<"chantek!"<<endl;
}
