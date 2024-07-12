import cv2 as cv
# functions----------------------------------------
def changeRes(width,height):#for live vids
    cv.VideoCapture.set(3,width)
    cv.VideoCapture.set(4,height)

def rescaleFrame(frame, scale = 0.75):#work for img vids and live vids
    width = int(frame.shape[1] * scale) # 1 x ekseni
    height = int(frame.shape[0] * scale) # 0 y ekseni
    
    dimensions = (width,height)
    return cv.resize(frame,dimensions,interpolation = cv.INTER_AREA)
# photo reading----------------------------------------
img = cv.imread('Photos/efkanery.jpg')
resized_img = rescaleFrame(img,scale = 0.15)
# cv.imshow("Me",img)
cv.imshow("Me copy",resized_img)

cv.waitKey(0)
# video reading----------------------------------------
video = cv.VideoCapture('Videos/kopekler.mp4')
while True:
    isTrue, frame = video.read()
    resized_frame = rescaleFrame(frame)
    cv.imshow("Video",frame)
    cv.imshow("Resized Video",resized_frame)    
    if cv.waitKey(20) & 0xFF == ord('d'):
        break
video.release()
cv.destroyAllWindows()

# cv.waitKey(0)