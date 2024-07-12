import cv2 as cv
import numpy as np

img = cv.imread('C:\Users\PRO_G\OneDrive\Masaüstü\w\klasor\ocv\Photos\meles.jpeg')
img = cv.resize(img,(800,600))

cv.imshow("Image", img)

# Averaging
average = cv.blur(img,(5,5))
cv.imshow("Blur", average)

# Gaussian
gauss = cv.GaussianBlur(img,(5,5),0)
cv.imshow("Gauss", gauss)

# Median blur
median = cv.medianBlur(img, 5)
cv.imshow("Median", median)

# Bilateral
bilateral = cv.bilateralFilter(img, 5, 15, 15)
cv.imshow("Bilateral", bilateral)

cv.waitKey(0)