# include<iostream>
# include<fstream>
using namespace std;
     
int main()
{
	ofstream ofs("my.text",ios::trunc);
	ofs<<"Yogesh"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
}