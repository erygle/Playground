import numpy as np
import cv2 as cv
import matplotlib.pyplot as plt

img = cv.imread('Photos/Photo4_small.png')

img = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

# grayscale histogram
gray_hist = cv.calcHist([img], [0], None, [256], [0,256])
plt.figure()
plt.title("Grayscale Histogram")
plt.xlabel("Bins")
plt.ylabel("Pixels")
plt.plot(gray_hist)
plt.xlim([0,256])
plt.show()

cv.imshow("Image", img)

cv.waitKey(0)