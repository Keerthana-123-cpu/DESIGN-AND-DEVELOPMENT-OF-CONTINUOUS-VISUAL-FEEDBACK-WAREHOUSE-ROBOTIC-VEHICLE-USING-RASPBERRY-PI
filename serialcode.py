import serial 
import time
import requests
from picamera import PiCamera
import time
#camera = PiCamera() 



port = serial.Serial("/dev/ttyACM0", baudrate = 9600, timeout=None)
port.flushInput()      

sensor1 = 0;


vals = []

while (1):
    
    #time.sleep(1)
    #a=port.readline()
    #a=a.decode('utf-8')
    #vals = (a).split(',')
#   print vals
    url='http://aislyn.in/RoboticArm/Mfetch.php'
    x=requests.post(url,data='')
    print(x.text)
    x=x.text
    if x[0]=='F':
        sig=b'A'
    elif x[0]=='B':
        sig=b'E'
    elif x[0]=='L':
        sig=b'B'
    elif x[0]=='R':
        sig=b'C'
    else:
        sig=b'D'
    port.write(sig)
    if x[0]=='U':
        sig=b'G'
    elif x[0]=='D':
        sig=b'F'
    elif x[0]=='O':
        sig=b'I'
    elif x[0]=='C':
        sig=b'H'
    else:
        sig=b'J'
        
    
    port.write(sig)
    time.sleep(1)