//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

struct _EventMessage;
struct __IOHIDEvent;

@interface UIASyntheticEvents : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;
}

+ (id)sharedEventGenerator;
+ (void)initialize;
@property(readonly) struct __IOHIDEventSystemClient *ioSystemClient; // @synthesize ioSystemClient=_ioSystemClient;
- (void)sendPinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 inRect:(struct CGRect)arg4;
- (void)sendPinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 inRect:(struct CGRect)arg4;
- (void)sendDragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 withFlick:(_Bool)arg4 inRect:(struct CGRect)arg5;
- (void)sendRotate:(struct CGPoint)arg1 withRadius:(double)arg2 rotation:(double)arg3 duration:(double)arg4 touchCount:(unsigned long long)arg5;
- (void)sendMultifingerDragWithPointArray:(struct CGPoint *)arg1 numPoints:(int)arg2 duration:(double)arg3 numFingers:(int)arg4;
- (void)sendPinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendPinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendDragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendTaps:(int)arg1 location:(struct CGPoint)arg2 withNumberOfTouches:(int)arg3 inRect:(struct CGRect)arg4;
- (void)sendDoubleFingerTap:(struct CGPoint)arg1;
- (void)sendDoubleTap:(struct CGPoint)arg1;
- (void)sendTap:(struct CGPoint)arg1;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)_moveLastTouchPoint:(struct CGPoint)arg1;
- (void)liftUp:(struct CGPoint)arg1;
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDown:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)shake;
- (void)setRinger:(_Bool)arg1;
- (void)holdVolumeDown:(double)arg1;
- (void)clickVolumeDown;
- (void)holdVolumeUp:(double)arg1;
- (void)clickVolumeUp;
- (void)holdLock:(double)arg1;
- (void)clickLock;
- (void)lockDevice;
- (void)holdMenu:(double)arg1;
- (void)clickMenu;
- (void)_sendSimpleEvent:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)sendAccelerometerX:(double)arg1 Y:(double)arg2 Z:(double)arg3 duration:(double)arg4;
- (void)sendAccelerometerX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(int)arg2;
- (void)_sendHIDKeyboardEventPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
- (void)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)dealloc;

@end

