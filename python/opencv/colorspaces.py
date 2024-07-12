import cv2 as cv
import matplotlib.pyplot as plt
import numpy as np

img = cv.imread("Photos/meles.jpeg")
img = cv.resize(img,(800,600))

cv.imshow("Image", img)

# BGR TO GRAY
# gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# cv.imshow("Gray", gray)

# BGR TO HSV
# hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
# cv.imshow("HSV", hsv)

# BGR TO LAB
# lab = cv.cvtColor(img, cv.COLOR_BGR2LAB)
# cv.imshow("LAB", lab)

# BGR TO RGB
rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow("RGB", rgb )

# plt.imshow(img2)
# plt.show()

cv.waitKey(0)