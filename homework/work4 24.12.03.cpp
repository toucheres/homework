#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	string str;
//	string uername;
//	string domain;
//	string com;
//	cin >> str;
//	if (-1 == str.find("@"))
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//	if (-1 == str.find("."))
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//
//	int numofAt = 0;
//	int numofDot = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == '@')
//		{
//			numofAt++;
//		}
//		if (str[i] == '.')
//		{
//			numofDot++;
//		}
//	}
//	if (numofAt != 1 || numofDot != 1)
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if ((str[i] <= 'z' && str[i] >= 'a') ||
//			(str[i] <= 'Z' && str[i] >= 'A') ||
//			(str[i] <= '9' && str[i] >= '0') ||
//			(str[i] == '.' || str[i] == '@') ||
//			(str[i] == '_' || str[i] == '-'))
//		{
//			continue;
//		}
//		else
//		{
//			cout << "no" << endl;
//			return 0;
//		}
//	}
//	if(str.back() == '.')
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//	if(str.front() == '@'||str.back() == '@')
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//	if(str[find(str.begin(), str.end(), '@') - str.begin()+ 1]=='.')
//	{
//		cout << "no" << endl;
//		return 0;
//	}
//	cout << "yes" << endl;
//}
