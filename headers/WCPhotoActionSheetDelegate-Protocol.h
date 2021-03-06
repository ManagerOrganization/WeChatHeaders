//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, WCPhotoActionSheet;

@protocol WCPhotoActionSheetDelegate <NSObject>

@optional
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 sendVideoWithFileUrl:(NSURL *)arg2;
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 needSelectMorePicureWithAssetArray:(NSArray *)arg2 lastSelectAssetIndex:(unsigned long long)arg3;
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 sendImagesWithAssetArray:(NSArray *)arg2;
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentphotoActionSheet:(WCPhotoActionSheet *)arg1;
- (void)willPresentphotoActionSheet:(WCPhotoActionSheet *)arg1;
- (void)photoActionSheetCancel:(WCPhotoActionSheet *)arg1;
- (void)photoActionSheet:(WCPhotoActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

