#User function Template for python3
'''
Function Arguments :
		@param  : q ( given queue to be used), k(Integer )
		@return : list, just reverse the first k elements of queue and return new queue
'''

#Function to reverse first k elements of a queue.
def modifyQueue(q,k):
    
    #using a stack and another queue to reverse first k elements.
    stack= []
    ansqueue = []

    #we pop first k elements from queue and push it in the stack.
    for i in range(k):
        stack.append(q.pop(0))

    #while stack is not empty, we push the elements into the new queue.
    while len(stack):
        ansqueue.insert(0,stack.pop(0))

    #then we add rest of the elements of original queue to the new queue.
    while len(q):
        ansqueue.append(q.pop(0))

    #returning the new queue.
    return ansqueue
#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n,k = map(int,input().strip().split())
        a = list(map(int,input().strip().split()))

        queue = [] # our queue to be used
        for i in range(n):
            queue.append(a[i]) # enqueue elements of array in our queue

        print(*modifyQueue(queue,k))
# } Driver Code Ends