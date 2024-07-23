import cv2
import numpy as np
import matplotlib.pyplot as plt 
image=cv2.imread('f1 car.jpg',cv2.IMREAD_GRAYSCALE)
image_array=np.array(image)

def sharpen():
    return np.array([[1,1,1],[1,1,1],[1,1,1]])
def filtering(image,kernal):
    m,n=kernal.shape
    if m==n:
        y,x=image.shape
        y=y-m+1
        x=x-m+1
        new_image=np.zeros((y,x))
        for i in range(y):
            for j in range(x):
                new_image[i][j]=np.sum(image[i:i+m,j:j+m]*kernal)
    return new_image


plt.figure(figsize=(10,5))
plt.subplot(1,2,1)
plt.imshow(image_array,cmap='gray')
plt.axis('off')
plt.title('original grayscale Image')

plt.subplot(1,2,2)
plt.imshow(filtering(image_array,sharpen()),cmap='gray')
plt.axis('off')
plt.title('Blurred Image')
plt.show()