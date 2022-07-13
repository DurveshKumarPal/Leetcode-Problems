#User function Template for python3

#Function to reverse the queue.
def rev(q):
    #using a stack to reverse the queue.
    stack=[]
    
    #pushing elements from queue into stack and removing them from queue.
    while(q.qsize()!=0):
        x=q.get()
        stack.append(x)
        
        
    #now pushing elements back into the queue from stack and removing them 
    #from stack. queue gets reversed as stack follows last in first out.
    while(len(stack)!=0):
        x=stack.pop()
        q.put(x)
        
    #returning reversed queue.
    return q

#{ 
#  Driver Code Starts
#Initial Template for Python 3

from queue import Queue
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        a=list(map(int,input().split()))
        q=Queue(maxsize=n+1)
        for j in a:
            q.put(j)
        q=rev(q)
        for i in range(0,n):
            print(q.get(),end=" ")
        print()
# } Driver Code Ends