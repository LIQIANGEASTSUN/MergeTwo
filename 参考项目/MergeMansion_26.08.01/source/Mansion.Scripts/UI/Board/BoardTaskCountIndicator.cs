using TMPro;
using UnityEngine;

namespace UI.Board
{
	public class BoardTaskCountIndicator : MonoBehaviour
	{
		[SerializeField]
		public RectTransform _rectTransform;

		[SerializeField]
		public TMP_Text _taskCountText;

		public void ShowTaskCountIndicator(bool show)
		{
		}

		public void SetTaskCount(int count)
		{
		}
	}
}
