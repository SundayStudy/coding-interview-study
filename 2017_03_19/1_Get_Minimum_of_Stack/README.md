# Get Minimum of Stack

GetMinimum() 이 O (1) 이어야 하는 스택은 어떻게 설계할 수 있을까?

## Reference

[코딩 인터뷰 퀘스천](http://www.kyobobook.co.kr/product/detailViewKor.laf?barcode=9788931447842)
 5장 스택 문제 5번

## Answer

스택 내의 모든 값들의 최소값을 유지하는 보조 스택(min stack)을 채용합니다.

Main 스택에 push할 때는 min 스택의 top 요소와 비교하여 작거나 같으면 min 스택도 push<br>
Main 스택에 pop할 때는 min 스택의 top 요소와 값이 같으면 min 스택도 pop

```python
class Stack:
    _list = None

    def __init__(self):
        self._list = []

    def push(self, x):
        self._list.append(x)

    def peek(self):
        if len(self._list) == 0:
            return None
        return self._list[-1]

    def pop(self):
        if len(self._list) == 0:
            return None
        e = self._list[-1]
        self._list[-1:] = []
        return e


class AdvancedStack:
    _main_stack = None
    _min_stack = None

    def __init__(self):
        self._main_stack = Stack()
        self._min_stack = Stack()

    def push(self, x):
        self._main_stack.push(x)
        if self._min_stack.peek() is None or self._min_stack.peek() >= x:
            self._min_stack.push(x)

    def peek(self):
        return self._main_stack.peek()

    def pop(self):
        e = self._main_stack.pop()
        if e is not None and self._min_stack.peek() == e:
            self._min_stack.pop()
        return e

    def get_minimum(self):
        print(self._min_stack.peek())
        return self._min_stack.peek()
```
