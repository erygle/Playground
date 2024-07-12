import cv2 as cv
import numpy as np

img = cv.imread("Photos/meles.jpeg")
print(img.shape)
img = cv.resize(img,(800,600))

blank = np.zeros(img.shape[:2],dtype= 'uint8')

b,g,r = cv.split(img)

blue = cv.merge([b,blank,blank])
green = cv.merge([blank,g,blank])
red = cv.merge([blank,blank,r])

cv.imshow("Blue", blue)
cv.imshow("Green", green)
cv.imshow("Red", red)

# cv.imshow("Blue", b)
# cv.imshow("Green", g)
# cv.imshow("Red", r)

print(img.shape)
print(b.shape)
print(g.shape)
print(r.shape)

merged = cv.merge([b,g,r])
cv.imshow("Merged",merged)

cv.imshow("Image", img)

cv.waitKey(0)