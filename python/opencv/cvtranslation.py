import cv2 as cv
import numpy as np

img = cv.imread('Photos/Photo2.jpg')
img =cv.resize(img,(900,600))
# Translation------------------------------------------------------------------
def translation(img,x,y):
    transMat = np.float32([[1,0,x],[0,1,y]])                   # -x -> left
                                                               # -y -> up
    dimensions = (img.shape[1], img.shape[0])                  #  x -> right
                                                               #  y -> down
    return cv.warpAffine(img,transMat,dimensions)

translated = translation(img,50,0)
cv.imshow("Translated",translated)

# Rotation---------------------------------------------------------------------
def rotate(img,angle,rotPoint = None):
    (height,width) = img.shape[:2]
    
    if rotPoint is None:
        rotPoint = (width//2 , height//2)
        
    rotMat = cv.getRotationMatrix2D(rotPoint,angle,1.0)
    dimensions = (width,height)
    
    return cv.warpAffine(img,rotMat,dimensions)

# rotated = rotate(img, 90)
# cv.imshow("Rotated",rotated)
# rotated2 = rotate(rotated,-90)
# cv.imshow("Rotated 2",rotated2)
# rotated3 = rotate(rotated2,45)
# cv.imshow("Rotated 3",rotated3)

# Flipping---------------------------------------------------------------------
# cv.imshow("Image",img)
# flip = cv.flip(img,-1)
# cv.imshow("Flipping -1",flip)
# flip = cv.flip(img,0)
# cv.imshow("Flipping 0",flip)
# flip = cv.flip(img,1)
# cv.imshow("Flipping 1",flip)

# -----------------------------------------------------------------------------
# cv.imshow("image",img)
# cropped = img[200:300,700:900]
# cv.imshow("cropped",cropped)
# -----------------------------------------------------------------------------




















cv.waitKey(0)