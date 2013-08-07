/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIBannerTarget>, <SBUIBannerSource>, SBUIBannerItem;

@interface SBUIBannerContext : NSObject  {
    SBUIBannerItem *_item;
    <SBUIBannerSource> *_source;
    <SBUIBannerTarget> *_target;
}

@property(readonly) SBUIBannerItem * item;
@property(readonly) <SBUIBannerSource> * source;
@property(readonly) <SBUIBannerTarget> * target;


- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)source;
- (void)dealloc;
- (id)description;
- (id)item;
- (id)target;

@end