

int diameter(Node root){
	int res=0;
	if(root==null)	return 0;
	
	int l,r;
	res=maxdep(root.left)+maxdep(root.right);
	l=diameter(root.left);
	r=diameter(root.right);
	
	return MATH.max(res,MATH.max(l,r));
}

int maxdep(Node root){
	if(root==null)	return 0;
	return 1+ MATH.max(maxdep(root.left,root.right));
}
