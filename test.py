from dsapp import HashMap, Stack, Queue, quick_sort

# HashMap
h = HashMap()
h.put("a", 1)
h.put("b", 2)
print("HashMap keys:", h.keys())

# Stack
s = Stack()
s.push(10)
s.push(20)
print("Stack top:", s.top())
print("Stack pop:", s.pop())

# Queue
q = Queue()
q.push(5)
q.push(10)
print("Queue front:", q.front())
print("Queue pop:", q.pop())

# Sort
arr = [5, 1, 4, 2, 3]
quick_sort(arr)
print("Sorted:", arr)
