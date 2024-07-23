import cv2
import numpy as np
def translate(image,dx,dy):
    rows,cols=image.shape[:2]
    matrix=np.float32([[1,0,dx],[0,1,dy]])
    translated_image=cv2.warpAffine (image,matrix,(cols,rows))
    return translated_image
img=cv2.imread('f1 car.jpg')
height,width=img.shape[:2]

center=(width//2,height//2)
rotated_value=int(input("Enter the rotation angle : "))
scaled_value=int(input("Enter the scaled value : "))

rotated_matrix=cv2.getRotationMatrix2D(center=center,angle=rotated_value,scale=1)
rotated_image=cv2.warpAffine(src=img,M=rotated_matrix,dsize=(width,height))
scaled_matrix=cv2.getRotationMatrix2D(center=center,angle=0,scale=scaled_value)
scaled_image=cv2.warpAffine(src=rotated_image,M=rotated_matrix,dsize=(width,height))

h=int(input("Enter the pixels u want to translate image horizontally : "))
v=int(input("Enter the pixels u want to translate image vertically : "))
translated_image=translate(scaled_image,dx=h,dy=v)
cv2.imwrite("op.jpeg",translated_image)
