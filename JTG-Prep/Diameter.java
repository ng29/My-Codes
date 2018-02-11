

int diameter(Node root){
	int res=0;
	if(root==null)	return 0;
	
	int l,r;
	res=diameter(root.left,root,right);
	l=maxdep(root.left);
	r=maxdep(root.right);
	
	return MATH.max(res,MATH.max(l,r));
}

int maxdep(Node root){
	if(root==null)	return 0;
	return 1+ maxdep(root.left,root.right);
}
