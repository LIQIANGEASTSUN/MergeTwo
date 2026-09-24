using System;
using Framework.Core.MVVM.View;
using Framework.Core.MVVM.ViewModel;
using Framework.Util.Pooling;
using MergeEngine.ECS.Components.Items;
using UnityEngine;

namespace Merger.Game.Views.BoardItem.ViewBehaviours
{
	public abstract class BoardItemViewBehaviourBase<TViewModel> : ViewBase<TViewModel>, IBoardItemViewBehaviour, IPoolable where TViewModel : ViewModelBase
	{
		[NonSerialized]
		public BoardItemView2 _boardItemView;

		[NonSerialized]
		public IVisualComponent _visualComponent;

		public IVisualComponent VisualComponent => null;

		public BoardItemView2 BoardItemView => null;

		public bool CanDoUpdate => false;

		public bool Initialized { get; set; }

		GameObject IBoardItemViewBehaviour.gameObject => null;

		public void Initialise(IVisualComponent visualComponent, BoardItemView2 boardItemView)
		{
		}

		public sealed override void Dispose()
		{
		}

		public virtual void OnInitialize()
		{
		}

		public virtual void OnDispose()
		{
		}

		public virtual void BehaviourAdded()
		{
		}

		public virtual void OnUpdate()
		{
		}

		public void Update()
		{
		}

		public RectTransform GetContainer(string containerId)
		{
			return null;
		}

		public TBoardItemViewBehaviour GetBehaviour<TBoardItemViewBehaviour>() where TBoardItemViewBehaviour : BoardItemViewBehaviourBase
		{
			return null;
		}

		public bool HasBehaviour<TBoardItemViewBehaviour>() where TBoardItemViewBehaviour : BoardItemViewBehaviourBase
		{
			return false;
		}

		public virtual bool TryConsumeTap()
		{
			return false;
		}

		public virtual void ShowVisuals()
		{
		}

		public virtual void HideVisuals()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Initialize()
		{
		}

		public void Deactivated()
		{
		}

		public BoardItemViewBehaviourBase()
		{
		}
	}
	public abstract class BoardItemViewBehaviourBase : BoardItemViewBehaviourBase<ViewModelBase>
	{
		public BoardItemViewBehaviourBase()
		{
		}
	}
}
