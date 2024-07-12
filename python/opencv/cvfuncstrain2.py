import cv2 as cv
import numpy as np

def rescale(frame, scale = 0.50):
    width = int(frame.shape[1] * scale)
    height = int(frame.shape[0] * scale)
    
    dimensions = (width,height)
    
    return cv.resize(frame, dimensions, interpolation = cv.INTER_AREA)

def translation(img,x,y):
    trans = np.float32([[1,0,x],[0,1,y]]) #[1,0,x],[0,1,y]
    
    dimensions = (img.shape[1], img.shape[0])
    
    return cv.warpAffine(img,trans,dimensions)

def rotate(img,angle,rotPoint = None):
    width = img.shape[1]
    height = img.shape[0]
    dimensions = (width,height)
    
    if rotPoint is None:
        rotPoint = (width//2 , height//2)
    rot = cv.getRotationMatrix2D(rotPoint, angle, 1.0)
    return cv.warpAffine(img,rot,dimensions)

img = cv.imread("Photos/hathaway.jpg")
# img = rescale(img,0.55) #1056,594
img = cv.resize(img,(1000,600))

img = translation(img,0,200)
img = translation(img,0,-100) 

img = rotate(img, 90)
# img = rotate(img, -90)
img = translation(img,-300,0)

cv.imshow("Hathaway",img)

cv.waitKey(0)