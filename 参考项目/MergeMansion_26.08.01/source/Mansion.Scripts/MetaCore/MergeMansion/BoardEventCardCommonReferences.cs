using TMPro;
using UI;
using UI.Buttons;
using UnityEngine;
using UnityEngine.UI;

namespace Metacore.MergeMansion
{
	public class BoardEventCardCommonReferences : MonoBehaviour
	{
		public RectTransform Transform;

		public Image BackgroundImage;

		public Image ForegroundImage;

		public Image HighlightFrame;

		public TimerControl Timer;

		public RedDotIndicator RedDotIndicator;

		public TweenedButton CardButton;

		public TweenedButton CallToActionButton;

		public GameObject EndingSoonObject;

		public GameObject StartingSoonObject;

		public CanvasGroup CanvasGroup;

		public GameObject ActiveElementsParent;

		public TextMeshProUGUI LockedLevelText;

		public GameObject LockedLevelObject;

		public GameObject InReview;
	}
}
