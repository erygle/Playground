import cv2 as cv
import numpy as np

blank = np.zeros((800,800,3),dtype='uint8')

cv.rectangle(blank,(0,0),(800,800),(225,182,211),thickness = cv.FILLED)

cv.line(blank,(blank.shape[1]//2,200),(200,blank.shape[0]//2),(255,255,255),thickness = 2)
cv.line(blank,(blank.shape[1]//2,200),(600,blank.shape[0]//2),(255,255,255),thickness = 2)
cv.line(blank,(200,400),(350,400),(255,255,255),thickness = 2)
cv.line(blank,(450,400),(600,400),(255,255,255),thickness = 2)
cv.line(blank,(350,400),(350,700),(255,255,255),thickness = 2)
cv.line(blank,(450,400),(450,700),(255,255,255),thickness = 2)
cv.line(blank,(350,700),(450,700),(255,255,255),thickness = 2)

cv.rectangle(blank,(353,398),(447,698),(70,233,212),thickness = -1)
n=0
while True:
    cv.line(blank,(203+n,398-n),(597-n,398-n),(70,233,212),thickness = 1)
    n+=1
    if n == 197:
        break

cv.rectangle(blank,(200,415),(335,700),(70,233,212),thickness = -1)
cv.rectangle(blank,(465,415),(600,700),(70,233,212),thickness = -1)

cv.rectangle(blank,(200,415),(335,700),(255,255,255),thickness = 2)
cv.rectangle(blank,(465,415),(600,700),(255,255,255),thickness = 2)

cv.line(blank,(200,200),(380,200),(255,255,255),thickness = 2)
cv.line(blank,(200,200),(200,380),(255,255,255),thickness = 2)
cv.line(blank,(380,200),(200,380),(255,255,255),thickness = 2)
dots = np.array([(202,202),(377,202),(202,377)])
cv.drawContours(blank,[dots],0,(70,233,212),-1)

cv.line(blank,(420,200),(600,200),(255,255,255),thickness = 2)
cv.line(blank,(600,200),(600,380),(255,255,255),thickness = 2)
cv.line(blank,(420,200),(600,380),(255,255,255),thickness = 2)
dots = np.array([(423,202),(599,202),(599,378)])
cv.drawContours(blank,[dots],0,(70,233,212),-1)

# cv.line(blank,(200,400),(600,400),(0,0,255),thickness = 1)
cv.imshow("Blank",blank)

cv.waitKey(0)
