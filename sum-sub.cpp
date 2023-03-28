#include<iostream>
using namespace std;


int add(int a,int b){

return a + b;

}

int sub(int a, int b){

if(a>b) return a-b;

else return b-a; 

}
int main(){

int a, b, sum, dif;
cout<<"请输入两个数：";
cin>>a>>b;
sum = add(a,b);
dif = sub(a,b);
cout<<"a+b="<<sum<<","<<"|a-b|="<<dif<<endl;
return 0;

}

