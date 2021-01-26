#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...)printf(VA_ARGS)
#endif

int main() {
char Bbitovni[8],piseci;
int a=11100100,brojac=7,zz;
Bbitovni[0]='0';
Bbitovni[1]='0';
Bbitovni[2]='0';
Bbitovni[3]='0';
Bbitovni[4]='0';
Bbitovni[5]='0';
Bbitovni[6]='0';
Bbitovni[7]='0';

	
	p 
		
		
while(b>0){
	zz=b%10;
	Bbitovni[brojac]=zz + '0';
	brojac-=1;
	b/=10;
}
for(int i=0; i<8; i++){
	printf("%c\n", Abitovni[i]);
}
  return 0;
}

