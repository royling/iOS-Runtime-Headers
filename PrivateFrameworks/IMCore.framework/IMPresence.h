/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet, NSString, IMHandle, NSMutableArray;



@interface IMPresence : IMDirectlyObservableObject <IMDirectlyObservableObjectObserver>
{
    NSMutableArray *_imHandles;
    NSMutableSet *_imHandlesSet;
    NSString *_statusMessage;
    IMHandle *_mostAvailableIMHandle;
    BOOL _quiet;
    NSUInteger _previousStatus;
    NSUInteger _status;
}

@property(readonly) NSInteger numberOfIMHandles;
@property(readonly) NSSet *groups;
@property(readonly) NSString *firstName;
@property(readonly) NSString *lastName;
@property(readonly) NSString *fullName;
@property(readonly) NSString *shortName;
@property(readonly) NSString *displayName;
@property(readonly) NSString *nameAndEmail;
@property(readonly) NSString *statusMessage;
@property(readonly) NSString *previousStatusMessage;
@property(readonly) NSString *nameOfStatus;
@property(readonly) BOOL isMobile;
@property(readonly) NSString *mobileDeviceName;
@property(readonly) double timeSinceWentOffline;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) NSUInteger previousStatus;
@property(readonly) NSUInteger status;
@property(readonly) IMHandle *mostAvailableIMHandle;
@property(readonly) NSArray *imHandles;
@property(readonly) NSSet *imHandleSet;
@property BOOL isQuiet;

+ (id)notifications;
+ (id)selectors;

- (NSUInteger)status;
- (id)lastName;
- (id)firstName;
- (BOOL)canAddIMHandle:(id)arg1;
- (void)_imHandleStatusChanged:(id)arg1;
- (id)statusMessage;
- (id)fullName;
- (id)displayName;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_observeIMHandle:(id)arg1;
- (void)_unobserveIMHandle:(id)arg1;
- (void)_imHandleCapabilitiesChanged:(id)arg1;
- (void)_imHandlePictureChanged:(id)arg1;
- (void)_imHandleInfoChanged:(id)arg1;
- (void)_imHandleGroupsChanged:(id)arg1;
- (void)_imHandleExtraPropsChanged:(id)arg1;
- (void)_imHandleMobileChanged:(id)arg1;
- (void)_imHandleCertsChanged:(id)arg1;
- (void)_imHandleSortOrderChanged:(id)arg1;
- (void)_setMostAvailableIMHandle:(id)arg1;
- (BOOL)_fullRecache;
- (NSInteger)numberOfIMHandles;
- (void)postNotificationNamed:(id)arg1 forIMHandle:(id)arg2;
- (id)mostAvailableIMHandle;
- (id)imHandleSet;
- (BOOL)isQuiet;
- (void)setIsQuiet:(BOOL)arg1;
- (id)imHandles;
- (BOOL)containsIMHandle:(id)arg1;
- (id)nameAndEmail;
- (BOOL)isMobile;
- (id)mobileDeviceName;
- (NSUInteger)previousStatus;
- (id)nameOfStatus;
- (id)previousStatusMessage;
- (double)timeSinceWentOffline;
- (double)timeSinceStatusChanged;
- (id)groups;
- (void)removeIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (id)shortName;
- (void)objectDidPostDirectNotification:(id)arg1;

@end