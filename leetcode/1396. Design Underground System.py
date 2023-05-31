from typing import Dict, Tuple, List

class UndergroundSystem:

    def __init__(self):
        self.id: Dict[int, (str, int)] = {}
        self.data: Dict[Tuple[str, str], List[int]] = {}

    def checkIn(self, id: int, stationName: str, t: int) -> None:
        self.id[id] = (stationName, t)

    def checkOut(self, id: int, stationName: str, t: int) -> None:
        self.data[(self.id[id][0], stationName)] = self.data.get((self.id[id][0], stationName), []) + [t - self.id[id][1]]
        del self.id[id]

    def getAverageTime(self, startStation: str, endStation: str) -> float:
        return sum(self.data[(startStation, endStation)]) / len(self.data[(startStation, endStation)])


# Your UndergroundSystem object will be instantiated and called as such:
# obj = UndergroundSystem()
# obj.checkIn(id,stationName,t)
# obj.checkOut(id,stationName,t)
# param_3 = obj.getAverageTime(startStation,endStation)