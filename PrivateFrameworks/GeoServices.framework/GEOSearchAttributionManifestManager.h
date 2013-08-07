/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOSearchAttributionServerProxy>;

@interface GEOSearchAttributionManifestManager : NSObject  {
    <GEOSearchAttributionServerProxy> *_serverProxy;
}

@property(readonly) <GEOSearchAttributionServerProxy> * serverProxy;

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (id)sharedManager;

- (id)serverProxy;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4;
- (id)init;
- (void)dealloc;

@end