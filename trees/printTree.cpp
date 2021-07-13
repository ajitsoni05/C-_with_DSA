void printTree(TreeNode<int>* root)
{
	cout<<root->data<<":"<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		if(i==children.size()-1)
		{
			cout<<root->children[i]->data;
			continue;
		}
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<children.size();i++)
	{
		printTree(root->children[i]);
	}
}
