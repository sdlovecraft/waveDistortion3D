#include "ofMain.h"
#include "AudioData.h"

class ImageMeshClass {
public:
    void setup(int videoNum, string sceneName, int H, int W, int meshSize);
    void draw();
    void update(AudioData audioData);
    ofXml settings;
    
    ofParameterGroup noiseParameters1;
    ofParameterGroup noiseParameters2;
    ofParameterGroup positionParameters;
    ofParameterGroup rotationParameters;
    
    ofParameter<float> noiseAmp1;
    ofParameter<float> noiseAmp2;
    ofParameter<float> freqX1;
    ofParameter<float> freqX2;
    ofParameter<float> freqY1;
    ofParameter<float> freqY2;
    ofParameter<float> speed1;
    ofParameter<float> speed2;
    int H;
    int W;
    int meshSize;

private:
    
    ofParameter<float> rX;
    ofParameter<float> rY;
    ofParameter<float> rZ;
    ofParameter<float> tX;
    ofParameter<float> tY;
    ofParameter<float> tZ;
    
    string videoName;
    ofMesh mesh;
    ofVideoPlayer video;
    ofImage image;
    ofFbo fbo;
    ofPixels fboPixels;
    int width;
    int height;
};
