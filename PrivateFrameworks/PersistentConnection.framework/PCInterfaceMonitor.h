/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCInterfaceUsabilityMonitorProtocol>, NSMapTable, NSString;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {
    NSMapTable *_delegateMap;
    <PCInterfaceUsabilityMonitorProtocol> *_internal;
}

@property(readonly) struct __CFString { }* currentRAT;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int interfaceIdentifier;
@property(readonly) BOOL isBadLinkQuality;
@property(readonly) BOOL isInterfaceHistoricallyUsable;
@property(readonly) BOOL isInterfaceUsable;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isLTEWithCDRX;
@property(readonly) BOOL isPoorLinkQuality;
@property(readonly) BOOL isRadioHot;
@property(readonly) int linkQuality;
@property(retain,readonly) NSString * linkQualityString;
@property(readonly) Class superclass;
@property(readonly) struct __CFString { }* wwanInterfaceName;

+ (BOOL)isBadLinkQuality:(int)arg1;
+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct __CFString { }*)currentRAT;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(int)arg1;
- (int)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (BOOL)isBadLinkQuality;
- (BOOL)isInterfaceHistoricallyUsable;
- (BOOL)isInterfaceUsable;
- (BOOL)isInternetReachable;
- (BOOL)isLTEWithCDRX;
- (BOOL)isPoorLinkQuality;
- (BOOL)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)removeDelegate:(id)arg1;
- (struct __CFString { }*)wwanInterfaceName;

@end
