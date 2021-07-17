
#include<iostream>
using namespace std;

struct TNode{
	int data;
	TNode *left, *right;
};

typedef TNode *Tree;

void Init(Tree &root){
	root = NULL;
}

TNode *createNode(int x){
	TNode *p = new TNode;
	if(!p) exit(1);
	p->data = x;
	p->left = p->right =  NULL;
	return p;
}


void insertNode(Tree &root, int x){
	if(root){
		if(root->data == x ) return;
		else
			if( x < root->data ) insertNode(root->left, x);
			else insertNode(root->right, x);
	}else{
		TNode *p = createNode(x);
		root = p;
	}
}

void createTree(Tree &root){
	int n;
	cout<< "\nEnter the number of Tree elements: ";
	cin>> n;
	int x;
	while(n--){
		cout<<"\nEnter the next element: ";
		cin>> x;
		insertNode(root, x);
	}
}

void LNR(Tree root){
	if(root){
		LNR(root->left);
		cout<< root->data << " ";
		LNR(root->right);
	}
}

void countLeafNode(Tree t, int &count ){
	if(t){
		countLeafNode(t->left, count);
		if(t->left == NULL && t->right == NULL ) count++;
		countLeafNode(t->right, count);
	}
}


int main(){
	/* tree: 50
		    /  \
		  30    70
		  /\	 /\
		20  40  60 90
	
	*/
	Tree root;
	Init(root);
	createTree(root);
	LNR(root);
	int count = 0;
	countLeafNode(root,count);
	cout<< "\ncay nhi phan co "<< count << " node la";
	return 0;	
}
