

// utility function which calculates
    // sum of all leaf nodes

int leafsum(Node root){
	int ans=0;
	if(root==null)
		return ;
		
	if(root.left==null && root.right==null)
		ans+=root.data;
		
	leafsum(root.left);
	leafsum(root.right);
}
