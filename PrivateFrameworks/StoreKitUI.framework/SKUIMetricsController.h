/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIMetricsImpressionSession, NSString, SSMetricsController, SSMetricsConfiguration, NSNumber, NSObject<OS_dispatch_source>;

@interface SKUIMetricsController : NSObject  {
    NSNumber *_accountID;
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    NSString *_applicationIdentifier;
    SSMetricsController *_controller;
    SSMetricsConfiguration *_globalConfiguration;
    BOOL _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    BOOL _loggingEnabled;
    SSMetricsConfiguration *_pageConfiguration;
    NSString *_pageContext;
    NSString *_pageURL;
    NSString *_topic;
    NSString *_userAgent;
    NSString *_windowOrientation;
}

@property(readonly) SKUIMetricsImpressionSession * activeImpressionsSession;
@property(readonly) double flushInterval;
@property(readonly) SSMetricsConfiguration * globalConfiguration;
@property(retain) SSMetricsConfiguration * pageConfiguration;
@property(copy) NSNumber * accountIdentifier;
@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * pageContext;
@property(copy) NSString * pageURL;
@property(copy) NSString * topic;
@property(copy) NSString * userAgent;
@property(copy) NSString * windowOrientation;

+ (void)flushImmediately;

- (id)pageConfiguration;
- (id)globalConfiguration;
- (void)_waitUntilRecordingComplete;
- (void)pingURLs:(id)arg1;
- (double)flushInterval;
- (void)closeImpressionsSession;
- (void)flushImmediately;
- (void)_recordActiveImpressions;
- (id)clickEventWithItem:(id)arg1 locationPosition:(int)arg2;
- (BOOL)canRecordEventWithType:(id)arg1;
- (id)performActionForItem:(id)arg1;
- (id)locationWithPageComponent:(id)arg1;
- (id)locationWithPosition:(int)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(int)arg2;
- (id)activeImpressionsSession;
- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;
- (void)setPageContext:(id)arg1;
- (void)setPageConfiguration:(id)arg1;
- (void)recordEvent:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (id)windowOrientation;
- (id)pageContext;
- (void)setApplicationIdentifier:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)compoundStringWithElements:(id)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (id)applicationIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (id)pageURL;
- (void)setPageURL:(id)arg1;

@end