
#ifndef DECORSCRIPTING_H
#define DECORSCRIPTING_H

namespace util
{
	class ScriptProcess;
}

namespace game
{
	class Game;
	class GameScriptData;

	/** 
	 * Just the GameScripting commands that deal with decorations and
	 * water seperated to a different file.
	 * (To prevent the GameScripting growing totally enormous.)
	 */
	class DecorScripting
	{
		public:			
			/** 
			 * Just processes one command...
			 */
			static void process(util::ScriptProcess *sp, 
				int command, int intData, char *stringData, ScriptLastValueType *lastValue, 
				GameScriptData *gsd, Game *game);
	};
}

#endif



