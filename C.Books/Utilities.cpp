#include "stdafx.h"
#include "Utilities.h"
#include <cctype>
#include <vector>
#include <numeric>

//#include <algorithm>
//#include <iterator>
#include <array>
#include <string>

#include <amp.h>

Utilities::Utilities()
{
}

string Utilities::setCCType()
{
	string str("codestacks");
	tolower(10);
	return nullptr;
}

int Utilities::setVector() {
	vector<int> v;
	v.push_back(10);

	int i = v[0];
	cout << i << endl;

	try
	{
		i = v[1];
		cout << "--try--" << endl;
	}
	catch (const std::exception& s)
	{
		cout << "err:\n" << endl;
		cout << s.what() << endl;
	}
	return i;
}

template <typename C> void print(const string &s, const C &c) {
	cout << s;
	for (const auto &e : c) {
		cout << e << " ";
	}
	cout << endl;
}

int Utilities::setVectorDemo()
{
	vector<int> v(16);
	iota(v.begin(), v.end(), 0);
	print("v:", v);

	vector<int> v2(16);
	transform(v.begin(), v.end(), v2.begin(), [](int n) {return n * 2; });
	print("v2:", v2);

	vector<int> v3;
	transform(v.begin(), v.end(), back_inserter(v3), [](int n) {return n * 3; });
	print("v3:", v3);

	std::array<int, 16> a4;
	transform(v.begin(), v.end(), a4.begin(), [](int n) {return n * 4; });
	print("a4:", a4);

	int a5[16];
	transform(v.begin(), v.end(), a5, [](int n) {return n * 5; });
	print("a5:", a5);

	int a6[16];
	int *p6 = a6;
	transform(v.begin(), v.end(), p6, [](int n) {return n * 6; });
	print("a6:", a6);

	int a7[16];
	int *p7 = a7;
	transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) {return n * 7; });
	print("a7:", a7);

	int a8[16];
	int *p8 = a8;
	transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) {return n * 8; });
	print("a8:", a8);

	return 1;



}


const int _size = 5;
int Utilities::setParallelism()
{
	//generation
	//int aCPP[] = { 1,2,3,4,5 };
	//int bCPP[] = { 6,7,8,9,10 };
	//int sumCPP[5];

	//string str;
	//for (size_t i = 0; i < 5; i++)
	//{
	//	sumCPP[i] = aCPP[i] + bCPP[i];
	//	str += sumCPP[i];
	//}
	//cout << str << endl;

#pragma region Concurrency 这段代码无法在CPU下调式，因为vs不能即在CPU又在GPU下进行调试行为
					//parallelism
	int _aCPP[] = { 1,2,3,4,5 };
	int _bCPP[] = { 6,7,8,9,10 };
	int _sumCPP[_size];

	array_view<const int, 1> a(_size, _aCPP);//在这里会报告异常，原因可能是没有GPU
	array_view<const int, 1> b(_size, _bCPP);
	array_view<int, 1> sum(_size, _sumCPP);
	sum.discard_data();

	parallel_for_each(sum.extent, [=](index<1> idx)restrict(amp) {
		sum[idx] = a[idx] + b[idx];
	});

	string _cout = "concurrency::";
	string _sumStr;
	for (size_t i = 0; i < _size; i++)
	{
		_sumStr = sum[i];
		_cout = _cout + _sumStr;
		/*cout << sum[i] << endl;*/
	}
	cout << _cout << endl;
#pragma endregion


	int eCPP[] = { 1,2,3,4,5 };
	array_view<int, 1> a1(5, eCPP);


	index<1> idx(2);

	cout << a1[idx] << endl;

	return 1;
}

int Utilities::setGPUDebug1() {

	return 1;
}


Utilities::~Utilities()
{
}
