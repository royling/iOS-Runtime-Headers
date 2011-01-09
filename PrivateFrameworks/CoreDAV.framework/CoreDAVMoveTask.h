/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;



@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask 
{
    NSString *_previousETag;
}

@property(retain) NSString *previousETag;
@property <CoreDAVMoveTaskDelegate> *delegate;


- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (id)previousETag;
- (void)setPreviousETag:(id)arg1;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

@end