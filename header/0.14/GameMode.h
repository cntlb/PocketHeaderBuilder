#pragma once

class GameMode {
public: 
	virtual ~GameMode();
	virtual void startDestroyBlock(Player &, BlockPos, signed char);
	virtual void destroyBlock(Player &, BlockPos, signed char);
	virtual void continueDestroyBlock(Player &, BlockPos, signed char);
	virtual void stopDestroyBlock(Player &);
	virtual void startBuildBlock(Player &, BlockPos, signed char);
	virtual void buildBlock(Player &, BlockPos, signed char);
	virtual void continueBuildBlock(Player &, BlockPos, signed char);
	virtual void stopBuildBlock(Player &);
	virtual void tick();
	virtual void getPickRange(Player *, InputMode const &);
	virtual void useItem(Player &, ItemInstance &);
	virtual void useItemOn(Player &, ItemInstance *, BlockPos const &, signed char, Vec3 const &);
	virtual void interact(Player &, Entity &);
	virtual void attack(Player &, Entity &);
	virtual void releaseUsingItem(Player &);
	virtual void setTrialMode(bool);
	virtual void isInTrialMode();
	virtual void registerUpsellScreenCallback(std::function<void (bool)>);
};