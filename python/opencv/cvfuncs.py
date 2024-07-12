import cv2 as cv

def rescale(frame, scale = 0.50):
    width = int(frame.shape[1] * scale)
    height = int(frame.shape[0] * scale)
    
    dimensions = (width,height)
    
    return cv.resize(frame, dimensions, interpolation = cv.INTER_AREA)

# img = cv.imread("Photos/Photo3.jpg")
# img = rescale(img,scale = 0.25)

# converting to grayscale------------------------------------------------------
# gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
# cv.imshow("Gray",gray)

# blur-------------------------------------------------------------------------
# blur = cv.GaussianBlur(img, (3,3), cv.BORDER_DEFAULT)
# cv.imshow("Blur",blur)

# edge cascade-----------------------------------------------------------------
# canny = cv.Canny(img,125,175)
# cv.imshow("Canny",canny)
# canny = cv.Canny(blur,125,175)
# cv.imshow("Canny",canny)

# dilating the image-----------------------------------------------------------
# dilated = cv.dilate(canny,(6,6),iterations = 2)
# cv.imshow("Dilate",dilated)

# eroding----------------------------------------------------------------------
# eroded = cv.erode(dilated,(6,6),iterations = 2)
# cv.imshow("Erode",eroded)

# resize-----------------------------------------------------------------------
# resized = cv.resize(img,(400,400),interpolation = cv.INTER_AREA) #linear area cubic
# cv.imshow("Resize",resized)

# cropping---------------------------------------------------------------------
# cropped = resized[100:200,100:400] # [y1:y2,x1:x2]
# cv.imshow("Crop",cropped)



















cv.imshow("Image",img)

cv.waitKey(0)