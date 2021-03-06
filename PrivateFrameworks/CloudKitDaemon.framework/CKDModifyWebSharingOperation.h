/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation {
    NSMutableSet *_fetchedRecordIDs;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToShareReadWrite;
    NSArray *_recordIDsToUnshare;
    id _recordWebSharedBlock;
    id _recordWebUnsharedBlock;
    NSMutableDictionary *_recordsToSaveByID;
    NSMutableSet *_savedRecordIDs;
}

@property(retain) NSMutableSet * fetchedRecordIDs;
@property(retain) NSArray * recordIDsToShare;
@property(retain) NSArray * recordIDsToShareReadWrite;
@property(retain) NSArray * recordIDsToUnshare;
@property(copy) id recordWebSharedBlock;
@property(copy) id recordWebUnsharedBlock;
@property(retain) NSMutableDictionary * recordsToSaveByID;
@property(retain) NSMutableSet * savedRecordIDs;

- (void).cxx_destruct;
- (struct _PCSIdentityData { }*)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (void)_saveRecords;
- (id)fetchedRecordIDs;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (id)recordIDsToShare;
- (id)recordIDsToShareReadWrite;
- (id)recordIDsToUnshare;
- (id)recordWebSharedBlock;
- (id)recordWebUnsharedBlock;
- (id)recordsToSaveByID;
- (id)savedRecordIDs;
- (void)setFetchedRecordIDs:(id)arg1;
- (void)setRecordIDsToShare:(id)arg1;
- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (void)setRecordIDsToUnshare:(id)arg1;
- (void)setRecordWebSharedBlock:(id)arg1;
- (void)setRecordWebUnsharedBlock:(id)arg1;
- (void)setRecordsToSaveByID:(id)arg1;
- (void)setSavedRecordIDs:(id)arg1;

@end
