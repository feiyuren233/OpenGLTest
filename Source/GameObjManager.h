/*
 * GameObjManager.h
 *
 *  Created on: Jan 12, 2016
 *      Author: feiyu
 */

#ifndef GAMEOBJMANAGER_H_
#define GAMEOBJMANAGER_H_

#include <vector>
#include <utility>
#include "../Game/GameObj.h"
#include "../Game/GameObjComponents.h"
//#include "../Game/"

class GameObjManager {
private:
	enum LoadStrategy{Always, Distance};
	std::vector<std::pair<LoadStrategy, GameObj> > GameObjs;

protected:

public:
	GameObjManager();

	void unPackGameObjs();
	void update();
	virtual ~GameObjManager();
};

#endif /* GAMEOBJMANAGER_H_ */
