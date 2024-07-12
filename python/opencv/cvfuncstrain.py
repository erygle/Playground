import cv2 as cv
import numpy as np

img = cv.imread("Photos/friends.jpg")
img = cv.resize(img,(900,600))
img = cv.GaussianBlur(img,(9,9),cv.BORDER_DEFAULT)
cv.imshow("s",img)

# img2 = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# img2 = cv.GaussianBlur(img2,(1,3),cv.BORDER_DEFAULT)
# cv.imshow("blur",img2)

# img2 = cv.Canny(img2,125,150)
# img3 = cv.dilate(img2,(4,4),iterations = 1)
# img4 = cv.erode(img3,(4,4),iterations = 15)

# cv.imshow("Image", img)
# cv.imshow("Image 2 canny", img2)
# cv.imshow("Image 3 dilate", img3)
# cv.imshow("Image 4 erode", img4)

cv.waitKey(0)
