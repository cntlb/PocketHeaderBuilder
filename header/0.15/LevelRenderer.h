#pragma once

class LevelRenderer {
public: 
	virtual ~LevelRenderer();
	virtual void onAreaChanged(BlockSource &, BlockPos const &, BlockPos const &);
	virtual void onBlockChanged(BlockSource &, BlockPos const &, FullBlock, FullBlock, int);
	virtual void onBrightnessChanged(BlockSource &, BlockPos const &);
	virtual void allChanged();
	virtual void addParticle(ParticleType, Vec3 const &, Vec3 const &, int);
	virtual void playSound(Entity const &, EntityLocation, std::string const &, float, float);
	virtual void playSound(std::string const &, Vec3 const &, float, float);
	virtual void onNewChunkFor(Player &, LevelChunk &);
	virtual void levelEvent(LevelEvent, Vec3 const &, int);
	virtual void takePicture(TextureData &, Entity *, Entity *, bool, std::string const &);
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onLowMemory();
};