//donguleri kullanarak bagli liste yapimi
#include <stdio.h>

#include <stdlib.h>

struct liste{
	
	
	int data ;
	
	liste*next;
	
};


typedef liste node;

//link list icerigini yazdiran fonksiyon
void yazdir(node *iter){
	int sayac=1;
	while(iter!=NULL){
		
		printf("\n%d.incidegeri:%d ",sayac,iter->data);
		iter=iter->next;
		sayac++;
	}
}

void ekle(node *iter,int x){
	
	while(iter->next!=NULL){
	
			iter=iter->next;
		}
		
		//listenin sonuna elaman ekleyip en sondaki degeri null yapıyoruz
		iter->next=(node *)malloc(sizeof(node));
		
		iter->next->data=x;
		
		iter->next->next=NULL;
			
	
}

int main() {
	
	node *root ; //KÖK dizin
	
	
	root=(node*)malloc(sizeof(node));
	
	root->data=5;
	
	root->next=NULL;
	
	int i=0;
	
	
	for(i=0; i<5;i++){
	
		ekle(root,i*2);
	}
	

	yazdir(root); //yazdirmaya root elemanından basla ve devam et.
	
}
