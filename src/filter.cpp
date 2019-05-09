#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int x=0;
int y=0;
int z=0;
int avg=0;
int sum =0;
int lA=0;
int mA=255;
int zA=100;

ifstream myfile{"data/file1",ios::binary};
if(myfile){
myfile.read(reinterpret_cast<char*>(&x), sizeof (x));
myfile.read(reinterpret_cast<char*>(&y), sizeof (y));
myfile.read(reinterpret_cast<char*>(&z), sizeof (z));
sum = x + y + z;
avg= sum/3;

	if(avg < 75)
	{
	ofstream myfile3{"data/file3"};
		if(myfile3){
		myfile3.write(reinterpret_cast<char*>(&lA), sizeof(lA));
		cout <<lA<<lA<<lA<<endl;
		}
	else
	cout<<"error data/file3 not found"<<endl;
	}

	if(avg >150)
	{
	ofstream myfile3{"data/file3"};
		if(myfile3){ 
		myfile3.write(reinterpret_cast<char*>(&mA), sizeof(mA));
		cout <<mA<<mA<<mA<<endl;
		}
	else
	cout<<"error data/file3 not found"<<endl;
	}

	else
	{
      ofstream myfile3{"data/file3"};
            if(myfile3){ 
                myfile3.write(reinterpret_cast<char*>(&zA), sizeof(zA));
              cout <<zA<<zA<<zA<<endl;
            }
       else
       cout<<"error data/file3 not found"<<endl;
       }


}
else
cout <<"error data/file1 not found"<<endl;;

myfile.close();
}
