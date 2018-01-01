#ifndef _TYPES_H_
#define _TYPES_H_

typedef enum mpeg_version
{
    mpeg_v2_5,
    mpeg_v2,
    mpeg_v1
}mpeg_version;

typedef enum layer_description
{
    layer3,
    layer2,
    layer1
}layer_description;

typedef enum sampling_rate
{
    Hz44110,
    Hz22050,
    Hz11025,
    Hz48000,
    Hz24000,
    Hz12000,
    Hz32000,
    Hz16000,
    Hz8000
}sampling_rate;

typedef enum channel_mode
{
    stero,
    join_stero, //Stero
    dual_channel, //2 mono channels
    single_channel //Mono
}channel_mode;
    
typedef enum mode_extension
{
    //These are used for Layer 1 and 2
    bands_4, //to 31
    bands_8, //to 31
    bands_12, //to 31
    bands_16, //to 31

    //for use of Layer 3
    exten3
}mode_extension;

typedef struct 
{
    bool intensity_stero;
    bool ms_stero;

}mode_extension_layer3;

typedef enum emphasis
{
    none,
    ms50_15,
    CCIT
}emphasis;
#endif
