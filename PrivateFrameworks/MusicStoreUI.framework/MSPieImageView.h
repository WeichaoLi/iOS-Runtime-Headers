/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSPieImageView : UIView {
    UIImage *_backgroundImage;
    UIBezierPath *_clipPath;
    UIImage *_foregroundImage;
    float _pieFraction;
    float _pieRadius;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIImage *foregroundImage;
@property (nonatomic) float pieFraction;
@property (nonatomic) float pieRadius;

- (void)_reloadClipPath;
- (id)backgroundImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)foregroundImage;
- (float)pieFraction;
- (float)pieRadius;
- (void)setBackgroundImage:(id)arg1;
- (void)setForegroundImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPieFraction:(float)arg1;
- (void)setPieRadius:(float)arg1;
- (void)sizeToFit;

@end
