public static int countOnlys(TreeNode t)
  {
     if(t == null || numberOfChildren(t)==0){
         return 0;
     }
     if(numberOfChildren(t)==1){
         return 1+ countOnlys(t.getLeft()) + countOnlys(t.getRight());
     }
         if(numberOfChildren(t)==2 ){
         return countOnlys(t.getLeft()) + countOnlys(t.getRight());
    }
         return 0;
  }

public static int numberOfChildren (TreeNode t){
    int count = 0;
    if(t.getLeft() != null ) count++;
    if(t.getRight() != null) count++;       
    return count;   
    }
