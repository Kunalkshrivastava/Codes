#include<iostream>
using namespace std;

class bt{
	public:
		int data;
		bt * left;
		bt * right;
		
	bt(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

bt * helper(int *in, int *pre, int inS, int inE, int preS, int preE){
	
	if(inS>inE){
		return NULL;
	}
	int rootData = pre[preS];
	int rootIndex = -1;
	for(int i= inS; i<= inE; i++){
		if(in[i] == rootData){
			rootIndex = i;
			break;
		}
	}
	
	int lInS = inS;
	int lInE = rootIndex - 1;
	int lPreS = preS + 1;
	int lPreE = lInE - lInS + lPreS;
	
	int rInS = rootIndex + 1;
	int rInE = inE;
	int rPreS = lPreE + 1;
	int rPreE = preE;
	
	bt * root = new bt(rootData);
	root->left = helper(in,pre,lInS,lInE,lPreS,lPreE);
	root->right = helper(in,pre,rInS,rInE,rPreS,rPreE);
	return root;
}

bt * pretopost(int *in, int *pre,int size){
	
	return helper(in,pre,0,size-1,0,size-1);
	
}
void treeprint(bt * root){
	if(root == NULL)
		return;
	cout<<root->data;
	if(root->left != NULL)
		cout<<" :left "<<root->left->data;
	if(root->right != NULL)
		cout<<" :right "<<root->right->data;
	cout<<endl;
	treeprint(root->left);
	treeprint(root->right);
}
int main(){
	//bt * root = new bt();
	int in[] = {4,2,5,1,8,6,9,3,7};
	int pre[] = {1,2,4,5,3,6,8,9,7};
	bt * root = pretopost(in,pre,9);
	treeprint(root);
	//pretopost(in,pre);
}
