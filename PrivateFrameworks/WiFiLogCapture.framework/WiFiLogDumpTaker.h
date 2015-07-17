/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiLogCapture.framework/WiFiLogCapture
 */

@interface WiFiLogDumpTaker : NSObject {
    bool  connected;
    NSObject<OS_dispatch_queue> * event_queue;
    int  expectingResults;
    bool  lastCaptureFellback;
    int  rv;
    NSObject<OS_xpc_object> * xpc_connection;
}

- (void).cxx_destruct;
- (id)XPCConnection:(const char *)arg1;
- (bool)didLastCaptureFallback;
- (void)handleConnection:(id)arg1;
- (id)init;
- (void)takeWiFiDiagnosticsDumpWithPathAndReason:(id /* block */)arg1 :(const char *)arg2 :(const char *)arg3;
- (void)takeWiFiDiagnosticsDumpWithPathAndReasonAndFallback:(id /* block */)arg1 :(const char *)arg2 :(const char *)arg3;
- (void)takeWiFiDiagnosticsDumpWithPathAndReasonAndFallback:(id /* block */)arg1 :(const char *)arg2 :(const char *)arg3 tryFallback:(bool)arg4;
- (void)takeWiFiLogDumpWithReason:(id /* block */)arg1 :(const char *)arg2;

@end