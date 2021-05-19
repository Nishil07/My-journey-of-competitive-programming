# Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

def merge(intervals):
        intervals.sort(key = lambda x: x[0])
        i=-1
        while(True and i<len(intervals)-2):
            i+=1
            if(intervals[i][1]>=intervals[i+1][0]):
                if(intervals[i][1]>intervals[i+1][1]):
                    intervals.remove(intervals[i+1])
                else:
                    intervals[i][1]=intervals[i+1][1]
                    intervals.remove(intervals[i+1])
                i=-1
        return intervals
