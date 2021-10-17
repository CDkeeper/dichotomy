#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	double n; //定义待求解数n 
	cin>>n; 
	double l=-10000,r=10000; //定义求解范围 
	while(r-l>=1e-7){ //当范围不满足精度时 
		double mid=(r+l)/2; //二分区间 
		double var=mid*mid*mid; //求解当前区间中值的结果 
		if(var<=n){ //更新区间 
			l=mid;
		}
		else 
		r=mid;
	}
	cout<<fixed<<setprecision(6)<<l; //输出对应要求精度的结果 
	return 0;
} 