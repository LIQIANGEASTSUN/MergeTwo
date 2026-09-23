using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.Game.Data;
using Merger.MergeBoard.ViewModel;
using Merger.MergeBoardQueue.Data;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.MergeBoardQueue.Views
{
	[RequireComponent(typeof(AnimationGraphPlayer))]
	public class MergeBoardQueueView : ViewBase<MergeBoardQueueViewModel>
	{
		[SerializeField]
		public bool _remainVisible;

		[SerializeField]
		public AnimationGraphPlayer _animationGraphPlayer;

		[SerializeField]
		public string _inNodeName;

		[SerializeField]
		public string _outNodeName;

		[SerializeField]
		public string _idleNodeName;

		[SerializeField]
		public AddressableImage _queuedItemImage;

		[SerializeField]
		public ReactiveButton _dequeueButton;

		[SerializeField]
		public ReactiveText _counterText;

		[SerializeField]
		public GameObject _redDot;

		[SerializeField]
		public GameObject _container;

		public bool IsVisible => false;

		public bool HasItems => false;

		public IPromise ShowQueue()
		{
			return null;
		}

		public IPromise HideQueue()
		{
			return null;
		}

		public void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Start()
		{
		}

		public void OnEnable()
		{
		}

		public void OnGameStateChanged(GameState gameState)
		{
		}

		public void OnDequeueClicked()
		{
		}

		public void UpdateQueueIcon(Merger.MergeBoardQueue.Data.QueuedItem headItem)
		{
		}

		public void OnQueueCountChanged(int queueCount)
		{
		}
	}
}
