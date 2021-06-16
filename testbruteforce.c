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

bool main(){
	
	bool menang, game;
	int k[] = {0,4,5,4,3,6};
	int p[] = {0,2,4,5};
	int i,j,n,cocok;
	
	game = true;

	while (game==true)
	{
		for(i=0;i<sizeof(p)/sizeof(int);i++){
			for(j=0;j<sizeof(k)/sizeof(int);j++){
			cocok = DapatDimasukan(k[j],p[i]);
			
			if(cocok!=""){
				printf("%d\n",cocok);
			}
			}
		}
		game=false;
	}
}
