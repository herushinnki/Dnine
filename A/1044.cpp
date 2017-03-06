#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
using namespace std;

char str1[30],str2[30];
string pre,post;
int n;
int c[23][23];
void initc(){
	c[1][0] = c[1][1] = 1;
	for(int i=2; i<23; i++){
		c[i][0] = 1;
		for(int j=1; j<=i; j++){
			c[i][j] = c[i-1][j] + c[i-1][j-1];
		}
	}
}
int getCnt(string left,string right){
	int cnt=0;
	int res = 1;
	if(left.size() <= 1) return n;
	for(int i=0; i<left.length();){
		int j=i;
		while(j<left.length() && right[j] != left[i]) j++ ;
		if(j>i)
			res *= getCnt(left.substr(i+1,j-i), right.substr(i,j-i));
		cnt++;
		i = j+1;
	}
	res *= c[n][cnt];
	return res;
}

int main() {
	initc();
	while(cin >> n ){
		if(!n) break;
		cin >>  pre >> post;
		int ans = 1;
		if(pre.length() > 1)
			ans = getCnt(pre.substr(1,pre.length()-1), post.substr(0, pre.length()-1) );
		cout << ans << endl;
	}
	return 0;
}
