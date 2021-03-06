/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage {
    BOOL _isValidated;
}

- (id)fileURLForInfo:(id)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(BOOL)arg3;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2;
- (BOOL)isReadable;
- (void)performReadWithAccessor:(id)arg1;
- (void)validateIfNeeded;

@end
