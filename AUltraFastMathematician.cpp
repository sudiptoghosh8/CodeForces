#include<bits/stdc++.h>
using namespace std;
int main(){
	
	char kata[105] ; 
	char num[105] ;   	
	scanf("%s", kata) ; 
	scanf("%s", num) ; 
	int len = strlen(kata) ; 
	for(int i = 0 ; i < len ; i++){
		if(kata[i] != num[i]){
			num[i] = '1' ; 
		}else{
			num[i] = '0' ; 
		}
	}
	printf("%s\n", num) ; 
	return 0 ; 
}
 