//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FishBottleLogicView.h"

#import "IBottleMgrExt.h"

@interface FishBottleLogicView (BottleMgrDelegate) <IBottleMgrExt>
- (void)OnThrowBackFail;
- (void)OnThrowBack:(unsigned int)arg1;
- (void)OnOpenBottleFail;
- (void)OnOpenBottleOK:(id)arg1 Contact:(id)arg2 MsgWrap:(id)arg3;
- (void)handleOpenBrandUserBottle:(id)arg1;
- (void)OnFishBottleFail:(unsigned int)arg1;
- (void)OnFishBottleOK:(unsigned int)arg1 fishCount:(unsigned int)arg2 msgType:(unsigned int)arg3 userName:(id)arg4 bottle:(id)arg5;
@end
