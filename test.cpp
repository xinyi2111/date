////#include<iostream>
////using namespace std;
////class Date
////{
////public:
////	bool IsLeap(int year)
////	{
////		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
////	}
////	// 获取某年某月的天数
////	int GetMonthDay(int year, int month)
////	{
		//static int days[13] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		//if (month == 2 && IsLeap(year))
		//	month = 0;
		//return  days[month];
////	}
////	
////	Date(int day, int month, int year)
////		: m_day(day), m_month(month), m_year(year)
////	{}
////	~Date()
////	{}
////	
////private:
////	int m_day;
////	int m_month;
////	int m_year;
////
//////};
//#include<iostream>
//
//using namespace std;
//int main(){
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << "score1=" << a << ",score2=" << b << ",score3=" << c << endl;
//}
//#include<iostream>
//using namespace std;
//class Date
//{
//	friend ostream& operator<<(ostream &out, const Date&d);
//public:
//	bool IsLeap(int year)//判断闰年
//	{
//		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//	}
//	int Getdate(int year, int month)//获取某年某月的天数
//	{
//		static int days[13] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (month = 2 && IsLeap(year))
//			month = 0;
//		return days[month];
//	}
//	Date( int year,int month,int day)
//		:m_day(day), m_month(month), m_year(year)//初始化
//	{}//构造函数
//	Date& operator+=(int day)
//	{
//		int days = Getdate(m_year, m_month);
//		while (m_day + day > days)
//		{
//			m_month++;
//			if (m_month > 12)
//			{
//				m_year++;
//				m_month = 1;
//			}
//			day -= days;
//			days = Getdate(m_year, m_month);
//		}
//		m_day += day;
//		return *this;
//	}
//	~Date()
//	{}//析构函数
//
//
//private:
//	int m_day;
//	int m_month;
//	int m_year;
//};
//
//ostream& operator<<(ostream &out, const Date&d)
//{
//	out << d.m_year << "-" << d.m_month << "-" << d.m_day;
//	return out;
//}
//int main()
//{
//	int day;
//	int month;
//	int year;
//	Date  dt(year, month, day);
//	cout << "dt = " << dt << endl;
//	dt += day;
//	cout << "dt = " << dt << endl;
//}
#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i<n; i++)
		{
			int y, m, d, num;
			int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			cin >> y >> m >> d >> num;
			while (num>days[m - 1])
			{
				if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
					days[1] = 29;
				else
					days[1] = 28;
				num -= days[m - 1] - d;
				d = 0;
				m++;
				if (m == 13)
				{
					y++;
					m = 1;
				}
			}
			cout << "" << y << "-" << m << "-" << num;
			
		}
	}
	return 0;
}