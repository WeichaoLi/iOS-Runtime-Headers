/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    NSXPCConnection *_connection;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)addCardItems:(id)arg1;
- (void)clearAllCardItems;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)removeCardItems:(id)arg1;
- (void)setCardItems:(id)arg1;

@end
