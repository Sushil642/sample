import cv2
import numpy as np
image=cv2.imread('f1 car.jpg')

gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)

edges=cv2.Canny(gray,100,200)

kernel=np.ones((5,5),np.float32) /25
texture=cv2.filter2D(gray,-1,kernel)

cv2.imshow('Original Image',image)
cv2.imshow('Edges image',edges)
cv2.imshow('texture ',texture)

cv2.waitKey(0)
cv2.destroyAllWindows()