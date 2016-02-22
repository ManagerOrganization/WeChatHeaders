//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTimeLineViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "tableViewDelegate.h"

@class NSString;

@interface WCTimeLineViewController (InputView) <tableViewDelegate, BaseEmoticonViewDelegate>
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)updateWordCnt:(int)arg1;
- (void)onHideKeyboard;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)updateContentOffset;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)ensureInitInputView;
- (void)initEmoticonView;
- (void)initInputToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
