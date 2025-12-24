#include<iostream>
using namespace std;

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

void operations(char ch,int a,int b);

int main(void)
{
  int num1,num2;
  cout<<"enter two numbers -> ";
  cin>>num1>>num2;

  char opt;
  cout<<"enter operations between(+ or - or *) -> ";
  cin>>opt;

  operations(opt,num1,num2);
}

void operations(char ch,int a,int b)
{
  switch(ch){
    case '+':
    cout<<"Your result = "<<add(a,b)<<endl;
    break;
  }
}

int add(int a,int b){
  return a+b;
}