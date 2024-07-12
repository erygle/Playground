import cv2 as cv
import numpy as np


def resize(img,scale = 0.75):
    width = int(img.shape[1]*scale)
    height = int(img.shape[0]*scale)
    
    dimensions = (width,height)
    
    return cv.resize(img,dimensions,interpolation = cv.INTER_AREA)
    

img = cv.imread("Photos/doa.jpeg")
img = resize(img)

img2 = cv.imread("Photos/sila.jpg")
img2 = resize(img2)

gray = cv.cvtColor(img,cv.COLOR_BGR2GRAY)
gray2 = cv.cvtColor(img2,cv.COLOR_BGR2GRAY)

haar_cascade = cv.CascadeClassifier('haarcascade_frontalface_default.xml')

faces_rect = haar_cascade.detectMultiScale(gray, scaleFactor = 1.1, minNeighbors=1)

faces_rect2 = haar_cascade.detectMultiScale(gray2, scaleFactor = 1.1, minNeighbors=1)

print(f"Number of faces on photo 1 : {len(faces_rect)}")
print(f"Number of faces on photo 2 : {len(faces_rect2)}")


for (x,y,w,h) in faces_rect:
    cv.rectangle(img, (x,y), (x+w,y+h), (255,255,0), thickness = 2)
    
for (x,y,w,h) in faces_rect2:
    cv.rectangle(img2, (x,y), (w+x,h+y), (255,255,0), thickness = 2)
    
cv.imshow("Image 1",img)
cv.imshow("Image 2",img2)

cv.waitKey(0)