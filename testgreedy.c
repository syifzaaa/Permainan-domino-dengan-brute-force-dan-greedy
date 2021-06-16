#include <stdio.h>
#include <stdbool.h>

int DapatDimasukan (int k, int p){
//	int sisimasuk, sisipenerima;
	int cocok;
	bool masuk;
	masuk = false;
	if (p==k){
		masuk = true;
		cocok=k;
	}else{
		masuk = false;
		cocok="";
	}
	return cocok;
}

int CekMax(int k[],int p){
	int max, i=0;
	max = k[i];
	for(i=1;i<=sizeof(k)/sizeof(int);i++){
		if(max<k[i]){
			max=k[i];
		}else{
			max=max;
		}
	}
	return max;
}

bool main(){
	
	bool menang, game;
	int k[] = {4,5,4,3,6};
	int p[] = {2,4,5};
	int i,j,cocok,max;
	
	game = true;
	while (game==true)
	{
		for(i=0;i<sizeof(p)/sizeof(int);i++){
			for(j=0;j<sizeof(k)/sizeof(int);j++){
			
			cocok = DapatDimasukan(k[j],p[i]);
			
			if(cocok!=""){
				max=CekMax(k,cocok);
			}
			}
		}
		printf("%d",max);
		game=false;
	}
}
