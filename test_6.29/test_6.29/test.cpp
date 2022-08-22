#include<iostream>
using namespace std;

#include<string>

//int main()
//{
	/*cout << "hello world" << endl;
	int a = 10;
	cout << "a=" << a << endl;
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;
	char c = 'A';
	cout << (int)c << endl;*/
	//string str = "hello world";
	//char s[] = "yess hello world";
	//cout  <<str<<"\t" << s << endl;\

	/*int a = 0;
	cin >> a;
	cout << a << endl;*/
	//double a = 0.5;
	//double b = 0.1;
	//cout << a / b << endl;
	//int num1;
	//int num2;
	//int num3;
	//
	//while (1)
	//{
	//	cin >> num1;
	//	cin >> num2;
	//	cin >> num3;
	//	if (num1 > num2)
	//	{
	//		if (num2 > num3)
	//		{
	//			cout << "a最大，c最小" << endl;
	//		}
	//		else if (num1 < num3)
	//		{
	//			cout << "c最大,b最小" << endl;
	//		}
	//		else if (num3 > num2 && num3 < num1)
	//		{
	//			cout << "a最大，b最小" << endl;
	//		}
	//	}
	//	if (num1 < num2)
	//	{
	//		if (num1 > num3)
	//		{
	//			cout << "b最大，c最小" << endl;
	//		}
	//		if (num2 < num3)
	//			cout << "c最大，a最小" << endl;
	//		if (num3 > num1 && num3 < num2)
	//			cout << "b最大,a最小" << endl;
	//	}
	//}
	//int i = 999;
	//while (i > 100)
	//{
	//	int sum = 0;
	//	int a = i;
	//	while (a)
	//	{
	//		sum += pow(a % 10, 3);
	//		a / 10;
	//	}
	//	if (sum == i)
	//		cout << i << endl;
	//	i--;
	//}
	//int i = 1;
	//int count = 0;
	//while (i<100)
	//{
	//	if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
	//	{
	//		cout << i<<" ";
	//		count++;
	//	}
	//	i++;
	//}
	//cout <<"\n" << count << endl;
//	int a = 0;
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//	}
////	return 0;
////}
//int main()
//{
//	/*for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}*/
//	for (int i = 1; i < 9; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			cout << j<<"*"<<i<<"="<<i*j<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz-1; i++)
//	{
//		int sum = (arr[i]>arr[i+1]) ?arr[i] :arr[i+1] ;
//		max = (max > sum) ? max : sum;
//	}
//	cout << max << endl;
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] <<" ";
//	}
//	return 0;
//}
//int main()
//{
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz ; i++)
//	{
//		cout << arr[i] << " ";
//
//	}
//	return 0;
//}
void swap(int* x, int* y)
{
	cout << "swap a= " << *x << "   b=" << *y << endl;
	int t = *x;
	*x = *y, *y = t;
	cout << "over a= " << *x << "   b=" << *y << endl;

}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	cout << "a= " << a << "   b=" << b<<endl;
	return 0;
}