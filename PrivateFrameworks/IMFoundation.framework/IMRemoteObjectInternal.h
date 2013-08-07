/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class Protocol, NSString, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSObject<OS_xpc_object>;

@interface IMRemoteObjectInternal : NSObject  {
    NSRecursiveLock *_lock;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long _deathPostPredicate;
    Protocol *_protocol;
    NSString *_portName;
    BOOL _willBeTerminated;
    int _pid;
}



@end