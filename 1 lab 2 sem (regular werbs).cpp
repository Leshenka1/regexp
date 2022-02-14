#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <regex>
#include <iterator>

using namespace std;

int main()
{
	//int z = 2;
	//string temp = "^([0-255].){3}[";
	//if (z == 2) {
	//	temp = temp + to_string(z) + "][0{0,2}-55]?$";
	//}
	//else if (z == 0) {
	//	temp = temp + to_string(z) + "]$";
	//}
	//else if (z == 1) {
	//	temp = temp + to_string(z) + "][0-9]{0,2}?$";
	//}
	//temp = temp + to_string(z) + "][0-99]?";
	//cout << temp << endl;
	string outfname,infname;

	cout << "Enter input file name" << "\n";
	cin >> infname;

	ifstream inf(infname);
	if (!inf)
	{
		cerr << "input file is not exist "<<"\n";
		exit(1);
	}

	cout << "Enter output file name" << "\n";
	cin >> outfname;

	ofstream outf(outfname);
	if (!outf)
	{
		cerr << "output file can not be open " << "\n";
		exit(1);
	}

	string s;

	cout << "Enter number " << "\n";
	int v ;
	cin >> v;

	//regex e("\\b(?!(0{2,3}\.))(\\d{1,3}\.){3}\\d{1,3}\\b");
	//regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.|$)){4}\\b");

	if (v == 0)
	{
		while (inf)
		{
			getline(inf, s);
			//regex e("^([0-255].){3}[0-255]$");
			regex e("([0-255]\.){3}((0))");
			outf << regex_replace(s, e, "")<<"\n";
		}
	}

	if (v == 1)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((1[0-9][0-9]|1[0-9]|1))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 2)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((25[0-5]|2[0-4][0-9]|2[0-9]|2))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 3)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((3[0-9]|3))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 4)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((4[0-9]|4))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 5)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((5[0-9]5))\\b");
			outf << regex_replace(s, e, "")<<"\n";
		}
	}

	if (v == 6)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((6[0-9]|6))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 7)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((7[0-9]|7))\\b");
			outf << regex_replace(s, e, "")<<"\n";
		}
	}

	if (v == 8)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((8[0-9]|8))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}

	if (v == 9)
	{
		while (inf)
		{
			getline(inf, s);
			regex e("\\b((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])(\.)){3}((9[0-9]|9))\\b");
			outf << regex_replace(s, e, "") << "\n";
		}
	}



			outf.close();

	return 0;
}

