from picamera import PiCamera
import time
camera = PiCamera() 
'''
while(1):
    camera.start_preview()
    time.sleep(1)
    camera.capture('/home/pi/image.jpg')
    camera.stop_preview()


'''
import cv2
from picamera import PiCamera
import time
camera = PiCamera()
cv2.namedWindow('frame', cv2.WINDOW_NORMAL)
while(1):
    camera.capture('image.jpg')
    img=cv2.imread('image.jpg')
    
    cv2.imshow('frame',img)
    cv2.waitKey(0)
