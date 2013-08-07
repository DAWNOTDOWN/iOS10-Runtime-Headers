/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIViewControllerAnimatedTransitioning>, <UIViewControllerInteractiveTransitioning>, NSArray, UIView, _UIViewControllerTransitionCoordinator;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {
    float _previousPercentComplete;
    NSArray *_disabledViews;
    struct { 
        unsigned int interactorImplementsCompletionSpeed : 1; 
        unsigned int interactorImplementsCompletionCurve : 1; 
        unsigned int transitionWasCancelled : 1; 
        unsigned int transitionIsCompleting : 1; 
    } _transitionContextFlags;
    BOOL _initiallyInteractive;
    BOOL _isCurrentlyInteractive;
    BOOL _isAnimated;
    BOOL __isPresentation;
    NSArray *__containerViews;
    float __percentOffset;
    <UIViewControllerAnimatedTransitioning> *__animator;
    <UIViewControllerInteractiveTransitioning> *__interactor;
    UIView *_containerView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __willCompleteHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __completionHandler;

    float __completionVelocity;
    int __completionCurve;
    _UIViewControllerTransitionCoordinator *__auxContext;
    int __state;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __interactiveUpdateHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __postInteractiveCompletionHandler;

    int _presentationStyle;
    double __duration;
}

@property(setter=_setContainerViews:,retain) NSArray * _containerViews;
@property(setter=_setPercentOffset:) float _percentOffset;
@property(setter=_setAnimator:) <UIViewControllerAnimatedTransitioning> * _animator;
@property(setter=_setInteractor:) <UIViewControllerInteractiveTransitioning> * _interactor;
@property(setter=_setContainerView:) UIView * containerView;
@property(setter=_setWillCompleteHandler:,copy) id _willCompleteHandler;
@property(setter=_setCompletionHandler:,copy) id _completionHandler;
@property(setter=_setInitiallyInteractive:) BOOL initiallyInteractive;
@property(setter=_setIsCurrentlyInteractive:) BOOL isCurrentlyInteractive;
@property(setter=_setIsAnimated:) BOOL isAnimated;
@property(setter=_setCompletionVelocity:) float _completionVelocity;
@property(setter=_setCompletionCurve:) int _completionCurve;
@property(setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
@property(setter=_setAuxContext:,retain) _UIViewControllerTransitionCoordinator * _auxContext;
@property(setter=_setDuration:) double _duration;
@property(setter=_setState:) int _state;
@property(setter=_setInteractiveUpdateHandler:,copy) id _interactiveUpdateHandler;
@property(setter=_setPostInteractiveCompletionHandler:,copy) id _postInteractiveCompletionHandler;
@property(setter=_setPresentationStyle:) int presentationStyle;
@property(setter=_setIsPresentation:) BOOL _isPresentation;

+ (id)_associatedTransitionContextForObject:(id)arg1;

- (double)_duration;
- (id)init;
- (void)dealloc;
- (void)_setCompletionVelocity:(float)arg1;
- (BOOL)_transitionIsCompleting;
- (BOOL)_transitionIsInFlight;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1;
- (void)_setPreviousPercentComplete:(float)arg1;
- (float)_previousPercentComplete;
- (void)_setPercentOffset:(float)arg1;
- (void)_setContainerViews:(id)arg1;
- (void)_runAlongsideCompletions;
- (void)_interactivityDidChange:(BOOL)arg1;
- (float)_percentOffset;
- (id)_interactiveUpdateHandler;
- (BOOL)isCurrentlyInteractive;
- (void)_setIsCurrentlyInteractive:(BOOL)arg1;
- (void)_setInitiallyInteractive:(BOOL)arg1;
- (void)_setAuxContext:(id)arg1;
- (BOOL)isAnimated;
- (id)_containerViews;
- (int)presentationStyle;
- (void)_setIsPresentation:(BOOL)arg1;
- (void)_setPresentationStyle:(int)arg1;
- (id)_completionHandler;
- (void)_setState:(int)arg1;
- (BOOL)initiallyInteractive;
- (id)_interactor;
- (void)_disableInteractionForViews:(id)arg1;
- (id)_animator;
- (void)_setCompletionCurve:(int)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setIsAnimated:(BOOL)arg1;
- (void)__runAlongsideAnimations;
- (void)_setTransitionIsCompleting:(BOOL)arg1;
- (void)_setInteractiveUpdateHandler:(id)arg1;
- (void)_setCompletionHandler:(id)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setTransitionIsInFlight:(BOOL)arg1;
- (void)_setPostInteractiveCompletionHandler:(id)arg1;
- (id)_postInteractiveCompletionHandler;
- (float)_completionVelocity;
- (void)_setDuration:(double)arg1;
- (id)_auxContext;
- (void)_setWillCompleteHandler:(id)arg1;
- (id)_willCompleteHandler;
- (BOOL)_isPresentation;
- (id)_transitionCoordinator;
- (int)_state;
- (void)_enableInteractionForDisabledViews;
- (void)updateInteractiveTransition:(float)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (BOOL)transitionWasCancelled;
- (BOOL)isInteractive;
- (int)_completionCurve;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)containerView;

@end