class MyHashSet:

    def __init__(self):
        self.container = [False] * int(1e6+1)
        

    def add(self, key: int) -> None:
        self.container[key] = True

    def remove(self, key: int) -> None:
        self.container[key] = False

    def contains(self, key: int) -> bool:
        return self.container[key]


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)