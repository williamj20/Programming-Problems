# Accepted: 01/12/21
# Runtime: 112ms (faster than 99.80%)

class Solution(object):

    # Helper function
    def _getSecondElem(self, boxTypes):
        return boxTypes[1]

    def maximumUnits(self, boxTypes, truckSize):
        """
        :type boxTypes: List[List[int]]
        :type truckSize: int
        :rtype: int
        """
        num_units = 0
        boxTypes.sort(key=self._getSecondElem, reverse=True)
        for num_boxes, units_per_box in boxTypes:
            if truckSize > num_boxes:
                truckSize -= num_boxes
                num_units += units_per_box * num_boxes
            else:
                num_units += units_per_box * truckSize
                truckSize -= truckSize
                break
        return num_units
