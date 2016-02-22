//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSMsgItem, MMHeadImageView, MMUILabel, NSArray, NSString;

@interface FTSMsgCell : MMTableViewCell
{
    FTSMsgItem *_msgItem;
    unsigned long long _mergeCount;
    NSString *_searchText;
    NSArray *_arrKeyword;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_prefixDetailLabel;
    _Bool _hiddenMode;
}

@property(nonatomic) _Bool hiddenMode; // @synthesize hiddenMode=_hiddenMode;
@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateMsgItem:(id)arg1 searchText:(id)arg2 keywords:(id)arg3 mergeCount:(unsigned long long)arg4;
- (void)updateStatus:(_Bool)arg1;
- (_Bool)isTrailSurrogates:(unsigned short)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 hiddenMode:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
