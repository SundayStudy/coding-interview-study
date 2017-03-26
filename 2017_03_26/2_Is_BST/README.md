# Is BST

임의의 Binary Tree 가 주어졌을 때, Binary Search Tree 임을 어떻게 확인할 수 있을까?

## Answer

임의의 노드 N에 있는 왼쪽 자식 트리에 있는 노드들은 N 노드의 값보다 작은 값을 가져야 하고,

오른쪽 자식 트리에 있는 노드들은 N 노드의 값보다 큰 값을 가져야 한다.

```python
def isBST(node, min_limit, max_limit):
    if node is None:
        return True
    return (node.data > min_limit) and 
            (node.data < max_limit) and
            (isBST(node.left, min_limit, node.data)) and
            (isBST(node.right, node.data, max_limit))

isBST(root, INT_MIN, INT_MAX)
```

## Reference

[코딩 인터뷰 퀘스천](http://www.kyobobook.co.kr/product/detailViewKor.laf?barcode=9788931447842)

7장 트리 문제 50번

