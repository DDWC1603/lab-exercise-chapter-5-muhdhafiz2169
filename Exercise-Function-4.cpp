//finish up this program.thanks.
//

#include <iostream>
#include <iomanip>

using namespace std;

void OmbakKeluar();
void ombakOmbak(int, int, int, int);

int main() {
	OmbakKeluar();	
}

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat > 0)
	{
		for(int x=0; x<up; x++) {
			cout<<setw(height)<<right<<"+"<<endl;
		}
		
		for(int x=0; x<down; x++) {
			cout<<"+"<<endl;
			repeat --;
		}
	}
}

void OmbakKeluar()
{
	cout<<"\nwaveDemo\n";
	ombakOmbak();
}
