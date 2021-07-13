TreeNode<int>* takeInput()
{
  int rootdata;
  cout<<"Enter root data"<<endl;
  cin>>rootdata;
  TreeNode<int>*root =new TreeNode<int>(rootdata);
  
  int n;
  cout<<"Enter the number of children of root"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   TreeNode<int>* child=takeInput();
    root->children.push_back(child);
  }
  return root;
}
