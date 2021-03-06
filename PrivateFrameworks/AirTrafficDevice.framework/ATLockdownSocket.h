/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>;

@interface ATLockdownSocket : ATSocket {
    struct _lockdown_connection { } *_connection;
    void *_lockdownInfo;
    NSObject<OS_dispatch_queue> *_recvQueue;
    NSObject<OS_dispatch_source> *_recvSource;
    NSObject<OS_dispatch_semaphore> *_recvSourceSemaphore;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSObject<OS_dispatch_queue> *_socketRWQueue;
}

@property(readonly) BOOL isWifi;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithLockdownInfo:(void*)arg1;
- (BOOL)isOpen;
- (BOOL)isWifi;
- (BOOL)open;
- (int)recv:(char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (int)send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)writeData:(id)arg1 withCompletion:(id)arg2;

@end
