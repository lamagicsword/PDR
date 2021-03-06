//Yujian Li(yl7kd) huffmantree.cpp 04/18/16 Section 102

#include "huffmantree.h"
#include "huffmannode.h"
#include "binary_heap.h"
#include <string>

using namespace std;

huffmantree::huffmantree(){
	root = NULL;
}

huffmantree::huffmantree(huffmannode* input){
	root = input;
}

huffmantree::~huffmantree(){
	
}
huffmannode* huffmantree::getroot(){
	return root;
}
binary_heap* huffmantree::sort(binary_heap* h){

	while(h->size()>1){
		huffmannode* le = h->deleteMin();
		huffmannode* ri = h->deleteMin();
		//	cout<< le->getcontent()<<" "<<ri->getcontent()<<endl;
	    int freq = 0;
	    freq = (le->getfrequency())+(ri->getfrequency());
		huffmannode* newnode = new huffmannode(freq,'0');
		newnode->left=le;
		newnode->right=ri;
		h->insert(newnode);
	}
	return h;
}


void huffmantree:: print(huffmannode* root, string code){
	if(root->left==NULL&&root->right==NULL){
		if(root->content==' '){
			root->code = code;
			cout<<"space "<<code<<endl;
			}
		else{
			root->code = code;
		cout<<root->getcontent()<<" "<<code<<endl;
		}
				collection[root->getcontent()]=code;
	}
    if(root->left!=NULL){
		//	cout<<root->getcontent()<<endl;
		print(root->left, code+"0");
	}
    if(root->right!=NULL){
		//	cout<<root->getcontent()<<endl;
		print(root->right, code+"1");
	}
}

