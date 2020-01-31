import time
import webbrowser
import numpy
breaks=3
count=1
numpy.version.version
print("The program started on",time.ctime())
while(count<=breaks):
    time.sleep(5)
    webbrowser.open("https://www.google.com")
    count =count+1
