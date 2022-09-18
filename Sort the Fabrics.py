'''
final=[]
n=int(input())
for _ in range(n):
	c=[]
	d=[]
	u=[]
	n=int(input())
	for _ in range(n):
		t1,t2,t3=input().split()
		c.append(t1)
		d.append(int(t2))
		u.append(int(t3))
	c_id=[id(i) for i in c]
	d_id=[id(i) for i in d]
	c1=c
	d1=d
	u1=u.copy()
	c1.sort()
	c1_id=[id(i) for i in c1]
	d1.sort()
	d1_id=[id(i) for i in d1]
	#print(c1_id)
	#print(c_id)
	count=0
	
	for i in range(len(c)):
		if c_id[i]==c1_id[i] and d_id[i]==d1_id[i]:
			count+=1
	final.append(count)
	
	
for i in range(len(final)):
	print(f"Case #{i+1}: {final[i]}")
'''




final=[]
k=int(input())
for _ in range(k):
	c=[]
	d=[]
	u=[]
	count=0
	n=int(input())
	for _ in range(n):
		t1,t2,t3=input().split()
		c.append(t1)
		d.append(int(t2))
		u.append(int(t3))

	dic1=list(zip(c,u))
	dic2=list(zip(d,u))
	#print(dic1)
	#print(dic2)
	#print("===========")
	#dic1.sorted()
	#dic1.sorted(lambda x[0]: x)
	#dic2.sorted(lambda x[0]: x)
	dic1.sort()
	dic2.sort()
	#print(dic1)
	#print(dic2)
	for i in range(n):
		if dic1[i][1]==dic2[i][1]:
			count+=1
	final.append(count)
	
for i in range(len(final)):
	print(f"Case #{i+1}: {final[i]}")

