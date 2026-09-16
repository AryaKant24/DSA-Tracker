# Notes

## Approach
1. Create a map to store inorder value and its index for retrieval
2. Next pick up the last element of postorder. 
3. Find it in inorder. Elements to left of it are its leftsubtree and to the right are the right subtree.
4. Track the start, end of inorder and start, end of postorder. 
5. Keep on repeating this process. 

_____ X ______ TO the left is the left array and to the right the right array i.e. subtrees

## Mistakes
Observation solves the problem
## Time Complexity

## Space Complexity

## Edge Cases