/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFDAMailbox, MFError, MFDAMessageStore, MFActivityMonitor, MFMailMessageLibrary;

@interface _MFDAMSBasicConsumer : MFBufferedQueue  {
    MFDAMailbox *mailbox;
    MFDAMessageStore *store;
    MFMailMessageLibrary *library;
    MFActivityMonitor *monitor;
    MFError *error;
    unsigned int numNewMessages;
}

@property(retain) MFActivityMonitor * monitor;
@property(retain) MFError * error;


- (void)setMonitor:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (id)monitor;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)error;

@end