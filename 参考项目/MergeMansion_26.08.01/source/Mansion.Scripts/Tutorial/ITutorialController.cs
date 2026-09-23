using System.Runtime.CompilerServices;
using GameLogic.Merge;
using GameLogic.Player.Board;
using UnityEngine;

namespace Tutorial
{
	public interface ITutorialController
	{
		Vector3 HandPosition { get; }

		void StartTapAtWorldPosition(Vector2 worldPosition, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StopUITap(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartDragging(int itemId1, ItemVisibility visibility1, int itemId2, ItemVisibility visibility2, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartDragging(Coordinate startPosition, Vector3 endPosition, float startDelay = 0f, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartDragging(Vector3 startPosition, Vector3 endPosition, PositionType positionType, float startDelay = 0f, string callingMethod = "", string callingFilePath = "", int callingFileLineNumber = 0);

		void WaitAndStartDragging(float startDelay, int itemType1, ItemVisibility visibility1, int itemType2, ItemVisibility visibility2, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StopDrag(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartTapAtItem(int itemId, ItemVisibility visibility, float startDelay = 0f, bool allowBubbleItems = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StopTapAtItem(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StopTapAtTransform(bool continueLater = false, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartTapAtUIPosition(float x, float y, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartTapAtUIElement(TutorialUIElement uiElement, float x, float y, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, [CallerMemberName] string callingMethod = "", [CallerFilePath] string callingFilePath = "", [CallerLineNumber] int callingFileLineNumber = 0);

		void StartTapAtTransform(Transform target, float startDelay = 0f, HandVisibility handVisibility = HandVisibility.Always, HandDirection handDirection = HandDirection.Up, string callingMethod = "", string callingFilePath = "", int callingFileLineNumber = 0);

		void ResetTutorialHand();

		void StopAndHide();

		void SetScale(Vector3 value);

		bool HasActiveHand();
	}
}
