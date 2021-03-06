#pragma once

class MinecraftClient {
public: 
	virtual ~MinecraftClient();
	virtual void onLowMemory();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onPushNotificationReceived(PushNotificationMessage const &);
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void useTouchscreen();
	virtual void setTextboxText(std::string const &);
	virtual void update();
	virtual void setUISizeAndScale(int, int, float);
	virtual void setRenderingSize(int, int);
	virtual void init();
	virtual void handleBack(bool);
	virtual void onInternetUpdate();
	virtual void canActivateKeyboard();
	virtual void onLevelCorrupt();
	virtual void onGameModeChanged();
	virtual void onGameSessionReset();
	virtual void createSkin();
	virtual void onLevelExit();
	virtual void onTick(int, int);
	virtual void vibrate(int);
};