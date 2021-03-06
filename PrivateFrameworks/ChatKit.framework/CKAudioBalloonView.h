/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAudioProgressView, CKBalloonImageView, NSString, UIImage, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView {
    double _duration;
    BOOL _played;
    BOOL _playing;
    CKAudioProgressView *_progressView;
    double _time;
    NSString *_timeFormat;
    UILabel *_timeLabel;
    UIImage *_waveform;
    CKBalloonImageView *_waveformImageView;
}

@property(getter=isControlHidden) BOOL controlHidden;
@property double duration;
@property(getter=isPlayed) BOOL played;
@property(getter=isPlaying) BOOL playing;
@property(retain) CKAudioProgressView * progressView;
@property double time;
@property(copy) NSString * timeFormat;
@property(retain) UILabel * timeLabel;
@property(retain) UIImage * waveform;
@property int waveformContentMode;
@property(retain) CKBalloonImageView * waveformImageView;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isControlHidden;
- (BOOL)isPlayed;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)progressView;
- (void)setControlHidden:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlayed:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setProgressView:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeFormat:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveform:(id)arg1;
- (void)setWaveformContentMode:(int)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (double)time;
- (id)timeFormat;
- (id)timeLabel;
- (void)updateProgress;
- (void)updateTimeString;
- (id)waveform;
- (int)waveformContentMode;
- (id)waveformImageView;

@end
