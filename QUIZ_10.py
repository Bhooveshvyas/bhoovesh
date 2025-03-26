from collections import deque

dq=deque(["BHOOVESH","ANIKET","PINKI"])
print("THE CURRENT INITIAL DEQUE : ",dq)
dq.append("HARSH")
dq.appendleft("AYUSH")
dq.append("PRIYANSHU")
print("DEQUE AFTER APPENDING",dq)
dq.pop()
dq.popleft()
print("DEQUE AFTeR POPING : ",dq)
dq.rotate(1)
print("DEQUE AFTER ROTATING 1 :",dq)