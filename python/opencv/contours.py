import cv2 as cv
import numpy as np

img = cv.imread("Photos/efkanery.jpg")
img = cv.resize(img,(1000,800))

blank = np.zeros(img.shape,dtype = 'uint8')
# cv.imshow("Blank",blank)

img = cv.cvtColor(img,cv.COLOR_BGR2GRAY)

img = cv.GaussianBlur(img,(3,3),cv.BORDER_DEFAULT)
cv.imshow("Blur",img)

canny = cv.Canny(img,125,150)
cv.imshow("Canny",canny)

ret, thresh = cv.threshold(img,125,255, cv.THRESH_BINARY)
cv.imshow("Thresh",thresh)

contours, hierarchies = cv.findContours(canny, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
print(f"{len(contours)}.")

cv.drawContours(blank, contours, -1, (255,255,255), 1)
cv.imshow("Contours draw",blank)

cv.imshow("Photo",img)

cv.waitKey(0)