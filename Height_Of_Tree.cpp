#include<bits/stdc++.h>
using namespace std;

struct binaryTree
{
	int data;
	struct binaryTree *left,*right;
};

binaryTree *createNewNode(int data)
{
	struct binaryTree *newNode=new(binaryTree);
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void maxHeight(struct binaryTree *root)
{
	if(root==NULL || (root->left==NULL && root->right==NULL))
		return;
	
	//cout<<root->data<<" ";	
	if(root->left->data<=root->right->data)
	{
		cout<<root->left->data<<" ";
		maxHeight(root->left);	
	}	
	else
	{
		cout<<root->right->data<<" ";
		maxHeight(root->right);			
	}		
		
}

void printTree(struct binaryTree *root)
{
	queue<binaryTree*> q;
	
	q.push(root);
	
	
	while(!q.empty())
	{
		binaryTree *temp=q.front();
		q.pop();
		
		cout<<temp->data<<" ";
		
		if(temp->left)
			q.push(temp->left);
		
		if(temp->right)
			q.push(temp->right);	
	}
	
	cout<<endl;
	return;
}

int main()
{
	binaryTree *root=createNewNode(1);
	root->left=createNewNode(2);
	root->right=createNewNode(3);
	root->left->left=createNewNode(4);
	root->left->right=createNewNode(5);
	root->right->left=createNewNode(6);
	root->right->right=createNewNode(7);
	
	cout<<"Level order traversal of Tree is: ";
	printTree(root);
	
	cout<<"\nShortest path according to Hill Climb Algorithm is: "<<root->data<<" ";
	maxHeight(root);
	return 0;
}
