proces = int(input())
proceses = []
for i in range(proces):
    proceses.append('p' + str(i+1))
#print(proceses)
    
burst_time = []
arival_time = []

print("Enter the Burst time: ")
for i in range(proces):
    burst_time.append(int(input()))
    
print("Enter the Arival time: ")
for i in range(proces):
    arival_time.append(int(input()))
    
min_arival = 10000
for i in range(proces):
    if(min_arival>arival_time[i]):
        min_arival = arival_time[i]
        
min_burst_index = proces-1

min_burst_time = 1000000

for i in range(proces):
    if(min_arival == arival_time[i]):
        if(min_burst_time > burst_time[i]):
            min_burst_time = burst_time[i]
            min_burst_index = i

p_n = proceses[min_burst_index]
b_t = burst_time[min_burst_index]
a_t = arival_time[min_burst_index]

proceses.pop(min_burst_index)
burst_time.pop(min_burst_index)
arival_time.pop(min_burst_index)

for i in range(proces-1):
    for j in range(proces-i-2):
        if(burst_time[j]>burst_time[j+1]):
            tmp = burst_time[j]
            burst_time[j] = burst_time[j+1]
            burst_time[j+1] = tmp

            tmp = proceses[j]
            proceses[j] = proceses[j+1]
            proceses[j+1] = tmp

            tmp = arival_time[j]
            arival_time[j] = arival_time[j+1]
            arival_time[j+1] = tmp

proceses.insert(0,p_n)
burst_time.insert(0,b_t)
arival_time.insert(0,a_t)

#print(proceses)
#print(burst_time)
#print(arival_time)

total = 0
print("Waiting Time: ")
for i in range(proces):
    str_all = proceses[i] + " " + str(total - arival_time[i])
    print(str_all)
    total = total + burst_time[i]

total = 0

print("Turn Around Time: ")
for i in range(proces):
    total = total + burst_time[i]
    str_all = proceses[i] + " " + str(total - arival_time[i])
    print(str_all)


    

    
    


            
