/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterProxy : NSFileReactorProxy {
    id _currentWriterPurposeID;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
    BOOL _disconnected;
    BOOL _inSubarbiter;
    NSMutableArray *_previousWriterPurposeIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    unsigned int _writingRelinquishmentCount;
}

@property (readonly) BOOL disconnected;
@property BOOL inSubarbiter;

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;

- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)disconnect;
- (BOOL)disconnected;
- (void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)forwardUsingMessageSender:(id /* block */)arg1;
- (BOOL)inSubarbiter;
- (void)observeChangeAtSubitemPath:(id)arg1;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveByWriterWithPurposeID:(id)arg1;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)saveChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setInSubarbiter:(BOOL)arg1;
- (void)setItemLocation:(id)arg1;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(id /* block */)arg3;

@end
