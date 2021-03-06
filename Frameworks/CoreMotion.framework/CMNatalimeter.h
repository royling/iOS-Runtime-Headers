/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {
    CMNatalimeterInternal *_internal;
}

@property(readonly) CMNatalimeterInternal * _internal;

+ (BOOL)isNatalimeterAvailable;
+ (void)setUserProfile:(id)arg1 error:(id*)arg2;
+ (id)userProfile;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(int)arg1 withHandler:(id)arg2;
- (void)setSession:(int)arg1 withCompletionHandler:(id)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
