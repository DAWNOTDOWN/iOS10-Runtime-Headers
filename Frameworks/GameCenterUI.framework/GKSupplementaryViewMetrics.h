/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {
    BOOL _shouldPin;
    BOOL _hidden;
    BOOL _shouldUseGlobalIndexing;
    BOOL _shouldPinGlobal;
    float _desiredWidth;
    float _desiredHeight;
    NSString *_kind;
    int _animateWithSection;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _globalSectionRange;
}

@property float desiredWidth;
@property float desiredHeight;
@property BOOL shouldPin;
@property(retain) NSString * kind;
@property(getter=isHidden) BOOL hidden;
@property BOOL shouldUseGlobalIndexing;
@property BOOL shouldPinGlobal;
@property struct _NSRange { unsigned int x1; unsigned int x2; } globalSectionRange;
@property int animateWithSection;

+ (id)supplementaryMetrics;

- (int)animateWithSection;
- (BOOL)shouldPinGlobal;
- (BOOL)shouldUseGlobalIndexing;
- (float)desiredWidth;
- (struct CGSize { float x1; float x2; })sizeForCollectionView:(id)arg1;
- (void)setAnimateWithSection:(int)arg1;
- (void)setDesiredWidth:(float)arg1;
- (BOOL)shouldPin;
- (float)desiredHeight;
- (void)setShouldUseGlobalIndexing:(BOOL)arg1;
- (void)setShouldPinGlobal:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })globalSectionRange;
- (void)setGlobalSectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)localDescription;
- (void)setShouldPin:(BOOL)arg1;
- (void)setDesiredHeight:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)kind;
- (void)setKind:(id)arg1;

@end