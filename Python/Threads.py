import threading
import time

def worker():
    print("Worker")
    return

threads = []
for i in range(5):
    t = threading.Thread(target=worker)
    threads.append(t)
    t.start()

    print('')

def worker_a(num):
    print ("Worker : " + str(num),end='\n')
    return

threads_a = []
for i in range(5):
    t = threading.Thread(target=worker_a,args=(i,))
    threads_a.append(t)
    t.start()

def worker_thread():
    print (threading.currentThread().getName() + 'Starting')
    time.sleep(2)
    print (threading.currentThread().getName() + 'Ending')

def my_service():
    print (threading.currentThread().getName() + 'Starting')
    time.sleep(3)
    print (threading.currentThread().getName() + 'Ending')

t = threading.Thread(name='worker_thread',target=worker_thread)
w = threading.Thread(name='my_service',target=my_service)

t.start()
w.start()
