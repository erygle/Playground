import cv2 as cv
import numpy as np

img = cv.imread('Photos/meles.jpeg')
img = cv.resize(img,(800,600))
cv.imshow("Image",img)

blank = np.zeros(img.shape[:2], dtype='uint8')

mask = cv.circle(blank, (img.shape[1]//2 - 50, img.shape[0]//2 - 50) , 200, 255, -1)
cv.imshow("Circle", mask)

masked = cv.bitwise_and(img,img, mask=mask)
cv.imshow("Masked", masked)

cv.waitKey(0)