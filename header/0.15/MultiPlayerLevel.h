#pragma once

class MultiPlayerLevel {
public: 
	virtual ~MultiPlayerLevel();
	virtual void addEntity(std::unique_ptr<Entity, std::default_delete<Entity> >);
	virtual void tick();
	virtual void directTickEntities(BlockSource &);
};