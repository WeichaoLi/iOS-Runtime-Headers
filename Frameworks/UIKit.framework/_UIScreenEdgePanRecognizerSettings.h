/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
    bool_analysisFailureOverlayVisible;
    bool_analysisLoggingEnabled;
    bool_analysisLoggingOverlayVisible;
}

@property bool analysisFailureOverlayVisible;
@property bool analysisLoggingEnabled;
@property bool analysisLoggingOverlayVisible;
@property(retain) _UIScreenEdgePanRecognizerCornerSettings * cornerSettings;
@property(retain) _UIScreenEdgePanRecognizerDwellSettings * dwellSettings;
@property(retain) _UIScreenEdgePanRecognizerEdgeSettings * edgeSettings;
@property(copy) NSString * multitaskingGestureMode;
@property(copy) NSString * navigationGestureMode;

+ (id)settingsControllerModule;

- (bool)analysisFailureOverlayVisible;
- (bool)analysisLoggingEnabled;
- (bool)analysisLoggingOverlayVisible;
- (id)cornerSettings;
- (id)dwellSettings;
- (id)edgeSettings;
- (id)multitaskingGestureMode;
- (id)multitaskingGestureModePost351;
- (id)navigationGestureMode;
- (id)navigationGestureModePost351;
- (void)setAnalysisFailureOverlayVisible:(bool)arg1;
- (void)setAnalysisLoggingEnabled:(bool)arg1;
- (void)setAnalysisLoggingOverlayVisible:(bool)arg1;
- (void)setCornerSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDwellSettings:(id)arg1;
- (void)setEdgeSettings:(id)arg1;
- (void)setMultitaskingGestureMode:(id)arg1;
- (void)setMultitaskingGestureModePost351:(id)arg1;
- (void)setNavigationGestureMode:(id)arg1;
- (void)setNavigationGestureModePost351:(id)arg1;

@end