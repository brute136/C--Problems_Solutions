#include <iostream>
#include <string>
using namespace std;
int fun(int a, int b, int c, int d){
  //  int b = 
  int v =  max(a, b);
  int g = max(c, d);
  if (v>g){
      return v;
  }
  else{
      return g;
  }
}
//func//
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	cout<<fun(a, b, c, d);
	
	return 0; 
}
    //My 6rd Problem Solved In HackerRank At The Age Of 13 
	//Date 31/August/2021
	//TeenX
     