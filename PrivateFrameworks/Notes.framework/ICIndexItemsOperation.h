/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICIndexItemsOperation : NSOperation {
    NSArray * _dataSources;
    NSError * _error;
    CSSearchableIndex * _searchableIndex;
}

@property (nonatomic, copy) NSArray *dataSources;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) CSSearchableIndex *searchableIndex;

- (void).cxx_destruct;
- (id)dataSources;
- (void)deleteAllItems;
- (void)deleteItems;
- (id)error;
- (void)indexItems;
- (id)init;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (void)main;
- (id)searchableIndex;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (id)searchableItemsToIndexFromDataSource:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSearchableIndex:(id)arg1;
- (bool)shouldDeleteAllItemsBeforeIndexing;

@end
