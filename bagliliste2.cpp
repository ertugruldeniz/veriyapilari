//D�NG�NELER� KULLANARAK BA�LI L�STE YAPIMI
#include <stdio.h>

#include <stdlib.h>

struct liste{
	
	
	int data ;
	
	liste*next;
	
};


typedef liste node;

//link list i�eri�ini yazd�ran fonksiyon
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
		
		//D�NG� �LE BA�LI L�STE SONUNA ELAMAN EKKET�YORUZ 
		iter->next=(node *)malloc(sizeof(node));
		
		iter->next->data=x;
		
		iter->next->next=NULL;
			
	
}

int main() {
	
	node *root ; //K�K D�Z�N
	
	
	root=(node*)malloc(sizeof(node));
	
	root->data=5;
	
	root->next=NULL;
	
	int i=0;
	
	
	for(i=0; i<5;i++){
	
		ekle(root,i*2);
	}
	

	yazdir(root); // yazdir(root->next); de ba�lat�labilir
	
}
