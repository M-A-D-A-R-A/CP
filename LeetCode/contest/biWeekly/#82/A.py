# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        if root.val != 2 and root.val != 3:
            return root.val
        
        if root.val == 2:
            return self.evaluateTree(root.left) | self.evaluateTree(root.right)
        
        if root.val == 3:
            return self.evaluateTree(root.left) & self.evaluateTree(root.right)