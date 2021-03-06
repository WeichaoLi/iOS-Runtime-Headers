/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {
    NSAttributedString *_attributedString;
    struct CGSize { 
        float width; 
        float height; 
    } _boundingSize;
    NSStringDrawingContext *_context;
    float _topInset;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) float baselineOffset;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } boundingSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float firstBaselineOffset;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int numberOfLines;
@property (nonatomic, readonly) NSStringDrawingContext *stringDrawingContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float topInset;

- (void).cxx_destruct;
- (id)attributedString;
- (float)baselineOffset;
- (struct CGSize { float x1; float x2; })boundingSize;
- (float)firstBaselineOffset;
- (id)initWithLayoutRequest:(id)arg1;
- (int)numberOfLines;
- (id)stringDrawingContext;
- (float)topInset;

@end
