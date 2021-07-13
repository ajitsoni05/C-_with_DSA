void printTree(TreeNode<int>* root)
{
	//Edge case (not a base case)
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++)
	{
		if(i==root->children.size()-1)
		{
			cout<<root->children[i]->data;
			continue;
		}
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printTree(root->children[i]);
	}
}
