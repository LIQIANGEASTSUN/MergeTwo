using System;
using UnityEngine;

namespace UI.Board
{
	public class BoardItemInfoPanel : MonoBehaviour, IItemInfoPanel
	{
		[SerializeField]
		public AnimatedText titleText;

		[SerializeField]
		public AnimatedText descriptionText;

		public IPanelContent Content
		{
			set
			{
			}
		}

		public event Action UndoButtonClicked
		{
			add
			{
			}
			remove
			{
			}
		}

		public void UpdateInfoPanel(IPanelContent content)
		{
		}
	}
}
