//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WindowDelegate.h"
#import "scrollViewDelegate.h"

@class CMessageWrap, MMAnimationTipView, MMProgressView, MMScrollView, MPMoviePlayerController, NSString, NSTimer, NSURL, UIButton, UIImageView, UILabel, UIView, WCActionSheet;

@interface MMMoviePlayerController : MMUIViewController <WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt, UIAlertViewDelegate>
{
    NSURL *m_url;
    NSString *m_videoPath;
    unsigned int m_uiVideoTime;
    _Bool m_bIsFullScreen;
    _Bool m_bLoadFinished;
    _Bool m_bIsPlaying;
    _Bool m_bRestart;
    UIView *m_loadingView;
    UIImageView *imageView;
    MMProgressView *m_progressView;
    UILabel *m_percentageLabel;
    MPMoviePlayerController *m_moviePlayer;
    UIButton *m_playBigButton;
    CMessageWrap *m_msgWrap;
    MMScrollView *m_scrollView;
    UILabel *m_timerLabel;
    NSTimer *m_timerNoRetain;
    MMAnimationTipView *m_tipView;
    UIView *m_maskView;
    struct CGSize m_size;
    _Bool m_isFromFav;
    long long curOrientation;
    double curScreenWith;
    double curScreenHeight;
    _Bool m_bIsStatusBarHidden;
    _Bool m_bSaveMode;
    _Bool m_bDownloadExpired;
    WCActionSheet *m_actionSheet;
    _Bool m_autoRepeat;
    _Bool m_disableSave;
    UIImageView *_thumbImageView;
    double _currentPlaybackTime;
}

@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool m_disableSave; // @synthesize m_disableSave;
@property(nonatomic) _Bool autoRepeated; // @synthesize autoRepeated=m_autoRepeat;
@property(nonatomic) _Bool m_bSaveMode; // @synthesize m_bSaveMode;
@property(nonatomic) _Bool m_isFromFav; // @synthesize m_isFromFav;
@property(retain, nonatomic) NSTimer *m_timerNoRetain; // @synthesize m_timerNoRetain;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) MPMoviePlayerController *m_moviePlayer; // @synthesize m_moviePlayer;
@property(copy, nonatomic) NSURL *m_url; // @synthesize m_url;
- (void).cxx_destruct;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)stopPlaying;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)updateSubViewsRect;
- (void)willAppear;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidUnload;
- (void)resetTableViewOffset:(id)arg1;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2;
- (id)initWithCaptureVideoInfo:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)InternalUpdateVideo:(id)arg1;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changePlayerStatus;
- (void)autoPlay;
- (void)didAppear;
- (void)viewDidLoad;
- (void)initView;
- (void)initVideoPlayerView;
- (void)updateTimerLabel;
- (void)openPlayer;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)delayHideBar;
- (void)onSave:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)initData;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)initLoadingView;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned int)arg1;
- (void)startPlayingWithURL:(id)arg1 at:(id)arg2;
- (void)videoPlayFinished:(id)arg1;
- (void)videoPlayStateChanged:(id)arg1;
- (void)clearPlaying;
- (void)setFullScreen;
- (void)setStandardScreen;
- (void)stopTimer;
- (void)updateTitle;
- (void)startTimer;
- (void)hideToolBar:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGRect)getFullscreenRect;
- (struct CGRect)getStandardRect;
- (struct CGRect)getLabelRect;
- (struct CGRect)getImageViewRect;
- (struct CGRect)getImageViewRectFullAndShowBar;
- (struct CGRect)getMaskViewFrameFullAndHideBar;
- (struct CGRect)getMaskViewFrameFullAndShowBar;
- (void)resetTimeLabel;
- (void)setTimeLabel:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
