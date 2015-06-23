#include<stdio.h>
#include<iostream>
#include <string.h>
using namespace std;
 
int main() {
	int n,k,m;
	int ka[301];
	unsigned char ch;
    int v;
 
	scanf("%d\n", &n);
	while(n--){
		scanf("%d\n", &k);
 
    memset(ka, 0, sizeof ka);
 
	for (int j=0; j<k; j++){
		scanf("%c %d\n", &ch, &v);
		ka[ch] = v;
		//printf("ka= %d %d ", ch, v);
	}
	scanf("%d\n",&m);
	unsigned char c;
	double res=0.0;
	while(m--){
	while((c = getchar()) != '\n'){
            //printf("%ld %c %d\n", res, c, c);
            res += ka[c];
            }
 
    }
    printf("%0.2f$\n", res/100.0);
 
	}
	return 0;
}
