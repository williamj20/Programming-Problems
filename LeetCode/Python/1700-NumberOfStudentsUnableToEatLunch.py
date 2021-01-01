# Accepted: 01/01/21
# Runtime: 24ms (faster than 78.72%)

class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        ableToEat = 0
        numStudents = len(students)
        count = 0
        while count < len(students):
            if students[0] == sandwiches[0]:
                ableToEat += 1
                del sandwiches[0]
                del students[0]
                count = 0
            else:
                students.append(students[0])
                del students[0]
                count += 1
        return numStudents - ableToEat
