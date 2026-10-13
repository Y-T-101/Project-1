#A sample caluculate programming game 
import time

seconds = 0; #second 
minute = 0; #minute 
hours = 0; #hours

while True: 
    print("\n")
    print(f"%{hours}:%{minute}:%{seconds}", end="\r")
    seconds+1

    if seconds == 60:
        seconds+=1;
        seconds=0;

    if minute == 60:
        seconds+=1
        seconds=0

    if hours == 60:
        hours=0 
        minute=0
        seconds=0

    time.sleep(1)