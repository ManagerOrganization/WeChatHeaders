//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactsSelectorControllerDelegate.h"
#import "IFacebookAuthExt.h"
#import "IMMFacebookMgrExt.h"
#import "IMMGrowTextViewExt.h"
#import "IMsgExt.h"
#import "MMTwitterAuthExt.h"
#import "SelectorControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCTimelinePOIPickerViewControllerDelegate.h"
#import "scrollViewDelegate.h"

@class ContactsSelectorController, EmoticonBoardView, ImageSelectorController, MMGrowTextView, MMLoadingView, MMScrollView, NSString, NSTimer, RoundTableViewCell, UIButton, UIImageView, UILabel, WCDataItem, WCEditMemberPannel, WCInputController, WCLocationInfo, WCSelectorView, WCTimelinePOIPickerViewController;

@interface WCCommitViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, ContactsSelectorControllerDelegate, UIAlertViewDelegate, IMsgExt, WCFacadeExt, MMTwitterAuthExt, IMMFacebookMgrExt, IFacebookAuthExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    WCLocationInfo *_poiInfo;
    MMScrollView *_scrollView;
    MMGrowTextView *_textView;
    UIImageView *_textViewBkgView;
    WCSelectorView *_withImageView;
    WCSelectorView *_withContactView;
    UIButton *_locationButton;
    UIButton *_qzoneButton;
    UIButton *_facebookButton;
    UIButton *_twitterButton;
    UILabel *_withYouLabel;
    UIImageView *_withYouLogo;
    RoundTableViewCell *_privacyCell;
    WCEditMemberPannel *_editMemberPannel;
    ImageSelectorController *_imageSelectorController;
    ContactsSelectorController *_contactsSelectorController;
    WCInputController *_inputController;
    _Bool _bHasInput;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    unsigned int _iInputSection;
    id <WCCommitViewAnimationDelegate> _delegate;
    WCDataItem *_cacheDateItem;
    MMLoadingView *_loadingView;
    NSTimer *_fireTimer;
    _Bool _bNeedAnimation;
    _Bool _bShowLocation;
    unsigned long long _singlePasteTextMaxLength;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    NSString *_loadingOKStr;
    _Bool m_hasClickDone;
    _Bool m_isUseMMAsset;
    EmoticonBoardView *m_emoticonBoardView;
}

@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView;
@property(nonatomic) _Bool m_isUseMMAsset; // @synthesize m_isUseMMAsset;
@property(retain, nonatomic) NSString *loadingOKStr; // @synthesize loadingOKStr=_loadingOKStr;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool bShowLocation; // @synthesize bShowLocation=_bShowLocation;
@property(nonatomic) _Bool bNeedAnimation; // @synthesize bNeedAnimation=_bNeedAnimation;
@property(nonatomic) __weak id <WCCommitViewAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)couldSelectContacts;
- (void)hideInputController;
- (_Bool)showAddView;
- (void)updateSelectorView;
- (_Bool)shouldJustReturnMMAsset;
- (void)imagesUpdated;
- (void)onWCPostPrivacyChanged;
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)fbDidNotLogin;
- (void)fbDidLogin;
- (void)twitterCheckAccessTokenValidFinished:(int)arg1;
- (void)twitterAuthFinished:(int)arg1;
- (void)twitterWillStartOpenSafari;
- (void)onPOIPickerFinished:(id)arg1;
- (void)OnDone;
- (void)OnPostTimeline;
- (_Bool)checkImageState;
- (void)afterProcessSingleImage;
- (_Bool)processImage;
- (void)OnReturn;
- (void)OnFacebookBinded;
- (void)onLocationBtnClick;
- (void)onTwitterClicked:(id)arg1;
- (void)onFacebookClicked:(id)arg1;
- (void)onPrivacyCellClicked;
- (void)onQZoneClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)bindFacebook;
- (void)bindQQ;
- (void)viewDidUnload;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showPrivacyAlertView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)shareOptionsCheck;
- (void)initView;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)getShowAddress;
- (void)saveShareOptions;
- (void)restoreLastShareOptions;
- (id)getViewController;
- (id)initWithImages:(id)arg1 contacts:(id)arg2;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

