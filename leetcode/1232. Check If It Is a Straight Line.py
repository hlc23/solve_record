from typing import List

class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        x0, y0 = coordinates[0][0], coordinates[0][1]
        x1, y1 = coordinates[1][0], coordinates[1][1]
        dx = x1 - x0
        dy = y1 - y0
        for xn, yn in coordinates:
            if (xn - x0) * dy != dx * (yn - y0):
                return False
        return True
