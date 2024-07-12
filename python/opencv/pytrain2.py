import cv2 as cv
import numpy as np

def doCircle(frame,x1,y1,radius,rgb_list,thck = 2):
    cv.circle(frame,(x1,y1),radius,rgb_list,thickness = thck)
def doRectangle(frame,xy1,xy2,rgb_list,thck = 2):
    cv.rectangle(frame,xy1,xy2,rgb_list,thickness = thck)
def doLine(frame,xy1,xy2,rgb_list,thck = 2):
    cv.line(frame,xy1,xy2,rgb_list,thickness = thck)
def paint(frame,dots,rgb_list):
    cv.drawContours(blank,np.array([dots]),0,rgb_list,-1)
    
blank = np.zeros((800,800,3),dtype='uint8')
red = (0,0,255)
green = (0,255,0)
blue = (255,0,0)

xy = ((160,160),(320,320),(480,160),(640,320),(160,480),(320,640),(480,480),(640,640))
n = 0
while True:
    doRectangle(blank, xy[n], xy[n+1], green, thck= 3)
    n += 2
    if n == 8:
        n = 0
        break
point = [400,400]
xy2 = ((320,160),point,(480,160),point,(320,640),point,(480,640),point,
       (160,320),point,(640,320),point,(160,480),point,(640,480),point)
while True:
    doLine(blank, xy2[n], xy2[n+1], green)
    n += 2
    if n == 16:
        n = 0
        break
    
dots = [(320,160),(320,320),point,
        (640,320),(480,320),point,
        (480,480),(480,640),point,
        (160,480),(320,480),point]
paint(blank,dots,green)







# n,i,j = 0,0,0             #rgb circle
# while True:
#     doCircle(blank, 400, 400, 10+n, red)
#     doCircle(blank, 400, 400, 13+i, green)
#     doCircle(blank, 400, 400, 16+j, blue)
#     n += 10
#     i += 10
#     j += 10
#     if n == 400:
#         break

cv.imshow("Image",blank)

cv.waitKey(0)