/* Generated by RuntimeBrowser.
 */

@protocol CECBusPollingOperationDelegate <NSObject>

@required

- (bool)pollingOperation:(CECBusPollingOperation *)arg1 shouldSkipAddress:(unsigned char)arg2;
- (void)pollingOperationCompleted:(CECBusPollingOperation *)arg1;

@optional

- (void)pollingOperation:(CECBusPollingOperation *)arg1 deviceNotRespondingAtAddress:(unsigned char)arg2;
- (void)pollingOperation:(CECBusPollingOperation *)arg1 encounteredError:(NSError *)arg2 forMessage:(CECMessage *)arg3;

@end
