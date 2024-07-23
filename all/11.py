import numpy as np
import cv2

image =cv2.imread('f1 car.jpg')
gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
_,bin_image=cv2.threshold(gray,127,255,cv2.THRESH_BINARY)
contours,_=cv2.findContours(bin_image,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
cv2.drawContours(image,contours,-1,(0,255,0),3)

cv2.imshow('contours',image)
cv2.waitKey(0)
cv2.destroyAllWindows() 