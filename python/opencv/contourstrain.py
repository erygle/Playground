import cv2 as cv
import numpy as np

img = cv.imread('./Photos/friends.jpg')
print(img)
img = cv.resize(img,(1000,650))
cv.imshow("Friends", img)

blank = np.zeros(img.shape, dtype='uint8')

img = cv.GaussianBlur(img,(3,3),cv.BORDER_DEFAULT)
cv.imshow("Blurred",img)

# img = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# cv.imshow("Gray",img)

canny = cv.Canny(img,125,175)
cv.imshow("Canny",canny)

ret, thresh = cv.threshold(img,125,150, cv.THRESH_BINARY)
cv.imshow("Thresh",thresh)

contours, hierc = cv.findContours(canny, cv.RETR_LIST, cv.CHAIN_APPROX_SIMPLE)
print(len(contours))

cv.drawContours(blank, contours, -1, (255,0,255), 2)
cv.imshow("Blank",blank)


cv.waitKey(0)