//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIASyntheticEvents;

@interface UIARemote : NSObject
{
    UIASyntheticEvents *_eventGenerator;
}

+ (id)sharedRemote;
- (void)clickPlayPause;
- (void)holdPlayPause:(double)arg1;
- (void)clickMenu;
- (void)holdMenu:(double)arg1;
- (void)clickSelect;
- (void)holdSelect:(double)arg1;
- (void)clickRight;
- (void)holdRight:(double)arg1;
- (void)clickLeft;
- (void)holdLeft:(double)arg1;
- (void)clickDown;
- (void)holdDown:(double)arg1;
- (void)clickUp;
- (void)holdUp:(double)arg1;
- (void)dealloc;
- (id)init;

@end

