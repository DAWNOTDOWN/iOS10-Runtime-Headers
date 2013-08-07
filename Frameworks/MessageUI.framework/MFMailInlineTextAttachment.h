/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMimeTextAttachment, NSData;

@interface MFMailInlineTextAttachment : MFMessageTextAttachment  {
    MFMimeTextAttachment *_original;
    NSData *_iconImageData;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedImageSize;
    unsigned int _hasBeenDownloaded : 1;
    BOOL _displayableAsIcon;
}

@property BOOL displayableAsIcon;

+ (unsigned int)precedenceLevel;

- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (void)setNeedsRedownload:(BOOL)arg1;
- (void)setDisplayableInsidePlugin:(BOOL)arg1;
- (void)_setImageDimensions:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })imageDimensions;
- (float)constrainedWidth;
- (id)mimeTextAttachment;
- (id)persistentUniqueIdentifier;
- (BOOL)displayableAsIcon;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (void)setDisplayableAsIcon:(BOOL)arg1;
- (void)_cacheImageSizeIfNecessary;
- (void)setupForComposition;
- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;
- (BOOL)isDisplayableInsidePlugin;
- (void)setDisplayableInline:(BOOL)arg1;
- (BOOL)isDisplayableInline;
- (id)textEncodingGuess;
- (BOOL)needsRedownload;
- (BOOL)hasBeenDownloaded;
- (unsigned int)approximateSize;
- (id)initWithWrapper:(id)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)dealloc;
- (void)download;

@end