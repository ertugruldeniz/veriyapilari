#include <stdio.h>

#include <stdlib.h>

struct liste{
	
	
	int data ;
	
	liste*next;
};


typedef liste node;


int main() {
	
	node *root ;
	
	node *iter;
	
	root=(node*)malloc(sizeof(node));
	
	root->data=10;
	
	root->next=(node*)malloc(sizeof(node));
	
	root->next->data=20 ;
	
	iter=root;

	printf("%d",iter->data);
	
	printf(" --> ");	
	iter=iter->next;
	
	printf("%d",iter->data);
	
	
}
