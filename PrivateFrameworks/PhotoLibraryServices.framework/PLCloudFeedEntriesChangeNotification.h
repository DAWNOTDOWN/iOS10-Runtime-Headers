/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification  {
    BOOL _shouldReload;
    NSSet *_insertedEntries;
    NSSet *_updatedEntries;
    NSSet *_deletedEntries;
}

@property BOOL shouldReload;
@property(copy) NSSet * insertedEntries;
@property(copy) NSSet * updatedEntries;
@property(copy) NSSet * deletedEntries;

+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;

- (id)deletedEntries;
- (id)updatedEntries;
- (id)insertedEntries;
- (void)setDeletedEntries:(id)arg1;
- (void)setUpdatedEntries:(id)arg1;
- (void)setInsertedEntries:(id)arg1;
- (void)setShouldReload:(BOOL)arg1;
- (id)_initWithInsertedEntries:(id)arg1 updatedEntries:(id)arg2 deletedEntries:(id)arg3;
- (id)_initWithFullReload;
- (BOOL)shouldReload;
- (id)object;
- (id)name;
- (id)userInfo;
- (void)dealloc;

@end