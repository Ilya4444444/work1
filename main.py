from collections import deque
import heapq

# MultiList: контейнер нескольких списков
class MultiList:
    def __init__(self):
        self.lists = []
    def add_list(self):
        self.lists.append([])
    def append(self, idx, value):
        self.lists[idx].append(value)
    def get_list(self, idx):
        return self.lists[idx]

# Очередь FIFO
class Queue:
    def __init__(self):
        self._q = deque()
    def enqueue(self, value):
        self._q.append(value)
    def dequeue(self):
        return self._q.popleft() if self._q else None
    def is_empty(self):
        return not self._q

# Дек — двунаправленная очередь
class Deque:
    def __init__(self):
        self._d = deque()
    def append_right(self, value):
        self._d.append(value)
    def append_left(self, value):
        self._d.appendleft(value)
    def pop_right(self):
        return self._d.pop() if self._d else None
    def pop_left(self):
        return self._d.popleft() if self._d else None
    def is_empty(self):
        return not self._d

# Приоритетная очередь (минимальная)
class PriorityQueue:
    def __init__(self):
        self._h = []
    def push(self, value):
        heapq.heappush(self._h, value)
    def pop(self):
        return heapq.heappop(self._h) if self._h else None
    def peek(self):
        return self._h[0] if self._h else None
    def is_empty(self):
        return not self._h
