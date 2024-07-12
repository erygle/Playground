import cv2 as cv
import numpy as np

def rescaleFrame(frame, scale = 0.50):
    width =int(frame.shape[1] * scale)
    height =int(frame.shape[0] * scale)
    
    dimensions = (width,height)
    return cv.resize(frame,dimensions,interpolation = cv.INTER_AREA)


blank = np.zeros((500,500,3),dtype='uint8')
# cv.imshow("Blank",blank)
# img = cv.imread("Photos/efkanery.jpg")
# img = rescaleFrame(img,scale = 0.15)
# cv.imshow("Image",img)

# image paint
# blank[200:250,150:250] = 150,127,110
# cv.imshow("Painted",blank)

# draw rectangle
# cv.rectangle(blank , (0,0) , (300,450) , (255,0,0) , thickness = -1) #cv.rectangle(img,(x1,y1),(x2,y2),rgb,thickness)
# cv.rectangle(blank,(0,0),(blank.shape[1],blank.shape[0]//2),(0,0,255),thickness = -1)
# cv.imshow("Rectangle", blank)       #cv.FILLED or -1 paint the all area 

#draw circle
# cv.circle(blank, (250,250),40 ,(0,255,255),thickness = 3)
# cv.imshow("Circle",blank)

# dram line
# cv.line(blank,(250,250), (500,400), (255,255,128), thickness = 3)
# cv.line(blank,(250,250), (400,500), (255,255,128), thickness = 3)
# cv.line(blank,(500,400), (400,500), (255,255,128), thickness = 3)
# cv.line(blank,(250,250), (450,450), (255,255,255), thickness = 3)
# cv.imshow("Line",blank)

# write text
cv.putText(blank,"Hello",(225,400),cv.FONT_HERSHEY_TRIPLEX,1.0, (255,0,0),2)
cv.imshow("Text",blank)

cv.waitKey(0)
