using UnityEngine;

namespace Metacore.Rendering
{
	public interface ICameraInputLock
	{
		void RequestDisableFromInput(Object from);

		void EndRequestDisableFromInput(Object from);

		void DisableInputDialogueRunner();

		void DisableInputMergeBoard();

		void DisableInputMenus();

		void DisableInputDebugMenuItemsList();
	}
}
