using System;
using System.Threading;
using MergePuzzle;
using MergePuzzle.Tutorial.Core;
using UnityEngine;

namespace Paxie
{
	public class BaseSubscriber : MonoBehaviour, IEventReceiver<CanvasEvent.GameplayStatusUpdate>, IEventReceiverBase, IEventReceiver<CanvasEvent.TutorialScreenStatusChange>
	{
		[NonSerialized]
		public CancellationToken _ct;

		[NonSerialized]
		public float _time;

		public static readonly float TickSeconds;

		public bool IsGameObjectDestroyed { get; set; }

		public TutorialStepConfig ActiveTutorialStepConfig => null;

		public TutorialIndex ActiveIndex => default(TutorialIndex);

		public int SequentialTutorialMainIndex => 0;

		public SceneController.State GameState => default(SceneController.State);

		public TutorialController TutorialController => null;

		public RectTransform rectTransform => null;

		public SceneController.State GetGameState()
		{
			return default(SceneController.State);
		}

		public bool IsTutorialState()
		{
			return false;
		}

		public bool IsTutorialActive()
		{
			return false;
		}

		public TutorialStepConfig GetActiveTutorialStep()
		{
			return null;
		}

		public TutorialIndex GetSequentialTutorialMainIndex()
		{
			return default(TutorialIndex);
		}

		public virtual void Awake()
		{
		}

		public virtual void Start()
		{
		}

		public virtual void OnEnable()
		{
		}

		public virtual void OnDestroy()
		{
		}

		public virtual void DOKill()
		{
		}

		public void Update()
		{
		}

		public AddressableReferenceData GetAddressableReferenceData()
		{
			return null;
		}

		public void UpdateImmediateInternal(bool skipTimeCheck)
		{
		}

		public virtual void UpdatePlayingTick(float elapsedTime)
		{
		}

		public virtual void UpdateTutorialTick(float elapsedTime)
		{
		}

		public virtual void UpdatePausedTick(float elapsedTime)
		{
		}

		public virtual void UpdateTick()
		{
		}

		public virtual void OnEvent(CanvasEvent.GameplayStatusUpdate e)
		{
		}

		public virtual void OnEvent(CanvasEvent.TutorialScreenStatusChange e)
		{
		}

		public CancellationToken GetCancellationTokenOnDestroy()
		{
			return default(CancellationToken);
		}
	}
}
