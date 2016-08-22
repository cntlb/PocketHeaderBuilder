#pragma once

class Level {
public: 
	virtual ~Level();
	virtual void onSourceCreated(BlockSource &);
	virtual void onSourceDestroyed(BlockSource &);
	virtual void onBlockChanged(BlockSource &, BlockPos const &, FullBlock, FullBlock, int);
	virtual void addEntity(std::unique_ptr<Entity, std::default_delete<Entity> >);
	virtual void addPlayer(std::unique_ptr<Player, std::default_delete<Player> >);
	virtual void addGlobalEntity(std::unique_ptr<Entity, std::default_delete<Entity> >);
	virtual void onPlayerDeath(Player &, EntityDamageSource const &);
	virtual void tick();
	virtual void directTickEntities(BlockSource &);
	virtual void updateSleepingPlayerList();
	virtual void setDifficulty(Difficulty);
	virtual void runLightUpdates(BlockSource &, LightLayer const &, BlockPos const &, BlockPos const &);
	virtual void onNewChunkFor(Player &, LevelChunk &);
	virtual void onChunkLoaded(LevelChunk &);
	virtual void removeEntity(std::unique_ptr<Entity, std::default_delete<Entity> > & &, bool);
	virtual void removeEntity(Entity &, bool);
	virtual void onAppSuspended();
};