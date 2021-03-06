/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_backgroundTaskRecordsByTaskIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSMutableDictionary * backgroundTaskRecordsByTaskIdentifier;

+ (id)contextWithArchive:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned int)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)backgroundTaskRecordsByTaskIdentifier;
- (id)backroundDownloadRecordForTaskIdentifier:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned int)arg1;
- (void)setBackgroundTaskRecordsByTaskIdentifier:(id)arg1;
- (id)taskIdentifiers;

@end
