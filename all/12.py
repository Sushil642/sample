import cv2
import cv2.data
face_cascade=cv2.CascadeClassifier(cv2.data.haarcascades+'haarcascade_frontalface_default.xml')

image=cv2.imread('download.jpeg')

gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)


faces=face_cascade.detectMultiScale(gray,scaleFactor=1.3,minNeighbors=5)

for (x,y,w,h) in faces:
    cv2.rectangle(image,(x,y),(x+w,y+h),(0,255,0),3)
cv2.imshow('Detected_facces',image)
cv2.waitKey(0)
cv2.destroyAllWindows()