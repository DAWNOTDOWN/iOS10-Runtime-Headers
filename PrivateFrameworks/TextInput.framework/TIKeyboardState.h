/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIKeyboardLayout, NSString, TIKeyboardLayoutState, TIDocumentState, TIKeyboardCandidate;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {
    union { 
        int integerValue; 
        struct { 
            unsigned int userSelectedCurrentCandidate : 1; 
            unsigned int shouldSkipCandidateSelection : 1; 
            unsigned int suppressingCandidateSelection : 1; 
            unsigned int needsCandidateMetadata : 1; 
            unsigned int keyboardEventsLagging : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int splitKeyboardMode : 1; 
            unsigned int wordLearningEnabled : 1; 
            unsigned int autocorrectionEnabled : 1; 
            unsigned int shortcutConversionEnabled : 1; 
            unsigned int typologyLoggingEnabled : 1; 
            unsigned int autocapitalizationEnabled : 1; 
            unsigned int autocapitalizationType : 2; 
            unsigned int keyboardType : 4; 
        } fields; 
    } _mask;
    NSString *_inputMode;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIDocumentState *_documentState;
    NSString *_inputForMarkedText;
    NSString *_searchStringForMarkedText;
    TIKeyboardCandidate *_currentCandidate;
}

@property(copy) NSString * inputMode;
@property(retain) TIKeyboardLayout * keyLayout;
@property(copy) TIKeyboardLayoutState * layoutState;
@property(retain) TIDocumentState * documentState;
@property(copy) NSString * inputForMarkedText;
@property(copy) NSString * searchStringForMarkedText;
@property(retain) TIKeyboardCandidate * currentCandidate;
@property BOOL userSelectedCurrentCandidate;
@property BOOL shouldSkipCandidateSelection;
@property BOOL suppressingCandidateSelection;
@property BOOL needsCandidateMetadata;
@property BOOL keyboardEventsLagging;
@property BOOL hardwareKeyboardMode;
@property BOOL splitKeyboardMode;
@property BOOL wordLearningEnabled;
@property BOOL autocorrectionEnabled;
@property BOOL shortcutConversionEnabled;
@property BOOL typologyLoggingEnabled;
@property BOOL autocapitalizationEnabled;
@property unsigned int autocapitalizationType;
@property unsigned int keyboardType;

+ (BOOL)supportsSecureCoding;

- (unsigned int)autocapitalizationType;
- (BOOL)autocapitalizationEnabled;
- (BOOL)shortcutConversionEnabled;
- (BOOL)autocorrectionEnabled;
- (BOOL)wordLearningEnabled;
- (BOOL)typologyLoggingEnabled;
- (BOOL)splitKeyboardMode;
- (BOOL)keyboardEventsLagging;
- (BOOL)needsCandidateMetadata;
- (BOOL)suppressingCandidateSelection;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)userSelectedCurrentCandidate;
- (id)layoutState;
- (id)keyLayout;
- (id)inputMode;
- (id)inputForMarkedText;
- (id)searchStringForMarkedText;
- (id)currentCandidate;
- (id)documentState;
- (BOOL)hardwareKeyboardMode;
- (unsigned int)keyboardType;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)setSuppressingCandidateSelection:(BOOL)arg1;
- (void)setAutocapitalizationEnabled:(BOOL)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setInputForMarkedText:(id)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setWordLearningEnabled:(BOOL)arg1;
- (void)setSplitKeyboardMode:(BOOL)arg1;
- (void)setAutocorrectionEnabled:(BOOL)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setShortcutConversionEnabled:(BOOL)arg1;
- (void)setNeedsCandidateMetadata:(BOOL)arg1;
- (void)setCurrentCandidate:(id)arg1;
- (void)setLayoutState:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setTypologyLoggingEnabled:(BOOL)arg1;
- (void)setHardwareKeyboardMode:(BOOL)arg1;
- (void)setKeyboardType:(unsigned int)arg1;
- (void)setAutocapitalizationType:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end